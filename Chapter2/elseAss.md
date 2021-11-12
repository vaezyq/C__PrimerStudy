### 2.1 



![image-20211111190140800](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111190140800.png)



![image-20211111190145470](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111190145470.png)





### 2.2

double double double



### 2.3



:red_circle:



![image-20211111190538928](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111190538928.png)



注意在第二个存在的错误，unsigned的位数和int是一致的，而不是和short一样。



1. 32
2. -$(2^{16}-32)$

3. 32
4. -32
5. 0
6. 0



### 2.5



:red_circle:

首先，说下窄字符char了，大家都很清楚，就是8bit表示的byte，长度固定。char字符只能表示ASII码表中的256个字符，包括前128个可见字符和后面的128个不可见字符。

       而wchar_t则是因为char所能表示的字符数太少(256个)而应运而生的，它的长度可以8bit，16bit，32bit,长度是与不同平台上的c库相关的。其实这个长度是根据指定平台上想要用的encoding编码方式来设定的。




* 字符、宽字符、字符串、宽字符串
* int 、unsigned、无符号long、八进制10、十六进制12
* 浮点数、float、long double
* int、无符号、浮点数、0.1



### 2.6



第一行是十进制

第二行是八进制



### 2.7



![image-20211111191638520](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111191638520.png)





### 2.9



* 错误，int需要单独定义
* 正确
* wage需要定义为double
* 正确





### 2.10



global_str “”

global_int 0

local_int 不确定

local_str “”



### 2.11





1. 定义
2. 定义
3. 声明







### 2.12 



![image-20211111192050423](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111192050423.png)



a、c、d、e





### 2.13

100



### 2.14



合法：100 45



### 2.15

 

b 引用不能绑定字面值

d 引用不初始化







### 2.16 



a 正确 把d赋值成3.14159

b 正确 d的值为0

c 正确 i的值为0

d 正确 i的值为0



### 2.17



10 10



### 2.19



:red_circle:



![image-20211111193201283](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111193201283.png)





### 2.20



把i的值更改为其值的平方



### 2.21





:red_circle:

![image-20211111194134687](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111194134687.png)

a是错误的，类型不一致



### 2.22



判断指针是否为空

判断指针指向的对象的值是不是空







### 2.23



:red_circle:

![image-20211111194335697](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111194335697.png)



### 2.24



void *可以指向任何类型，但是第二个类型是不匹配的



### 2.25



ip:指向int的指针

i:int

r:i的引用

---

i:int

ip:指向int的指针，数值为0

---

ip:指向int的指针

iP2:int



### 2.26 



非法

合法

合法

非法



### 2.27



b、c、d、e、g



### 2.28



:red_circle:



![image-20211111195217324](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111195217324.png)



a: cp必须初始化

b: pa必须初始化

d:p3必须初始化





### 2.29



:red_circle:

![image-20211111195527849](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111195527849.png)

a、d、e





### 2.30 

 



v2:顶层

p2:底层

p3:顶层和底层

r2:底层



### 2.31



r1 =v2

p2 = p1

p2 = p3



### 2.32 





![image-20211111200135420](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111200135420.png)





### 2.33



d、e、g都是非法的







### 2.35 



i 整型常量

 j 整型

k 整型常量的引用

p 指向整型常量的指针

j2 整型常量

k2 整型常量的引用





### 2.36 

 



![image-20211111201102170](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111201102170.png)



a=3

b= 4

c=4

d= 4





### 2.37



![image-20211111201219052](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111201219052.png)



a 3 

b 4

c 3

d 3.同时为a的引用



### 2.38



![image-20211111201259980](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111201259980.png)





![image-20211111201308657](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111201308657.png)



![image-20211111201316928](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111201316928.png)



![image-20211111201322232](C:\Users\22126\AppData\Roaming\Typora\typora-user-images\image-20211111201322232.png)





























