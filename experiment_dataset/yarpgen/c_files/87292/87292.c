/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((~((var_5 ? var_4 : 8388607)))))));
    var_14 |= ((!((!((min(var_8, 3602719659)))))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (!var_3)));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_16 ^= (((((max((arr_0 [i_3] [i_3]), 16383)))) ? (max(8388607, (!var_9))) : ((((!((max(var_12, -16405)))))))));
                        var_17 += ((min(var_6, ((var_6 ? (arr_3 [i_0 - 4] [i_1]) : var_0)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_18 |= (~var_11);
                            var_19 = (!((((arr_7 [i_3] [i_2] [i_1]) ? var_3 : 1302449303))));
                            var_20 = (min(var_20, (((!(!var_10))))));
                        }
                        arr_15 [i_0] [i_0 - 2] [i_0] [i_0] = (max(((((min(var_6, var_6))) ? var_11 : (!193))), (((!((min((arr_0 [i_0] [i_0 + 1]), (arr_7 [i_1] [i_2] [i_3])))))))));
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            arr_22 [i_6] [i_6 + 1] [i_5 - 2] [i_2] [i_1] [i_0] = ((-(arr_1 [i_1])));
                            var_21 = (max(var_21, (((!(~16387))))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_22 = (min(var_22, (((~-8153547587150149251) ? (((arr_3 [i_2] [i_7]) ? (arr_10 [i_7] [i_2] [i_1] [i_0]) : 3487992484)) : (((~(arr_1 [i_1]))))))));
                            var_23 = (((-(arr_9 [i_5] [i_7]))));
                            var_24 = ((!(((~(arr_18 [i_7] [1] [i_2] [i_1] [i_1] [i_0]))))));
                        }
                        var_25 = (max(var_25, 1968653560400068932));
                        arr_25 [i_5] [i_0] = ((~(arr_3 [i_0 - 4] [i_0 - 4])));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_32 [i_1] [i_2] = ((((max((max(var_4, (arr_17 [i_9] [i_8] [i_2] [i_1] [i_0]))), (~var_1)))) ? (((!((!(arr_24 [i_9] [i_1] [i_0])))))) : ((max(var_11, (max((arr_26 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0]), 176)))))));
                            var_26 = ((!((max((max((arr_4 [i_8] [i_1]), (arr_11 [i_0] [i_2] [i_8] [i_9]))), ((min((arr_16 [i_9] [i_8] [i_2] [i_1]), var_8))))))));
                            var_27 *= (min(0, 32767));
                        }

                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            var_28 = (min((max((min(var_3, (arr_2 [i_0] [0]))), 26052)), (max((max(var_5, 1)), (!var_11)))));
                            var_29 = (min(var_29, (min(((((max(var_10, -1968653560400068926))) ? -1968653560400068932 : (!var_0))), (((!((min((arr_21 [i_8] [i_8]), (arr_14 [i_10 + 2] [i_8] [i_2] [i_1] [i_1] [i_0] [i_0])))))))))));
                            arr_35 [i_8] [i_10 + 2] = (max((((!(~var_9)))), (min((max(0, (arr_21 [i_1] [i_1]))), ((min(var_1, var_1)))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_30 += (!-1968653560400068932);
                            var_31 &= ((~(!var_0)));
                            var_32 = ((~(~-1432805799320619125)));
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((~(arr_2 [13] [i_1])))) ? ((var_2 ? var_6 : (arr_16 [i_0 - 1] [i_1] [i_8] [i_11]))) : var_6));
                        }
                    }
                    var_33 = ((max(((var_11 ? 16383 : (arr_4 [i_0] [i_1]))), (~var_11))));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_34 = (max(var_34, ((((arr_0 [i_0] [i_1]) ? ((max((~var_8), 84))) : (max((min(var_10, var_8)), (((65533 ? var_9 : (arr_38 [i_0] [i_1])))))))))));
                                var_35 = max((((!((min((arr_37 [i_2]), 25)))))), (max(13706346743824855259, (min(-8388585, (arr_6 [i_1] [i_2] [i_13]))))));
                                arr_46 [i_13] [i_13] [i_12 + 1] [i_2] [i_1] [i_0 - 1] |= ((((!((max(18242142065118314790, (arr_14 [i_0] [i_0] [i_0 - 3] [i_1] [i_2] [i_12] [i_13])))))) ? (min((max(13706346743824855259, var_3)), var_12)) : (((~((min(var_11, (arr_10 [i_13] [i_2] [i_1] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
        var_36 ^= (max((max(26663, (((var_3 ? (arr_5 [i_0] [i_0 + 1] [i_0]) : var_4))))), (((!((max(65535, var_6))))))));
        arr_47 [i_0] [i_0] = (max((((~(max((arr_6 [i_0] [i_0 - 3] [i_0]), 2147483647))))), ((max(var_0, (arr_45 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 13;i_16 += 1)
                {
                    {
                        var_37 ^= (max((((~var_9) ? (arr_23 [i_16]) : (~1))), ((~(!var_9)))));
                        var_38 += (max((~65535), (max(((3083044628866490106 ? 7788 : var_2)), ((~(arr_19 [i_0] [1] [i_14] [i_15] [i_16])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
