/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 ^= (((((3328 ^ (arr_1 [i_0] [i_0])))) ? ((18340 - (arr_0 [i_0] [i_0]))) : (!0)));
        var_11 -= (+((var_2 ? ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_4)))));
        arr_2 [i_0] &= (((((-3359 ? var_7 : 127))) ? ((((((arr_0 [i_0] [i_0]) ? -3330 : (arr_0 [i_0] [i_0])))) ? ((-3355 ? 1736155904 : 19650)) : ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_3))))) : (arr_1 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_3 - 1] [i_1] [i_1] [i_0] [i_0] |= (((((var_1 ? 113 : (arr_10 [i_0] [i_0] [i_0] [1])))) ? ((54716 ? var_9 : 12629927776608989115)) : (arr_3 [i_0] [i_0])));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_12 += ((((((arr_1 [i_0] [i_1]) ? 4294967295 : (arr_5 [i_4] [i_3 - 2])))) ? var_1 : (arr_5 [i_3] [i_4 + 3])));
                            var_13 |= ((-(arr_6 [i_1 + 1])));
                        }
                    }
                }
            }
            var_14 = (max(var_14, var_8));
            var_15 ^= (((arr_11 [i_0] [2] [i_0] [i_0] [i_1 + 1]) >= (arr_1 [i_0] [i_0])));
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_19 [0] |= ((3371 ? ((19650 ? 3013926929 : 12629927776608989115)) : ((1281040361 ? (arr_17 [22]) : var_8))));
        var_16 = (max(var_16, ((((((3013926929 ? (arr_17 [10]) : (arr_17 [20])))) ? ((9742 ? (((var_9 ? -7256 : (arr_18 [10])))) : ((180 ? (arr_17 [4]) : var_6)))) : (((((((arr_18 [0]) ? (arr_17 [0]) : (arr_17 [4])))) ? var_3 : (arr_18 [16])))))))));
    }
    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        var_17 -= (((((var_4 ? (arr_22 [i_6 + 1] [i_6 + 2]) : var_5))) ? ((((((arr_23 [i_6]) ? var_4 : var_9))) ? (arr_16 [i_6 - 3]) : (((arr_22 [i_6] [i_6 - 1]) ? (arr_22 [i_6] [i_6 - 2]) : -3330)))) : (((arr_17 [12]) ? (arr_16 [i_6 - 1]) : ((var_1 ? (arr_18 [12]) : var_5))))));
        var_18 ^= ((((137 ? var_2 : (arr_22 [i_6 - 2] [i_6])))) ? ((var_3 ? 15368 : var_4)) : ((var_0 ? 639403178 : var_3)));
        var_19 = (max(var_19, ((((((~((var_4 ? (arr_20 [i_6]) : 0))))) ? (((arr_21 [i_6] [i_6 - 4]) & (((var_4 ? -7250 : (arr_23 [i_6 + 2])))))) : (((1 ? (((arr_16 [18]) ? 75 : 102)) : var_8))))))));
        var_20 ^= (~((-((var_3 ? var_9 : var_0)))));
    }
    for (int i_7 = 2; i_7 < 24;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_21 *= (((((33330 ? 5597496778604643967 : 56))) ? var_5 : 56));
            var_22 ^= (((var_8 ? var_1 : (arr_27 [i_7] [i_7] [i_7]))));
        }
        var_23 = (min(var_23, (((-11 ? ((-8948909752754180677 ? 639277751 : var_3)) : ((((arr_27 [i_7 - 1] [i_7] [i_7 - 1]) ? 6320 : 0))))))));
        var_24 |= ((~(var_2 - 1987242017)));
    }
    var_25 += ((var_4 ? ((var_9 ? ((2795342988 ? 0 : var_7)) : (var_9 >> var_3))) : (((!(((var_1 ? var_6 : var_2))))))));
    #pragma endscop
}
