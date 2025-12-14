/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(~var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 *= (~var_3);
                                var_12 ^= 3819649526;
                                arr_13 [i_4] [i_4] [1] [i_4] [12] = (((max((min((arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4]), var_8)), var_7))) ? ((((!((max(3819649526, 1))))))) : (max((((var_4 ? 1 : 1))), ((1 / (arr_12 [i_0] [i_0] [i_0] [0] [i_0] [0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_13 = (max((-2147483647 - 1), 31191));
                                var_14 &= (1 == 475317767);
                                var_15 = var_3;
                                var_16 = ((-((max(1, 1)))));
                                var_17 = (((max((max(var_8, var_2)), (var_4 | -31191))) <= 11220));
                            }
                        }
                    }
                }
                var_18 = ((~((((!var_8) < var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_19 = (max(((max((arr_28 [i_8] [i_9] [i_10] [i_9]), (arr_28 [i_8] [i_8] [i_10] [i_11])))), (~31191)));
                            var_20 = (min(var_20, (max((min((max(var_2, (arr_18 [i_11] [i_10] [1] [i_8]))), var_1)), ((max((((0 ? 475317767 : var_0))), (min((arr_31 [i_8] [16] [i_10] [4] [i_9] [i_8]), var_5)))))))));
                        }
                    }
                }
                var_21 = (min(var_21, (arr_3 [i_8] [8] [i_8])));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((min(var_5, (max((arr_22 [i_12 + 3]), 3819649548)))))));
                            var_23 = (min(var_23, (((~(arr_36 [i_8] [i_8] [8] [i_8] [i_8]))))));
                            var_24 = (max((max(((max(var_7, var_4))), 2305843009213693952)), (((((31189 ? 475317747 : (arr_17 [i_13] [i_12] [i_9] [i_8] [i_8] [i_8]))) <= (((var_2 ? var_6 : (arr_9 [i_8] [i_9] [i_9] [i_9] [i_12] [i_12] [i_8])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                            {
                                var_25 = var_9;
                                var_26 = var_0;
                                var_27 = (!0);
                            }
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                            {
                                var_28 = (min(var_28, 1));
                                var_29 = (arr_19 [i_8] [i_8] [i_14] [i_14] [i_17] [11] [i_9]);
                            }
                            var_30 = (max(var_30, (((min((((var_4 <= (arr_15 [i_8])))), 3819649545))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
