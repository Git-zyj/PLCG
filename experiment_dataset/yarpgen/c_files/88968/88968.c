/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = 1;
        var_11 *= (min(((((arr_2 [i_0] [i_0]) && 18446744073709551615))), ((17 ? 254 : (arr_2 [i_0] [10])))));
        var_12 = (max(var_12, ((((min((arr_1 [1]), (((arr_3 [i_0]) ? (arr_3 [i_0]) : var_2)))) == var_2)))));
        var_13 = ((((~((max(238, (arr_2 [i_0] [i_0])))))) % (arr_2 [i_0] [i_0])));
    }
    var_14 = var_5;
    var_15 = var_0;
    #pragma endscop
}
