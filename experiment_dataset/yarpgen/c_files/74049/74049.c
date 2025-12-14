/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_13 = (max(var_13, var_7));
                    var_14 = (min((max(var_0, (min(67, var_4)))), (((((arr_4 [i_0] [i_1 - 1] [i_0]) ? 13261935898840597598 : 249))))));
                    var_15 = ((((((arr_0 [i_0 + 1]) / (arr_5 [i_0 + 1] [i_1 + 3] [i_1])))) ? (!254) : -7505));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_16 = (96 - 281200098803712);
                    var_17 = (min(var_17, (13261935898840597599 / -42)));
                }
                var_18 = (max((arr_0 [i_0]), var_6));
            }
        }
    }
    var_19 = (!var_9);
    #pragma endscop
}
