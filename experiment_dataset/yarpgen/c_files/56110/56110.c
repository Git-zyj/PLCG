/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_8 [i_0 + 1] [i_0] = (((min((min(var_10, (arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 2]))), (arr_2 [i_0]))) | var_17));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max((((arr_1 [i_4]) + ((min(var_8, 0))))), (((9 ? (arr_12 [i_1 - 1] [10] [10] [i_1 + 4]) : (arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2]))))));
                                var_20 = ((var_6 - ((var_15 ? (arr_7 [i_0]) : (arr_7 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (arr_16 [i_6]);
                                arr_20 [6] [i_1 + 1] [i_0] [i_5 - 4] [7] = (min((-2147483647 - 1), var_18));
                                var_22 = ((((((arr_4 [i_2] [i_0]) ? ((-(arr_6 [i_0 + 1] [9] [i_0 + 1]))) : ((max((arr_11 [i_0 + 1] [6] [i_0 + 1] [i_0]), var_15)))))) ? -var_6 : (((((var_9 - (arr_3 [i_5 - 4] [i_1 + 2])))) ? ((max((arr_13 [i_0] [2] [i_2] [2] [i_6]), (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))) : (((arr_1 [i_1 + 2]) ? var_13 : (arr_2 [i_0])))))));
                            }
                        }
                    }
                }
                var_23 |= var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_24 = 4294967295;
                var_25 = ((-(arr_21 [i_7] [1])));
            }
        }
    }
    #pragma endscop
}
