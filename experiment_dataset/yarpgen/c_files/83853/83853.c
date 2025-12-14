/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_11 ? ((~((max(-83, var_7))))) : (max(((max(var_5, var_2))), ((33112 * (-127 - 1)))))));
    var_13 = min(var_2, (((((-778999157 ? var_3 : var_10))) ^ -var_1)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 |= (((max((((arr_1 [i_0]) << (12951 - 12930))), (arr_2 [17] [1]))) * (max((((8321499136 ? 3794 : -2014757488035455059))), (min(154460741, (arr_1 [i_0 + 1])))))));
        var_15 = ((((((max(-24928, var_7))) || -8321499139)) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_16 ^= ((arr_4 [15] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [15]));
        arr_6 [i_1] [i_1] = (6121865037930936936 * -24928);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 = (arr_0 [19]);
        var_18 = (min(var_18, ((((arr_4 [i_2] [i_2]) / (arr_4 [i_2] [4]))))));
        arr_9 [i_2] [i_2] = 65527;
    }
    var_19 = var_5;
    var_20 = (max(var_5, ((var_5 && ((max(215, 24674)))))));
    #pragma endscop
}
