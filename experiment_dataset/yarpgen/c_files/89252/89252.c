/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_3] [i_1 + 2] [i_3] [i_0] = ((((((arr_0 [i_0 + 1]) ? -1 : (arr_0 [i_0 + 1])))) ? (((((arr_0 [i_0 + 1]) || (arr_0 [i_0 - 1]))))) : (((arr_0 [i_0 + 2]) ? var_6 : var_12))));
                            var_16 = (max(var_16, (((min((arr_1 [i_1 - 2] [i_1 - 1]), var_4))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_17 = (min(var_17, -9470));
                    var_18 = ((+((((arr_2 [i_0]) && (arr_11 [4] [4] [i_4 + 1] [4]))))));
                    arr_16 [i_0] [i_1 - 1] [i_1 + 3] [i_4] = ((-16541 ? (((arr_3 [i_0]) ? 1 : var_15)) : var_6));
                    var_19 = (min(var_19, (arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 2])));
                }
            }
        }
    }
    var_20 &= ((var_0 ? (((2556951145 ? 1472957243 : -15))) : ((min(((min(var_4, var_9))), 478766715)))));
    #pragma endscop
}
