/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (1 & -7755409842241691496);
        arr_2 [11] = ((~(arr_1 [i_0] [i_0])));
        var_17 = ((((var_3 << ((((var_15 ? var_8 : 7755409842241691493)) - 47966807285799662)))) * (arr_0 [i_0])));
        var_18 += ((((((((arr_1 [i_0] [1]) ? var_7 : var_15))) ? (arr_1 [i_0] [12]) : (arr_0 [5])))) ? (((((var_10 + 9223372036854775807) >> (var_6 - 10141768948383299251))) >> (((arr_0 [i_0]) - 487526922617211245)))) : var_1);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_0 [i_1 + 2]) << (var_0 + 3061998447843950828)));
        var_19 = (min(var_19, ((((arr_6 [i_1 + 2]) ? (arr_3 [i_1]) : (arr_1 [i_1 - 1] [i_1 + 2]))))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_20 = (min(var_20, var_3));
            var_21 = (max(var_21, (((arr_4 [i_1 + 1]) ? (arr_9 [i_1 + 1] [i_1 + 1] [5]) : (arr_5 [i_1] [i_1 + 1])))));
            var_22 = ((((((((arr_8 [i_1] [i_2]) + 2147483647)) << (15 - 15)))) ? (arr_4 [i_1 - 1]) : var_8));
        }
    }
    var_23 = var_11;

    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        var_24 ^= (((arr_9 [i_3] [i_3] [i_3 + 3]) / -7755409842241691485));
        var_25 = (max(var_25, (((((max(var_14, (arr_10 [i_3 + 3])))) ? (min((arr_10 [i_3 + 3]), (arr_10 [i_3 + 3]))) : (arr_10 [i_3 - 1]))))));
        var_26 = -7755409842241691486;
        var_27 -= (min(var_4, var_4));
        arr_13 [i_3 + 3] = (arr_9 [1] [1] [i_3]);
    }
    #pragma endscop
}
