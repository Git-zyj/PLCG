/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_2;
    var_19 = (max(var_19, ((((max(((var_7 ? 187 : var_9)), 251)) - (min(1825195477, (min(var_6, var_10)))))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 -= (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : ((((min(var_7, var_13))) ? 21 : (((arr_1 [4]) ? (arr_1 [6]) : (arr_1 [i_0])))))));
        var_21 = (min((arr_2 [i_0 + 1]), var_6));
        arr_3 [14] &= (((arr_0 [i_0] [11]) ? var_1 : (arr_2 [i_0 - 2])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 += (((arr_5 [i_1] [20]) > (min((arr_4 [i_1]), (25625918 ^ 172)))));
        var_23 = (min(var_23, (((20673 ? 2469771827 : -1113831598)))));
        var_24 = (max(var_24, (arr_6 [i_1])));
        arr_7 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_25 = (min(var_25, 3536208171));
        var_26 = (min(var_26, (arr_5 [i_2 - 3] [12])));
    }
    var_27 = var_12;
    var_28 = var_16;
    #pragma endscop
}
