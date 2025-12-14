/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_1] [0] [i_1] &= ((((max((-127 - 1), -1))) && (((((arr_8 [i_1]) ? 4611686018427387902 : var_4))))));
                                var_12 = (!var_0);
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = 1906161713350823077;
                                var_13 += (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                    var_14 = var_9;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_15 = (((arr_13 [i_5] [11]) ? (arr_13 [i_5] [8]) : var_6));
        var_16 += var_7;
        var_17 = 1906161713350823077;
    }
    #pragma endscop
}
