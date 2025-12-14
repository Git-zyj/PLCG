/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min(var_4, 123)))) ? ((((var_8 ? var_0 : (arr_2 [i_0]))) % -1)) : var_2);
        var_15 ^= ((~((1 ? 117945484655642846 : -1367974798))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_12 [i_2] = -9223372036854775807;
            var_16 = 152213004;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_17 [i_4] [i_2] [i_2] [i_2] [i_2] [i_1] = (arr_4 [i_3 + 1]);

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_17 = 1;
                            var_18 = (min(var_18, 1));
                            arr_20 [i_1] [11] [i_2] [i_4] [1] = ((var_2 ? (~var_9) : 7));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_19 *= (arr_21 [i_6] [8] [i_1] [i_2] [i_1]);
                            var_20 = ((var_9 ? (var_6 && 68) : 34359738367));
                            var_21 *= (arr_16 [i_6] [i_3 - 1] [i_3 - 1] [i_4 + 2]);
                        }
                    }
                }
            }
            arr_23 [i_2] [i_2] = var_10;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_22 ^= (((34359738353 ? 1 : 378541340)));
                            arr_34 [i_1] [i_10] [i_8] [i_9] [i_10] = 17085911279126023439;
                        }
                    }
                }
            }
            var_23 = (!-34359738373);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            var_24 = (arr_14 [5] [i_1] [i_1] [i_11]);
            arr_39 [i_11] = (~((var_2 ? (arr_37 [i_1] [i_1] [i_1]) : 1)));
            var_25 = (min(var_25, -230941786));
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_26 = (max((arr_8 [13] [i_13]), (((-(min(-378541372, 15146)))))));

                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            var_27 = (max(var_27, var_10));
                            var_28 *= (max(1278535548, ((min(230941772, (arr_44 [i_13 - 1] [i_15 - 1] [i_12 - 1]))))));
                            var_29 = 18446744073709551597;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
