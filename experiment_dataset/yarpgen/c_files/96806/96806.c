/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((1 ? 8 : -48))) ? (min(5, (arr_0 [i_0] [i_1]))) : (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = (arr_6 [i_1] [6] [i_1]);
                            var_12 = ((((((arr_0 [i_2 - 1] [i_2 - 1]) | (arr_0 [i_2 - 1] [i_2 - 1])))) ? ((var_0 ? ((14 & (arr_8 [i_0] [i_0] [i_0]))) : ((-1 ? 4294967273 : 737694280)))) : -5));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_4] [i_1] [i_0] = ((var_7 - (((((arr_7 [i_0]) != 1169483152704430924)) ? (arr_4 [i_5 - 1] [i_5 + 1]) : ((((arr_10 [i_0] [i_0] [i_5] [i_0]) ? var_4 : (arr_8 [i_0] [i_0] [3]))))))));
                                var_13 = ((+(min((arr_2 [i_0]), (arr_18 [i_4] [i_4] [i_5 - 1] [i_5 + 1] [i_5 + 1])))));
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_5] [i_1] [i_6] = ((var_9 ? 511 : (((-1 ? var_3 : var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_10));

    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        arr_24 [i_7] = (~7);
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_32 [i_7] [i_7] [i_9] [i_9] [i_7] [i_7] = (!var_9);
                        arr_33 [i_7] [i_7] [i_9] [i_10] = ((arr_27 [i_10] [i_8] [i_8 + 1]) | var_4);
                        var_15 = (max(var_15, (arr_29 [i_9] [i_9] [i_9 + 1])));

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            arr_37 [i_11] [i_9] [i_9] [i_7] = (((arr_23 [i_10 - 1] [i_8 + 1]) <= var_2));
                            arr_38 [i_9] [i_8] [i_9] [i_8] [i_9] = -var_6;
                            arr_39 [i_9] [i_9] = 3338699657;
                            arr_40 [i_9] [i_7] [i_10] [i_9] [i_9] [i_8] [i_9] = ((!(arr_28 [i_9 + 1] [i_7 + 1])));
                        }
                    }
                    var_16 = (arr_35 [i_7] [i_7] [i_9] [i_9] [i_9]);
                    arr_41 [i_7] [i_8] [i_9] [5] = max(((max((arr_23 [i_8] [i_8 - 3]), (arr_23 [i_9] [i_8 - 3])))), ((-(arr_23 [i_9] [i_8 - 3]))));
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        arr_46 [i_12] = ((min((((arr_31 [i_12] [4] [i_12] [i_12] [i_12] [i_12]) / (arr_18 [1] [1] [i_12] [1] [1]))), (arr_45 [i_12]))));
        arr_47 [i_12] = (arr_12 [i_12] [i_12] [i_12]);
        var_17 -= ((((((arr_23 [i_12] [i_12]) ? (arr_31 [i_12] [1] [1] [6] [16] [i_12]) : var_6)) == ((max(142, var_9))))));
    }
    for (int i_13 = 2; i_13 < 21;i_13 += 1)
    {
        arr_51 [i_13] = (min(-14, 144115188075855871));
        arr_52 [0] [i_13] |= 1;
    }
    #pragma endscop
}
