/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 | (166 ^ 496655092)));
    var_11 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_1] [i_0] = ((((-((((arr_2 [8] [8]) == (arr_0 [i_0] [i_2]))))))) ? (arr_3 [i_0] [i_0] [i_2]) : (18 / 3094373130));
                    arr_8 [i_0] [9] [i_0] [i_0] = (min(((~((-32759 ? -47 : 79)))), (arr_5 [i_2] [i_2] [i_1] [i_0])));
                    arr_9 [i_2] = (arr_1 [i_0]);
                    arr_10 [i_0] [i_0] [i_2] = (max((((((var_2 ? var_6 : var_2))) ? var_9 : var_0)), 27543));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((-(((arr_1 [i_0]) / (arr_16 [i_4] [i_4] [i_3] [10] [i_0])))))), 875515193112382930));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_4] [i_1] [i_0]);
                            arr_19 [i_4] [i_0] [i_1] [i_0] = (+(((arr_13 [i_0] [i_0] [i_4]) | 49)));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_2 [i_0] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_12 = ((((var_0 && var_7) ? ((var_4 ? 274877906942 : var_0)) : var_7)));
    #pragma endscop
}
