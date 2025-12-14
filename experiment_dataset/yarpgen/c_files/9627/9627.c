/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_1] = ((((2305843009213693951 ? var_5 : (((arr_2 [i_0] [i_1]) + 0)))) / 127));
            arr_6 [i_0 - 1] [i_1] [i_1] = var_13;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_16 -= (((((max(var_5, 171))))) ? 4 : (arr_9 [i_0] [1] [i_2]));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 = -1237676756817866216;
                        arr_16 [i_0] [i_0 + 2] [i_0] [i_3] = (-28404 != -9137713112208469048);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_18 = (max(((((arr_1 [i_0]) != (arr_12 [i_6])))), (((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 3]) + (arr_9 [i_0] [i_5] [i_6])))));
                        var_19 *= (max(1, ((min(0, var_10)))));
                        var_20 &= 231;
                    }
                }
            }
            arr_21 [i_0] [i_2] [i_2] = ((((((min((arr_0 [i_0 - 2]), 97))) ? -25 : var_15)) / -28404));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_21 = -19266;
                        arr_30 [i_0 - 2] [i_7] [i_0] [i_0 + 3] = 197;
                    }
                }
            }
        }
    }
    var_22 -= var_4;
    var_23 |= ((var_3 / (var_14 * -1)));
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_24 = ((min((arr_31 [i_10] [i_10 - 3]), 7868237458250923398)) & (arr_31 [i_11] [i_10 - 2]));
                    arr_39 [i_10] = (((arr_36 [i_10 - 2] [i_10]) ? ((var_14 ? -4652352391643863441 : 0)) : (arr_36 [i_10] [i_11])));
                    arr_40 [i_10] = ((((min((arr_34 [i_10] [i_11] [i_12]), var_1))) ? ((((((869128392 ? -8269431235830721058 : -1)) <= 1)))) : (arr_33 [i_10 - 2] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_25 = ((((127 ? -8269431235830721058 : var_12)) != (min((arr_36 [i_10] [i_10]), var_3))));
                                var_26 = 484554362728101171;
                                arr_47 [i_11] [i_12] [i_14] = (((((arr_31 [i_12] [i_10 - 1]) + 2147483647)) >> (-6592551837891711467 + 6592551837891711484)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
