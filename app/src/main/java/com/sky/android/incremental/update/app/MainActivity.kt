package com.sky.android.incremental.update.app

import android.os.Bundle
import android.os.Environment
import androidx.appcompat.app.AppCompatActivity
import com.sky.android.incremental.update.PatchUtil
import java.io.File
import kotlin.concurrent.thread

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        thread { test() }
    }

    private fun test() {

        val dir = File(Environment.getExternalStorageDirectory(), "test")
        val oldFile = File(dir, "old.apk")
        val newFile = File(dir, "new.apk")
        val patchFile = File(dir, "new.patch")

        PatchUtil.patch(oldFile.path, newFile.path, patchFile.path)
    }
}
