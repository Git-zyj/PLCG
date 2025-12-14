/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_16 = ((!(arr_3 [i_0] [i_1] [i_1 + 2])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = ((~(arr_4 [i_1] [i_2] [i_2 + 1])));
                            arr_12 [i_2] = ((-(var_11 & 666220680)));
                            var_18 &= (((arr_4 [i_0] [i_2 + 2] [i_2 + 1]) ? (arr_4 [i_0] [i_2 + 1] [i_2 + 2]) : (arr_4 [i_1] [i_2] [i_2 + 3])));
                            arr_13 [i_4] [i_3] [i_2] [i_2 - 2] [i_2] [i_0] [i_0] = ((-91 ? ((((var_12 > (arr_2 [i_1] [i_3]))))) : (((arr_4 [9] [i_0] [i_0]) ? var_5 : var_2))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] = var_12;
                        arr_15 [i_0] [i_1] [i_2 + 3] [i_2] [i_1] [i_3] = (((((979753406 ^ (arr_10 [i_0] [3] [i_1 + 1] [i_2] [i_1 + 1] [i_2])))) ? var_4 : (arr_5 [i_0] [i_2 - 2])));
                    }
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        var_19 += (((arr_6 [i_2 - 2] [i_5 - 3] [i_2 + 1] [i_1 + 1]) <= (arr_5 [i_2 - 2] [i_5 - 3])));
                        var_20 -= var_6;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_21 = ((+((((arr_19 [i_2]) < 3668368427)))));
                        var_22 *= arr_9 [i_0] [i_1 - 1] [i_2 + 2] [1] [i_1 - 2];
                    }
                }
            }
        }
        var_23 = -82;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_22 [i_7] &= var_4;
        arr_23 [i_7] &= (((arr_21 [i_7] [i_7]) ? var_10 : (arr_21 [i_7] [i_7])));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            {
                arr_29 [i_8] = ((((min((arr_27 [i_8] [i_8] [i_8]), ((((arr_28 [i_8] [i_9]) != 0)))))) && ((max(5625622534961776329, ((((arr_24 [i_8]) != (arr_25 [2])))))))));
                arr_30 [i_8] [i_8] = (min(65532, 979753410));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_38 [i_12] [i_9] [i_10] [i_11] [i_12] [i_8] = (max((arr_36 [i_9 - 4] [i_9 - 4] [i_10] [i_10] [i_11] [i_12 + 1]), 65527));
                                arr_39 [2] [i_9 - 4] [i_10] [i_11] [i_8] = (min(((((((arr_33 [i_8] [i_8] [3] [i_12]) / var_4))) ? ((min((arr_33 [i_9] [i_10] [5] [i_9]), (arr_21 [i_8] [i_10])))) : ((max(3, var_5))))), (arr_37 [i_8] [i_9 - 3] [i_9 - 3] [i_9] [i_8])));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, (~53243)));
            }
        }
    }
    var_25 = ((var_14 ? var_8 : var_14));
    #pragma endscop
}
