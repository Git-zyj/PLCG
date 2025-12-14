/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~3802830330)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 |= (arr_4 [i_0] [2]);
                    var_12 = (min((min((arr_4 [i_0 + 1] [i_0 + 1]), ((((arr_5 [1] [i_1] [11]) <= (arr_2 [i_0])))))), ((((max((arr_0 [i_0]), (arr_7 [20] [i_1] [i_0]))) ^ (arr_5 [i_0] [i_0 - 1] [i_2]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_1] = (arr_0 [i_0 - 1]);
                        var_13 = (min(var_13, (((arr_1 [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_3] [i_3]) : (arr_1 [i_0 - 2])))));
                        arr_11 [i_1] [i_1] [1] [i_1] = ((!(arr_0 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 *= (arr_4 [i_0 - 1] [i_0 - 1]);
                        arr_16 [i_4] [i_1] [6] [i_2] [i_1] [i_0 - 1] = (arr_1 [i_0 - 1]);
                    }
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        arr_20 [i_1] = (((-((var_2 ? (arr_1 [i_1]) : var_1)))));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5 - 2] = (max((arr_14 [i_5 - 1] [i_5 - 3] [i_5] [i_5]), (((arr_14 [i_5 - 3] [i_5 + 2] [i_5 + 2] [i_5 + 2]) - (arr_14 [i_5 + 1] [i_5 - 3] [i_5] [i_5 - 2])))));
                    }
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
