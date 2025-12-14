/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [4] [i_0] = (!var_15);
                arr_5 [i_0] [i_0] = (((((!(arr_0 [i_0] [i_0 + 2]))))) + (238983377 / 238983378));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = arr_3 [i_1];
                                arr_16 [3] [i_1] [i_2] [i_3 + 1] [i_0] = ((max(((35639 ? (arr_14 [i_0] [4] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))), ((((arr_10 [12] [i_0]) ? 7334 : 29903))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = (((arr_2 [i_0]) <= (((((var_6 + (arr_1 [i_0] [i_1])))) ? (min(var_12, var_9)) : -var_1))));
            }
        }
    }
    var_16 -= (((((63302 ^ 34568) * var_13)) <= (var_9 + var_13)));
    var_17 = var_0;
    #pragma endscop
}
