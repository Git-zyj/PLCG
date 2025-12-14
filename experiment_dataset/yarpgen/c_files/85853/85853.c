/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8922500622855347020;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (max((!var_7), (min(var_3, (arr_3 [i_1 + 1] [i_1 - 2])))));
                            arr_9 [i_0] [13] [i_2] [i_3] = (!0);
                            var_19 = ((!(((arr_5 [i_0] [i_1 + 1] [i_0]) || 6926947729189467814))));
                            arr_10 [i_2] [i_2] &= var_5;
                        }
                    }
                }
                var_20 = max(((max((arr_2 [i_1 + 2]), (arr_2 [i_1 - 1])))), (max(1, 36494)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_15 [i_4] = (max((((var_8 || (((6778771318216888186 ? 165 : 29042)))))), (max(2, (arr_12 [i_4] [i_5])))));
                arr_16 [i_4] [i_4] = (((((arr_12 [i_5] [1]) & (arr_12 [i_4] [i_5]))) * ((((!(var_8 < var_5)))))));
            }
        }
    }
    #pragma endscop
}
