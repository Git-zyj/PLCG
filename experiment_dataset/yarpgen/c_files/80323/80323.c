/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (((!9223372036854775800) & (!7713285926496492881)));
        var_12 = (min(var_12, 1022464810));
        var_13 += (max(var_3, (-9223372036854775802 % -1358776092)));
        arr_3 [i_0] = ((var_3 ? ((1 ? 3272502485 : 19)) : (var_0 >= var_6)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (((var_2 < var_2) ^ ((47 ^ (3877556309 > var_4)))));
        arr_8 [i_1] = 8192;
        var_15 = 1;
        arr_9 [i_1] [0] = ((((var_5 != var_8) >> (((((-47 + 2147483647) >> 0)) - 2147483592)))));
    }
    var_16 = var_3;
    #pragma endscop
}
