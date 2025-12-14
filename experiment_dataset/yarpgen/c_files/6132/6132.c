/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (196399968 && 1117257735);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = 3585904535;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_22 = ((((((arr_1 [i_1]) || var_18))) / (var_9 && var_8)));
                    var_23 = ((max((arr_0 [i_0]), var_7)) * var_5);
                }
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    var_24 = var_12;
                    var_25 = var_10;
                }
            }
        }
    }
    var_26 = var_0;
    #pragma endscop
}
