/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((arr_2 [i_0 + 1] [i_1]) ? (arr_3 [i_1]) : ((max(var_9, (max(var_9, var_5)))))));
                arr_4 [1] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] = (max((arr_0 [i_0]), ((((arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 2] [i_0 - 2]) > (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_2]))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 20;i_4 += 1)
                            {
                                var_12 = var_8;
                                arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = (((arr_8 [i_0] [i_0 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_11 [i_4]) : (arr_6 [i_0 + 2] [i_4 + 1] [i_0 + 2] [i_4])));
                                arr_13 [i_0 + 2] [i_0 + 2] [i_4] [i_3] [i_4 + 1] = (((arr_1 [i_0 + 2]) ? (arr_10 [i_0 - 1] [i_4] [i_4 + 1] [i_4] [i_4]) : (arr_5 [i_0 - 1])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_13 = (max(var_13, (arr_1 [i_0 + 2])));
                                var_14 = var_8;
                                var_15 ^= (((arr_0 [i_0 - 1]) ? var_6 : (arr_0 [i_0 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_0, ((var_4 ? (~var_3) : (min(var_2, var_1))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_17 = (max((((arr_25 [i_6 + 1] [i_6]) ? (arr_25 [i_6 + 1] [i_6]) : var_3)), var_3));
                            var_18 = (max(((((max(var_2, (arr_23 [i_6] [i_7] [i_6])))) ? var_7 : (max((arr_17 [i_6]), var_1)))), ((max((max(var_8, (arr_21 [i_7] [i_9]))), var_5)))));
                            var_19 -= ((((max(8304527859926392599, 503918115015971736))) ? (arr_23 [i_7] [i_6 + 1] [i_7]) : ((var_0 ? (((var_7 ? var_3 : (arr_24 [i_6 + 3] [i_6 + 3] [i_7])))) : (min((arr_26 [i_9] [i_7] [i_9 - 1]), (arr_19 [i_6] [i_8] [i_7])))))));
                        }
                    }
                }
                arr_27 [i_6] [i_6] [i_6] = (max((((max((arr_26 [i_6] [i_6] [i_6]), (arr_25 [i_6] [i_6]))) - (((16383 ? 0 : 0))))), ((max(var_2, (arr_18 [i_6 + 1]))))));
                arr_28 [i_6] [5] = var_0;
            }
        }
    }
    #pragma endscop
}
