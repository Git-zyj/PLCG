/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (max(((((arr_2 [i_0]) <= (arr_2 [i_0])))), (arr_2 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_15 ^= var_2;

                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_16 = ((((arr_8 [i_0] [i_1] [i_2] [i_3]) / var_1)));
                    arr_13 [i_0] [i_1] [i_3] [i_3] = (arr_12 [i_0] [i_1] [i_2] [i_3]);
                    var_17 += 1;
                    var_18 += 14566110910904728178;
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = (arr_11 [i_0] [i_5] [i_2] [i_4] [i_4]);
                        var_20 = (min(var_20, ((((var_8 ? -112 : var_6)) != var_5))));
                        arr_20 [i_4] [i_4] [i_2] [i_4] = ((((var_9 ? var_5 : (arr_18 [i_4]))) & -124));
                    }
                    var_21 *= 91;
                    var_22 = -103;
                }
                arr_21 [i_0] [i_1] = (((((var_1 ? 72 : 110))) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_2])));
            }
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                arr_24 [i_0] [i_0] [i_0] = var_13;
                var_23 = ((86 | (arr_9 [i_1] [i_1] [i_6] [i_6 - 1])));
                var_24 = var_0;
                var_25 = var_0;
            }
            arr_25 [i_0] [i_0] [i_1] = (!-8);
            var_26 = (max(var_26, -32));
            var_27 = (((arr_5 [i_1] [i_1] [i_0]) | (arr_5 [i_0] [i_0] [i_0])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_28 |= (((126 && -0) >= (arr_19 [i_0] [i_7] [i_7] [i_7] [i_0] [i_7])));
            arr_29 [i_7] = ((!((max(102, 112)))));
        }
        for (int i_8 = 4; i_8 < 23;i_8 += 1)
        {
            var_29 = arr_23 [i_0] [i_8] [i_8 + 2];
            arr_33 [i_0] [i_8] = ((-91 | (arr_10 [i_0] [2] [i_0])));
            arr_34 [i_0] [i_8] [i_8] = ((((((min(-112, 15))) ^ (~-3))) & (((arr_30 [i_8 - 1] [i_8 + 2]) - -92))));
            var_30 *= ((max((arr_30 [i_0] [i_8]), (arr_14 [i_0] [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_31 = (max(var_31, (((((arr_32 [i_0] [i_8] [i_10]) ? -113 : var_5))))));
                        var_32 = (min(var_32, ((((((var_10 ? var_8 : (((var_10 ? (arr_0 [i_8] [i_10]) : (arr_0 [i_8] [i_9]))))))) ? -95 : var_11)))));
                        arr_40 [i_0] [i_0] [i_10] [i_9 + 1] [i_10] = ((((((min((arr_2 [i_0]), var_0)) / (13881836692376014118 ^ var_3)))) ? var_1 : (arr_23 [i_10] [i_8] [i_0])));
                        var_33 = (((((((arr_12 [i_8 + 1] [i_8] [i_8 - 4] [i_8 + 1]) <= var_10))) != var_10)) ? (max(8734614246552742314, (arr_31 [i_8]))) : (!var_11));
                        var_34 = (max(var_2, (max((arr_26 [i_0]), (~119)))));
                    }
                }
            }
        }
        var_35 = (max(var_35, (arr_12 [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_36 = ((((arr_5 [i_11] [i_11] [i_11]) ? (arr_27 [i_11]) : var_5)));
        arr_44 [i_11] = (((arr_10 [i_11] [i_11] [i_11]) << (-126 + 137)));
        var_37 = (((arr_9 [i_11] [i_11] [i_11] [i_11]) ? 127 : (arr_37 [i_11] [i_11])));
    }
    var_38 = (min(var_38, (!var_7)));
    #pragma endscop
}
