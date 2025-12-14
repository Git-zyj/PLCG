/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] &= ((max(38468, 14747)));
                                var_19 *= 144;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_20 = ((!(50789 || 14729)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_21 *= 2533315061;
                            var_22 = (max(var_22, 1761652243));
                        }
                    }
                }
                arr_28 [i_6] [i_6] [i_5] |= -14737;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_23 = (((((-(arr_11 [i_9] [6] [i_10 - 1] [i_11] [i_9] [i_12 - 1])))) ? (((((min(22985, 2533315077))) ? 4294967283 : ((min(var_4, var_12)))))) : 15697873930583769342));
                            var_24 *= ((0 ? 192 : 36514));

                            for (int i_13 = 0; i_13 < 12;i_13 += 1)
                            {
                                var_25 = (min(var_25, (arr_1 [i_9] [i_9])));
                                var_26 = 50806;
                            }
                            for (int i_14 = 0; i_14 < 12;i_14 += 1)
                            {
                                var_27 = ((!(((((((arr_17 [i_9]) ? var_11 : 14729))) | (arr_32 [i_9] [i_11]))))));
                                var_28 -= -4729302259094719689;
                            }
                            var_29 = var_4;
                            var_30 ^= (((arr_1 [i_9] [i_10]) && ((((((var_16 && (arr_18 [i_11])))) / ((min(111, (arr_38 [i_9] [i_10] [i_10] [i_11] [i_10] [i_9])))))))));
                        }
                    }
                }
                arr_45 [i_9] = ((0 ? (min(1, ((var_14 | (arr_32 [i_9] [0]))))) : ((((!32438) ? (arr_38 [i_9] [i_10] [i_10] [i_10] [i_10] [i_9]) : (arr_25 [i_10] [14] [i_10] [i_10] [i_10]))))));
            }
        }
    }
    #pragma endscop
}
