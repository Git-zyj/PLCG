/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= ((-var_0 ? ((((((arr_3 [8]) <= (arr_3 [i_1])))) * (((!(arr_4 [i_1])))))) : ((((arr_3 [i_0]) || 4488532029629079043)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, (arr_3 [i_0])));
                                var_18 = ((max((((arr_0 [i_3]) ? (arr_7 [i_1] [23] [i_3]) : (arr_6 [i_3]))), (arr_4 [i_0]))));
                                var_19 = (((((((!(arr_3 [i_0]))) ? -var_8 : ((((arr_11 [14] [i_3] [2] [i_2] [14] [i_1] [12]) % (arr_11 [i_3] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0]))))))) && var_6));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_5] [i_5] [18] [i_5] [i_0] &= var_14;
                                arr_16 [i_5] [i_5] [i_1] [i_2] [i_1] [i_0] [i_0] = ((~(((!(arr_14 [20] [i_1] [i_2] [i_0] [i_5] [i_3]))))));
                            }
                            var_20 = (min(var_20, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [14])));
                            var_21 = var_10;
                            arr_17 [i_3] [i_1] [i_1] [i_0] = ((((max((arr_13 [i_0] [i_1] [i_1] [i_2] [i_1]), (arr_13 [i_1] [i_2] [i_1] [7] [i_1])))) / ((119 ? (arr_4 [i_0]) : (arr_4 [i_1])))));
                        }
                    }
                }
                var_22 = var_4;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_23 = 119;
                            var_24 = (max(var_24, (arr_5 [i_0] [i_7])));
                            arr_23 [i_1] [i_1] = (((arr_10 [i_6 - 2] [i_1] [i_6] [i_7] [i_0]) | ((-(arr_10 [i_7] [i_1] [i_1] [i_0] [i_0])))));
                            arr_24 [i_1] = (max(((~(arr_12 [i_7] [i_6] [i_1] [i_1] [14]))), -108));
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_25 |= (arr_12 [22] [i_1] [3] [i_9] [i_9]);
                                var_26 = (!24658);
                                arr_32 [i_1] [i_1] [i_1] [i_1] = (arr_31 [i_10 - 3] [i_10 + 1]);
                                var_27 ^= ((-(arr_31 [i_0] [i_10 - 3])));
                                var_28 -= (arr_29 [i_10] [i_8] [i_8] [8]);
                            }
                        }
                    }
                    var_29 = -105;
                    arr_33 [i_8] &= (((arr_0 [i_1]) & var_11));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_38 [i_8] [i_11] [i_1] = var_3;
                                arr_39 [i_12] [i_1] [14] [i_8] [i_0] [i_1] [i_0] = (arr_25 [5] [i_12]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            {
                var_30 = (min((arr_4 [i_13]), (max((arr_37 [i_14] [i_14] [i_14]), (arr_4 [i_13])))));

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_31 *= ((var_3 ^ ((((arr_42 [i_13] [i_14]) * (arr_3 [i_15]))))));
                    var_32 = -58;
                    var_33 = ((((min((arr_28 [i_13] [i_14] [i_15] [i_15] [i_13] [i_13]), (max((arr_26 [i_13]), (arr_8 [i_14])))))) ? ((min((arr_6 [i_15]), (arr_6 [i_13])))) : var_2));
                }
            }
        }
    }
    var_34 |= (((var_15 * var_3) << (var_13 - 15396)));
    var_35 *= (max(var_6, var_10));
    #pragma endscop
}
