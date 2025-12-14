/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(((var_2 ? var_6 : var_1)), var_5))) && -var_1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (((((arr_2 [i_1 - 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]))) + (((min((arr_2 [i_1 + 1]), var_6))))));
                    arr_9 [17] = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = ((((min((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_2] [i_3 - 1] [i_0 + 1] [i_3])))) ? -39 : 32764));
                                arr_16 [i_0] [i_3] [i_2] = ((41299 ? ((((arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 3]) ? ((min(-1, var_4))) : ((var_1 ? 3 : (arr_8 [i_1 - 2] [i_3] [21])))))) : (min(var_1, (((arr_5 [i_0]) ? (arr_6 [i_0]) : -202845848567697374))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1 - 1] [3] = ((((((min((arr_11 [i_0] [i_0] [21] [11]), -3)) * var_9))) ? ((((min(var_7, var_0))) / (var_3 - var_4))) : var_7));
                }
            }
        }
    }
    #pragma endscop
}
