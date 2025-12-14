/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((!((max(((var_4 ? var_12 : var_0)), (var_2 || var_4))))));
    var_19 = (((var_11 <= var_15) ? (((var_6 << ((((var_10 ? var_2 : var_2)) - 52))))) : (min(var_17, ((var_17 ? var_2 : var_16))))));
    var_20 |= (!var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 |= ((194 ? 116 : 255));
        arr_2 [i_0] = ((!((((arr_0 [1]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [4] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (min((arr_5 [i_1] [i_1]), ((~(arr_4 [i_1])))));
        var_23 += 47570;
        arr_6 [i_1] [i_1] = (((arr_4 [i_1]) ? (((arr_5 [i_1] [i_1]) ^ (max(1853343237, 30920)))) : (((((-10344 ? 1174333330880720769 : var_8))) ? var_9 : ((min(var_15, (arr_4 [i_1]))))))));
        var_24 -= (max(1174333330880720741, 2415905286840598952));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_25 = (max(-5108545350145972282, var_0));
        var_26 *= (max((((arr_8 [i_2]) ? var_2 : (max((arr_8 [2]), var_11)))), ((max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2]))))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_27 ^= ((1 >= 60067) >> (max((~var_12), (var_2 & var_15))));
        arr_12 [i_3 - 1] [i_3] = (min((arr_11 [i_3 + 1] [i_3]), (max(var_6, ((max(-1174333330880720769, -2933679654319645527)))))));
    }
    var_28 = var_14;
    #pragma endscop
}
