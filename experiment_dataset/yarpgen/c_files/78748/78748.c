/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((((((arr_1 [i_1 - 2]) && ((((arr_2 [i_2]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_2]))))))) <= (arr_5 [i_0] [i_0] [i_0])));
                    var_13 = (arr_5 [i_0] [i_0] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_14 ^= (arr_1 [i_3]);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((((arr_4 [i_0]) ? (arr_10 [i_0] [7]) : var_1))) ? (arr_13 [i_4 - 1] [11] [i_3] [i_4] [i_5]) : (arr_16 [i_0] [i_0] [i_0] [7] [i_3] [i_4 - 2] [i_5])));
                            arr_18 [i_0] [i_1] [i_3] [i_1] [i_3] = (arr_3 [i_0] [i_1]);
                            var_15 = ((~((3823614473 ? 5 : 1))));
                            var_16 -= (arr_3 [i_5] [i_1 + 1]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_17 = (65535 - 65535);
                        var_18 = (((~12548910037851320229) / (arr_4 [i_6])));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        var_19 = (((-(arr_9 [i_0] [1]))));
                        var_20 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) / ((((arr_22 [0] [i_1] [i_3] [i_7]) && (arr_0 [i_1] [3]))))));
                    }
                    var_21 = ((((((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1]) ? 15939624449522980293 : -16))) ? (!var_9) : ((3274306508 ? var_3 : (arr_14 [i_1] [i_1] [i_1] [i_1 - 2] [i_1])))));
                    arr_26 [i_0] = ((-(((arr_1 [i_1]) * (arr_15 [i_0] [i_0] [5] [i_0] [i_0])))));
                    var_22 = ((-(arr_10 [i_1 + 1] [i_1 - 2])));
                    var_23 ^= (arr_19 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    var_24 += (arr_21 [i_0] [i_0] [i_1] [2]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_25 = (arr_12 [13] [i_1 - 2] [i_1] [i_1 - 2]);
                                arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-57 ? (((arr_15 [i_0] [i_1 - 1] [i_8] [i_9] [i_10]) << (((arr_9 [i_0] [i_0]) - 6544)))) : var_6));
                                arr_38 [i_10] [i_9] [i_8] [3] [i_0] = (((((var_6 ? (arr_22 [i_0] [i_8] [i_9] [i_10]) : (arr_22 [i_9] [i_9] [i_8] [i_1 - 1])))) ? (arr_27 [i_0] [i_1 - 2] [i_1 - 1]) : (arr_19 [i_0] [i_1 - 1])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_11] [i_1 + 1] [i_1] [i_0] = (arr_4 [i_1 - 1]);
                    var_26 -= (((25 * (arr_31 [i_0] [i_0] [i_11] [i_11] [i_11] [i_11]))));
                }
                var_27 = (max((((50322 ? 54932 : 1911580958))), (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), -17099643217179049859))));
                var_28 = 10603;
            }
        }
    }
    var_29 = ((max(-var_11, -var_10)));
    #pragma endscop
}
