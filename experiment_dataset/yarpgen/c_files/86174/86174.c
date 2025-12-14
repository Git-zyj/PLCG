/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = ((var_13 ? var_4 : var_0));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] = (arr_0 [i_0]);
                        var_17 = (max(var_17, ((((arr_3 [8] [8]) / (arr_9 [i_0] [i_0] [i_0] [0] [4] [i_0]))))));
                        var_18 = (var_10 ? ((var_2 ? 50226 : 15861534042905646617)) : 0);
                    }
                    var_19 = (max(var_19, var_8));
                }
            }
        }
    }
    #pragma endscop
}
