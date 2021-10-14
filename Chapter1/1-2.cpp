//
// Created by 22126 on 2021/10/14.
//

#define main2 main2

int main2() {
    return -1;
}

/**
* Windows 7操作系统并不处理或报告程序返回的错误标识，直观上，返回-1的程序与返回0的程序在执行效果上并无不同。
 * 但环境变量ERRORLEVEL记录了上一个程序的返回值。因此，在控制台窗口执行修改后的程序，接着执行echo %ERRORLEVEL%，会输出-1。
 * 在Linux系统中，执行echo $?有类似效果
 * 注意在windows系统中不要在Clion的终端执行，要去windows的cmd命令行执行
*/