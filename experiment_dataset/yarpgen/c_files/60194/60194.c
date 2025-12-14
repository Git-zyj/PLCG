/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = ((((((((min(var_9, var_7)))) * var_0))) ? 164 : ((var_9 ? ((3657838966 ? 1377656024 : 1593261219054153947)) : 637128329))));
    var_20 = (max(var_20, ((min((((!(var_15 && var_4)))), var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0 + 1] = (-9223372036854775807 - 1);
                    var_21 = (min(5674244098898826933, (arr_8 [i_0 - 1] [14] [i_1] [i_2])));
                }
            }
        }
    }
    var_22 = (!var_13);
    #pragma endscop
}
