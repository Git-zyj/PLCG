/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 0));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 += (((((((arr_1 [i_0]) ^ 248)) ^ ((min(var_2, var_7))))) | var_14));
        var_17 ^= -82512109;
        arr_3 [i_0 - 2] = ((var_12 ? (arr_1 [i_0 - 1]) : ((((4803641329964633674 && (((7676903026783432893 ^ (arr_1 [i_0 - 1]))))))))));
        arr_4 [i_0 + 1] = ((((~(min(var_7, 248))))) ? 44 : var_1);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1 + 1] [9] &= (((-var_11 ? ((~(arr_5 [i_1]))) : var_6)));
        var_18 = (min(4294967282, (((!(((var_12 ? 0 : (arr_6 [i_1 - 2] [i_1 - 2])))))))));
        var_19 ^= (((((!-4107471677843114504) ? (arr_5 [i_1 - 2]) : var_2)) % (((((-(arr_6 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = (~(arr_8 [i_2]));
        arr_11 [i_2] = -var_7;
        var_21 = (((1833853832 ? 10769841046926118722 : 255)));
    }
    #pragma endscop
}
