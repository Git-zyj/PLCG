/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((-(((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] = (arr_7 [5]);
                            var_15 = (((((((arr_8 [i_1] [0]) && (arr_0 [i_2] [i_3]))) ? ((((1 < (arr_9 [i_3] [i_1] [i_1] [i_1] [i_0]))))) : (max((arr_2 [i_2 - 1]), 2298222213)))) <= var_9));
                            var_16 = (max(var_16, (arr_1 [i_3] [i_2 - 2])));
                            var_17 *= (((((var_4 ? var_0 : (arr_8 [i_0] [i_1]))) % (arr_7 [i_2 + 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_1] = 6021;
                            arr_18 [i_1] [i_4] [i_1] [i_1] = (max((((480743960 ? (arr_12 [i_1] [i_1] [i_1] [i_0]) : var_6))), ((((arr_1 [i_0] [i_0]) ? (arr_9 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]) : (arr_5 [i_0] [i_1] [i_4] [i_5]))))));
                            var_18 = (arr_1 [i_0] [i_1]);
                            var_19 *= (((((arr_15 [i_5] [i_5] [i_5] [i_0]) ? ((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? var_2 : (arr_13 [i_0] [i_1] [i_4] [i_5 + 1])))) : (arr_12 [i_0] [i_1] [i_1] [i_1]))) >= ((min(2097151, (arr_3 [i_1] [1]))))));
                        }
                    }
                }
                var_20 = (((8909131619878448323 - 8715604272252467778) ? ((var_1 ? (((4398046511103 ? 1385522989 : var_6))) : (arr_15 [i_0] [i_1] [i_0] [i_1]))) : (min((arr_7 [i_0]), (arr_7 [i_1])))));
                var_21 = ((!(arr_13 [i_0] [i_0] [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_22 ^= (max((arr_5 [i_8] [i_7] [i_1] [i_0]), ((-(var_3 == var_5)))));
                                var_23 = (max((arr_24 [i_0] [i_1] [i_1] [i_7] [i_1]), -var_1));
                                var_24 = -159;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
