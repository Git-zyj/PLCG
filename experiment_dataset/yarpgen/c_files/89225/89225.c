/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [0] = ((((((arr_3 [i_0] [i_1 + 2] [i_1]) >= (((max(-114, var_9))))))) << ((((max(var_2, (arr_1 [i_1 + 1])))) - 6101))));
                arr_5 [7] [i_1] [7] = ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))) ? ((-114 * (arr_1 [i_0 + 1]))) : ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_1] [0] [i_3] [i_2] &= ((((max((arr_10 [i_3] [7] [i_1] [i_0]), var_7))) || ((((var_14 ? 110 : 48)) >= var_16))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [0] = (((((arr_9 [i_0 - 1] [i_0 + 1]) ? (arr_9 [i_0 + 1] [i_0 + 1]) : (arr_9 [i_0 + 1] [i_0 - 1]))) | ((var_9 + (arr_9 [i_0 + 1] [i_0 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
