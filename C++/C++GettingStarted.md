[toc]
# 变量
- 作用:给一段内存空间命名，方便操作这段内存空间。
- 变量创建: [数据类型] [变量名称] = [变量初始值];
```c++
int a = 10;
```

# 数据类型
给变量分配一个合适的内存空间
## 整型
|数据类型|占用空间|取值范围|
|----|----|----|
|short| 2字节|-2^15 ~ 2^15-1|
|int| 4字节|-2^31 ~ 2^31-1|
|long|windows下4字节; linux下4字节(32位)、8字节(64位)|-2^31 ~ 2^31-1|
|long long|8字节|-2^63 ~ 2^63-1|

# 关键字
## sizeof()
计算数据类型所占内存的大小
语法: sizeof(数据类型/变量)