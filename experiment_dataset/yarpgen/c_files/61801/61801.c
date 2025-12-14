/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [3] = (min((arr_2 [i_0]), ((((arr_1 [i_0]) > (arr_3 [i_0]))))));
                arr_7 [i_1] [10] [0] = (arr_5 [1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [i_3] = ((-(arr_11 [i_2])));
                arr_14 [i_2] [i_3] [1] = var_3;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] [14] = (min(((max(-86, 1))), (arr_18 [8] [i_2] [i_2] [0])));
                            arr_22 [i_2] [i_3] [i_4] = (((-((var_4 ? (arr_19 [1] [i_3] [i_3] [i_3] [i_3] [i_3]) : var_14)))));
                            arr_23 [i_5] [i_4] [i_4] [i_2] = (!var_13);
                            arr_24 [i_2] [i_2] [0] [2] [0] = ((min((min((arr_12 [i_2] [i_3]), var_12)), (arr_16 [0] [0]))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (-92 ? var_13 : -86);
    #pragma endscop
}
