cmake_minimum_required(VERSION 3.4.1)

add_library(bspatch SHARED
        patch_util.cpp alog.h
        bspatch.c
        bzip2/blocksort.c
        bzip2/bzip2.c
        bzip2/bzlib.c
        bzip2/compress.c
        bzip2/crctable.c
        bzip2/decompress.c
        bzip2/huffman.c
        bzip2/randtable.c
        )

# Include libraries needed for bspatch lib
target_link_libraries(bspatch
                      android
                      log)