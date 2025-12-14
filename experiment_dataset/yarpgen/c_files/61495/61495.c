/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_7 > var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_7 [i_0 + 1])));
                                var_17 = ((((((4378005640693373476 < (arr_13 [i_0] [i_1 - 3] [i_3] [i_3 + 2] [i_4] [i_0]))))) >= ((((arr_4 [i_0]) && 14313)))));
                                var_18 = (~((32271 ? (arr_13 [i_4] [i_4] [0] [i_4 + 1] [i_4] [i_4]) : (arr_13 [i_4] [i_4 - 2] [8] [i_4 - 2] [i_4] [i_4]))));
                            }
                        }
                    }
                }
                var_19 = 14328;
                var_20 = ((~(((arr_11 [i_0] [i_1 + 1] [i_0 - 1]) ? (arr_0 [i_0]) : var_4))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 = 511;
                            arr_21 [i_6] = ((-21884 ^ (((!(arr_2 [i_5 - 1] [i_1 + 1]))))));
                            arr_22 [i_0] [i_1] [i_5] [i_0 + 1] [i_1] [i_6] = (((((14313 ? 5277000958457995726 : (arr_19 [i_6 - 3] [i_6] [i_6] [i_6] [i_1] [i_1])))) ? (((469064567 >= var_4) ? (arr_18 [i_1] [i_1] [i_1 - 3] [i_6 - 1] [i_6]) : (arr_0 [i_5 + 2]))) : (max((((arr_12 [i_0] [i_6]) / (arr_20 [i_0] [i_1] [i_0] [i_6] [i_0]))), (((arr_7 [i_6]) + var_6))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (~var_12);
    #pragma endscop
}
