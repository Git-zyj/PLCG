/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max(((125 ? 2354713054 : 1987929205)), (min((var_4 ^ var_10), (arr_1 [i_0 - 2])))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (var_9 ^ 32001);
            arr_6 [i_0] [i_0] [i_1] = (arr_0 [i_0] [i_1]);
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_13 = (min(1, (~0)));
                            var_14 = (((max(var_5, (var_12 * var_8))) < (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        }
                    }
                }
            }
            arr_21 [i_2] [i_2] = ((-((max(1, (!1))))));
            var_15 += (8192 % 1);
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_16 ^= (((-(arr_15 [i_2] [i_7] [i_7 - 2] [i_2]))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_33 [i_2] [i_7] [i_8] [i_9] [i_10] = (~var_0);
                            var_17 ^= ((((min(-var_11, ((-(arr_26 [i_10] [i_10] [i_10] [i_10])))))) ? (max(var_11, (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))) : ((~(~var_7)))));
                            arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((((min(var_2, (arr_18 [i_7]))) ^ var_2))) ? ((min(1, 1))) : ((max(112, 1))));
                            var_18 = (max(var_18, (((-(arr_9 [i_2] [i_2]))))));
                            var_19 = 0;
                        }
                    }
                }
            }

            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                arr_39 [i_11] [i_7] [i_7] [i_11] = (max((max((arr_8 [i_2]), (arr_17 [i_7] [i_11]))), (((-((-(arr_26 [i_11] [i_11] [i_11] [i_11]))))))));
                var_20 = ((max((arr_9 [i_2] [i_2]), (arr_11 [i_2] [i_7] [i_11]))));
                arr_40 [i_11] = -4294967280;
            }
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                var_21 = (max(var_21, ((max((((var_4 >= (arr_31 [i_12] [i_12] [i_12 + 2])))), (min(var_7, (min(-124, (arr_42 [i_2] [i_12] [i_12] [i_7]))))))))));
                arr_43 [i_2] [i_7] [i_12] [i_12] = (max(0, ((var_8 ? 524287 : 127))));
                arr_44 [i_2] [i_7] [i_12] = var_12;
            }
            var_22 = ((((min((arr_13 [i_7] [i_7] [i_7 + 1]), (arr_13 [i_7] [i_7] [i_7 + 1])))) + ((-(arr_13 [i_7] [i_7] [i_7 + 1])))));
            arr_45 [i_2] = (0 ^ -113);
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_49 [i_2] = var_5;
            arr_50 [i_2] [i_13] [i_13] = (((((max(24913, 1)))) >= (min((arr_38 [i_2] [i_2] [i_13]), var_10))));
            var_23 = (-(max(var_12, (arr_22 [i_2] [i_13] [i_13]))));
            var_24 = (min(var_24, ((max(((min(1, 56))), (arr_25 [i_2] [i_2] [i_13]))))));
        }
        var_25 = (216 + -1832404107);
    }
    for (int i_14 = 1; i_14 < 17;i_14 += 1)
    {
        var_26 = (min(var_26, ((max((15559459343962381556 == 140462023), (((((arr_53 [i_14]) ? var_12 : (arr_51 [i_14]))) & ((((-2147483647 - 1) ? 347 : 21175))))))))));
        arr_54 [i_14] = (arr_51 [i_14 + 1]);
    }
    var_27 = ((((var_12 ? var_1 : var_0)) % var_11));
    #pragma endscop
}
