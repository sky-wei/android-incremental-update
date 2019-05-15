### android-incremental-update

这是 __Android__ 端的 __增量更新__ 合并差异包项目,主要依赖于 ___bspatch___ 这个库,目前把这个库打包到so文件中。 
调用相应的java代码即可合并相应的包。  

__注意:__ 在使用项目之前需要先使用 __bsdiff__ 在pc端把相应的差异文件生成好。  

PC端使用 __bsdiff__ 与 __bspatch__ 可以参考:
[https://www.cnblogs.com/rainboy2010/p/7400317.html](https://www.cnblogs.com/rainboy2010/p/7400317.html)