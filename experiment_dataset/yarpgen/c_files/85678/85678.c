/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 * ((((var_10 < ((3037103799 ? 3037103786 : var_6))))))));
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] |= ((((~250) ? 16 : -20)));
        arr_4 [i_0] [10] = 1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_1 - 1] [i_2] [i_1 - 1] = ((((var_10 ? (arr_6 [i_1]) : 4144461538748182963))) ? (arr_8 [i_1] [i_1]) : ((((var_6 > (arr_5 [i_1]))))));
            arr_10 [i_1] [11] [11] = ((1 ? (arr_8 [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1] [i_1] [i_2])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_13 [i_1] [i_3] = ((9 <= (arr_12 [i_1] [i_1 - 1] [i_1 - 1])));
            arr_14 [i_1] [i_3] [i_3] = var_3;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_13 = (((var_4 ? (arr_16 [i_3] [i_3] [i_4] [i_5]) : var_3)));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_14 = ((((var_7 ? var_1 : (arr_11 [i_1 - 1]))) / 32713));
                            arr_24 [i_3] [i_3] = ((var_7 ? var_8 : (arr_20 [i_3] [i_4 + 2] [i_3] [i_3])));
                            arr_25 [i_3] [15] [i_3] [i_5] = ((arr_6 [i_1]) != (arr_19 [i_3] [i_1 - 1]));
                        }
                        var_15 *= 1;
                        arr_26 [i_3] = (-9223372036854775807 - 1);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_16 = (((((~(arr_16 [i_8] [i_8] [i_8] [i_1])))) ? ((((var_1 == (arr_16 [i_8] [i_8] [i_8] [i_8]))))) : ((var_6 ? (arr_27 [i_8] [i_8] [i_8]) : var_6))));
                    arr_32 [i_8] [i_8] = (~var_4);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_15 [i_1] [i_1] [i_10]) ? (((var_8 ? (-127 - 1) : 9))) : (((arr_22 [i_1] [i_1] [1] [i_10] [i_10] [i_1]) >> (-90 + 91))))))));
                    arr_38 [i_9] [i_1 - 1] [i_9] [i_9] = ((6 ? ((((arr_12 [5] [i_9] [i_10]) ^ var_4))) : (arr_8 [i_1 - 1] [i_9])));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            arr_47 [i_11] [3] [3] = min((min(-16511, (((arr_8 [i_12] [i_11]) | var_2)))), (((((arr_6 [i_11]) || var_3)))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_56 [i_11] [i_12] [1] [i_14] [i_12] = var_3;
                            arr_57 [i_11] = ((((max((arr_23 [i_15 - 1]), (arr_23 [i_15 - 1])))) ? ((-(arr_46 [i_15] [i_13] [i_11]))) : (arr_42 [i_11] [8])));
                        }
                    }
                }
            }
        }
        arr_58 [i_11] [i_11] = (max(((34 ? var_1 : (arr_48 [i_11] [i_11] [i_11]))), ((max(50, var_10)))));
    }
    var_18 = (var_8 > ((((64548 ? var_7 : 144115188075855871)))));
    #pragma endscop
}
