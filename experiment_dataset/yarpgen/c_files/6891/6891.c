/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 ^= var_1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 -= var_3;
                        var_17 = (max((arr_10 [i_0] [7] [i_2] [i_1] [i_2] [15]), (((-((208 << (((((arr_7 [i_2] [i_0] [i_0]) + 9086133123017715983)) - 13)))))))));
                        var_18 = var_9;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_19 -= (((arr_5 [i_0]) > (arr_5 [i_4])));
            var_20 |= ((((arr_1 [i_0]) >> (((arr_0 [i_0] [i_4]) - 183)))));
            var_21 = (((arr_1 [i_4]) ? (arr_10 [i_0] [13] [i_4] [13] [11] [i_4]) : ((~(arr_10 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0])))));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_5] [i_5] [i_0] [i_6] &= ((-(arr_0 [i_6] [i_5])));
                    var_22 = (3923825938371829675 && -4294967267);
                    var_23 = (((arr_6 [i_4] [i_5] [i_4]) / (arr_2 [i_0] [i_4] [i_0])));
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_24 = (((((arr_18 [i_7] [i_5] [i_4] [i_4] [i_0]) / 4294967295)) * 0));
                    arr_23 [i_0] [18] [i_0] [i_5] [18] &= (((~(arr_13 [i_0]))));
                    arr_24 [i_0] [i_4] [i_0] &= var_14;
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_25 = (((((4607182418800017408 >> (var_6 + 8418075494143271305)))) ? ((((!(arr_17 [1] [i_4] [1]))))) : (0 | var_0)));
                    var_26 ^= 117;
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    var_27 = (((var_9 ^ 4607182418800017408) ? (((arr_12 [16] [i_4] [16]) | (arr_6 [i_4] [i_4] [i_4]))) : (((arr_26 [i_0] [13] [i_5] [i_9]) ? (arr_3 [i_0] [i_0]) : (arr_8 [i_4] [i_4] [i_4] [i_4])))));
                    arr_31 [i_0] [i_4] [i_5] [i_9] = (~var_14);
                    var_28 &= ((arr_25 [i_0] [i_0] [i_0] [18] [i_4]) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0] [i_0] [i_5] [i_9] [i_9]));
                    arr_32 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = (arr_30 [13] [i_4] [i_4] [i_0]);
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_29 = ((((2305772640469516288 ? var_1 : 0))) / (arr_1 [i_10 + 2]));
                            arr_39 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_4 [4] [7]) ^ -var_0);
                            var_30 = 4607182418800017408;
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    var_31 = (arr_15 [i_0]);
                    var_32 &= 2146435072;
                    var_33 = (-4607182418800017409 ^ (arr_5 [i_13 + 3]));
                    arr_45 [i_0] [i_0] [i_4] [i_0] [i_12] [6] |= (arr_13 [i_0]);
                    arr_46 [2] [2] [i_12] [i_4] = ((4048602252 / var_3) ? (var_9 / 1716144491) : ((var_13 ? var_13 : (arr_3 [i_0] [i_4]))));
                }
                var_34 = ((!(arr_3 [i_0] [i_0])));
                var_35 = var_8;
            }
            var_36 = (arr_21 [i_4]);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_37 = (-1427812301 * 93);
            arr_51 [i_14] [4] [i_0] = ((((130048 >> (245 - 243))) | (arr_44 [i_0] [i_0] [i_14])));
        }

        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 2; i_16 < 20;i_16 += 1)
            {
                var_38 = (arr_53 [i_0] [i_15 + 3] [i_0]);
                var_39 = 69;
            }
            arr_56 [i_15] [i_0] = 1;
        }
    }
    var_40 = ((max(var_12, (~var_2))));
    var_41 = var_11;
    #pragma endscop
}
