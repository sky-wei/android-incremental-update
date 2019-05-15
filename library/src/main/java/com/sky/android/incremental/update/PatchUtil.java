package com.sky.android.incremental.update;

/**
 * Created by sky on 2019-05-15.
 */
public class PatchUtil {

    private PatchUtil() {
    }

    static {
        System.loadLibrary("bspatch");
    }

    /**
     * 合并差异包
     * @param oldFilePath 旧版本文件路径
     * @param newFilePath 新版本文件路径
     * @param patchFilePath 差异文件路径
     * @return
     */
    public native static boolean patch(String oldFilePath, String newFilePath, String patchFilePath);
}
