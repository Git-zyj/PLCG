/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((max(var_13, 0))) ? ((min(1, 0))) : var_10)), (max(((1 ? 0 : var_10)), (!var_8)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = 0;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1 - 1] [i_2 - 1] [i_0] = (((((1 ? 11962859547226413484 : 83))) ? ((min((!1), 1))) : ((+(((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 - 3]) + 1))))));
                        arr_10 [1] [4] [1] [i_3] = ((~(((arr_6 [i_2 - 1] [1] [i_2 - 1] [i_2 - 1]) ? ((min(3091635732, 1035400193))) : (max((arr_7 [i_0] [i_0] [i_0] [i_3]), 2137715404811310026))))));
                        var_18 = 16309028668898241571;
                        var_19 ^= ((((arr_1 [i_1 - 1] [i_2 - 1]) ? 1 : (arr_1 [i_1 - 1] [i_2 + 2]))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            {
                arr_16 [i_5] &= (min((!-29823), 131));
                var_20 = (((max((arr_7 [i_4] [i_4] [i_5] [i_4]), var_11))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_21 = (min((((~(!1)))), ((~(arr_3 [14] [i_6 - 1] [i_5 + 2])))));
                            arr_23 [i_4] [i_4] [i_6] [i_6] [10] |= (max(226, (((arr_14 [i_7] [i_6]) ? ((1 ? 2137715404811310014 : -29627)) : (((min(0, 1))))))));

                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 18;i_8 += 1)
                            {
                                var_22 &= (((arr_5 [i_4] [i_8 - 1] [i_6]) ? ((4022055255868235217 ? 19 : 1)) : 96));
                                var_23 = (1 & 1);
                                var_24 = 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_25 = (arr_20 [i_4] [i_9] [i_4] [i_4]);

                            for (int i_11 = 3; i_11 < 16;i_11 += 1)
                            {
                                arr_34 [i_11] [i_10] = (((max((arr_17 [i_5 + 2] [i_5 + 1] [i_10 - 1]), (min((arr_30 [8]), 0)))) ? ((4294967295 ? 1 : 59)) : (((1 - 1) ? -1 : ((max(-30860, (arr_8 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))));
                                arr_35 [i_5] = ((!(((-(arr_29 [i_5 - 3] [i_5 - 2]))))));
                            }
                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 1;i_12 += 1)
                            {
                                arr_39 [i_4] [1] [i_5] [i_5] [i_9] [i_10] [i_12] = ((1 + (arr_24 [i_10 + 1] [i_9] [i_5 - 2] [3] [i_4])));
                                var_26 = (max(var_26, ((((arr_28 [i_5 + 1] [i_5 + 1] [i_12]) ? (arr_28 [i_4] [i_5 + 2] [i_12]) : (arr_28 [i_4] [i_5 + 1] [8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
