/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [19] = (((((arr_0 [9] [i_0 + 1]) ? 3836850935 : (arr_0 [i_0] [i_0 + 1]))) <= (((~(arr_0 [i_0] [i_0 - 1]))))));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_15 = (min((var_12 | 458116367), var_4));
                            arr_14 [i_0] [i_1] [i_3] [i_3 - 1] [i_1] = var_5;
                        }
                    }
                }
            }
            var_16 = (arr_7 [i_1] [i_0] [i_0 - 1]);

            /* vectorizable */
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                var_17 &= var_6;
                var_18 ^= var_8;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_19 = (((arr_19 [i_0 - 1] [i_1 - 4] [i_0 - 1] [i_5 + 1] [i_7 - 4]) > 15354));
                            arr_24 [i_0] [i_1 - 2] [i_5 - 2] [i_5] [3] [i_6] [9] = (var_11 * 5121);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_29 [i_0] [i_9] [i_9] [i_0] = ((var_7 ? var_12 : (arr_11 [i_0 - 1] [i_1] [i_5 + 1] [i_8 - 2] [i_9 + 1])));
                            var_20 = (((arr_18 [9] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 281337537757184 : 1));
                            arr_30 [i_9] [i_1] [i_5] [i_1] [i_1] [i_0] [i_1] = 5121;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    var_21 = (var_0 != 2181579181);
                    var_22 = var_6;
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_38 [i_0] [i_10] [i_1] [i_10 + 2] [i_12] = ((!(((46134 ? (arr_9 [i_0] [i_10 - 2] [i_0] [i_0]) : -2805043231510949269)))));

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_43 [i_12] [i_12] [i_10] [i_12] &= (!(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]));
                        var_23 *= ((19425 ? var_0 : (arr_37 [i_10 - 2] [i_1 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_24 += (((arr_35 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_0 + 1]) != (((arr_4 [i_0] [i_1 - 1]) ? -281337537757196 : (arr_18 [i_14] [i_12] [i_10 + 3] [i_1])))));
                        arr_46 [i_10] [11] [i_10] [i_10] [i_10] = ((-(((arr_39 [i_0 + 1] [i_10] [19] [19] [i_14]) ? var_13 : 3836850929))));
                    }
                    arr_47 [22] [i_1] [i_10] [i_10] [i_1] [i_0] = 458116337;
                    var_25 = (max(var_25, -281337537757175));
                }
                arr_48 [i_10 - 3] [i_10] [18] = (arr_27 [i_0 - 1] [i_1 + 1]);
            }
            /* vectorizable */
            for (int i_15 = 3; i_15 < 20;i_15 += 1) /* same iter space */
            {
                var_26 += 19408;
                var_27 = (max(var_27, ((((arr_21 [i_0 + 1] [i_1 - 1] [i_15 - 2] [i_15 + 2] [i_15 - 3] [i_15 - 3]) ? var_13 : 11103471763419975299)))));
                arr_51 [0] [i_1 - 3] [i_0] = (((((11103471763419975299 ? var_4 : var_4))) ? -787478285693370109 : (((var_14 << (11103471763419975306 - 11103471763419975278))))));
                var_28 = (min(var_28, ((-205 ? (arr_32 [i_0 + 1] [i_1]) : 787478285693370129))));
            }
        }
    }
    var_29 += (((((var_9 ? var_13 : -787478285693370130))) ? (67 / var_8) : var_14));
    #pragma endscop
}
