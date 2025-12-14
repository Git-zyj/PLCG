/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? ((var_4 ? 56525362 : var_4)) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((4918712055225349506 && ((max(9223372036854775779, 4918712055225349501)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (arr_9 [i_4] [i_1 - 1]);
                                arr_11 [i_4] [i_4] [i_2] [3] [15] [i_1 - 2] [i_3] = ((((((arr_4 [i_0] [i_4 - 1] [i_1 - 2]) ? ((max(var_2, (arr_1 [i_3])))) : (arr_8 [11])))) ? (((arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]) ? (((arr_0 [5]) ? (arr_4 [i_3] [i_2] [i_1]) : (arr_10 [i_0] [i_0] [i_2] [i_2] [i_4] [i_3] [i_2]))) : 133693440)) : (((min((arr_6 [1] [i_3] [1]), (arr_6 [12] [i_1] [i_1])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [10] [10] [14] [10] = 0;
                                var_15 |= (min(((~(min((arr_7 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0]), 9223372036854775779)))), (((((arr_6 [i_0] [i_2] [i_2]) ? (arr_17 [i_6] [i_5] [i_0] [i_0] [i_1 - 1] [i_0] [i_0]) : var_5))))));
                                var_16 = (max(var_16, ((min((arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), ((-(min(var_2, var_4)))))))));
                            }
                        }
                    }
                    var_17 |= (((((((arr_17 [i_0] [i_1 - 1] [i_1] [i_0] [i_2] [i_2] [i_2]) ? (arr_15 [i_1]) : 1)))) ? ((+(min((arr_6 [5] [5] [5]), (arr_9 [i_2] [i_1]))))) : ((max((((arr_13 [i_0] [i_1] [1]) + (arr_12 [i_1] [i_1 - 2] [i_1] [i_0] [i_0] [i_0]))), 28672)))));
                    var_18 = (arr_3 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
