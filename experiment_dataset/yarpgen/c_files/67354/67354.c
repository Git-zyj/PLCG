/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((2147483647 ? (var_4 || var_1) : var_8));
    var_13 *= (~24576);

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0 - 2] = ((192 << (((arr_1 [15]) - 1938529819))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                var_14 = (max(var_14, var_5));
                var_15 += 7;
                arr_13 [i_0 + 1] [i_0 + 1] = (arr_8 [i_0 - 2]);
                arr_14 [i_0 - 2] = ((arr_11 [i_2] [i_1] [i_0 - 2]) ? (arr_0 [i_0 - 2] [i_2 - 2]) : ((((-980586859567037985 | var_3) ? var_6 : 24))));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_16 = (min(var_16, (var_2 < -24577)));
                var_17 = (arr_6 [i_0 + 1] [i_1] [i_3 + 3]);
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_20 [i_0 - 2] [i_1] [i_4] = ((((((63 || -12233) ^ var_5))) ? ((~((var_7 ^ (arr_17 [i_0 + 1] [11] [i_0 - 1] [i_0]))))) : (((((arr_9 [i_0] [13] [i_1] [i_4]) ? var_8 : -24577))))));
                var_18 = ((0 ^ ((((253 > var_5) ? -24577 : ((1 ? (arr_7 [i_1]) : (arr_10 [i_0 + 1] [10]))))))));
                arr_21 [16] [i_4] = ((min((~32183), 232)));
                var_19 = 281200098803712;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_31 [i_5] = (arr_6 [i_1] [i_5] [i_7]);
                            arr_32 [i_0] [i_1] [i_6] [i_7 - 1] = ((~(max((arr_2 [12]), (-1 | 1055531162664960)))));
                        }
                    }
                }
                arr_33 [i_0] [i_1] [i_5] = ((+((min((arr_26 [i_0 - 2]), 12226)))));
                var_20 = (-24577 < -2698121225563780678);
                var_21 = (((((90 ? 24 : 65))) ? ((397654469 ? (((arr_7 [i_0]) ? 6044358081892418212 : var_7)) : (arr_15 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))) : ((min(2147483647, -126)))));
            }
            var_22 = 85;
        }
        var_23 = var_4;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_24 = 41;
        var_25 = (min(var_25, 81));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_26 += var_5;
                        arr_44 [i_8] [i_9] [i_10 - 1] [i_8] = (~-6044358081892418212);
                        var_27 = 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
