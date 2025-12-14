/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 13057118168972589349;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] = (min(((((var_15 << 4) ? -2047 : ((~(arr_0 [0])))))), (((arr_3 [i_2 + 1] [i_0 + 1]) & (((-(arr_0 [1]))))))));
                                arr_12 [i_0] [i_0] [i_4] [i_0] [i_2] [i_3 - 2] [i_3 - 2] = (min(((((-25114 ? 480 : var_5)))), (((-(arr_6 [i_0]))))));
                            }
                        }
                    }
                    arr_13 [i_0] = 1;
                    arr_14 [i_0] = (arr_1 [i_0]);
                    var_17 -= (arr_5 [i_0] [i_0 + 3] [i_0 + 3] [i_0]);
                    var_18 = ((((((arr_10 [i_0 + 3] [i_2 + 1] [i_2] [i_2 - 1]) | (arr_10 [i_0 + 2] [i_2 + 1] [i_2] [i_2 - 1])))) ? 486 : ((-1 ? (arr_3 [i_1] [i_2 + 1]) : (arr_3 [i_0] [i_2 - 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_21 [i_6] = (arr_17 [i_5] [i_6] [i_5]);
                var_19 = (((((((-1 ? -487 : 119))) ? ((30 ? 480 : (arr_19 [i_5] [i_5] [i_6]))) : (min((arr_19 [8] [i_6] [1]), (arr_15 [i_6] [i_6]))))) * (((-var_15 ? (!-1) : -494)))));
            }
        }
    }
    #pragma endscop
}
