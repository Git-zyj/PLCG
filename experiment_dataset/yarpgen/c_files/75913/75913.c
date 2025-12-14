/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((((((var_12 ? 8948299124337539403 : var_10))) ? var_6 : var_4)), var_4)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, ((min(6250876206152272245, (((-65534 | ((1799016249 ? -2147483621 : 46440))))))))));
        arr_2 [i_0] = ((~(arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (((((((((50117 ? (arr_4 [19] [1]) : (arr_3 [i_1])))) && var_9)))) >= ((min(1858392596901444637, -1782939222)))));
        var_15 = (min(var_15, ((((~var_12) ? (min((arr_3 [i_1]), (arr_4 [i_1] [i_1]))) : (65525 & 132))))));
        var_16 = (min((arr_4 [i_1] [i_1]), ((((((18446744073709551603 ? (arr_3 [i_1]) : 1782939221))) || (arr_3 [i_1]))))));
        var_17 &= 7506;
        arr_6 [i_1] = (14168086647160540424 / 1);
    }
    #pragma endscop
}
