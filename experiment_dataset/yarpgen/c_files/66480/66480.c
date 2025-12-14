/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((((max(var_11, (arr_3 [i_0])))) * (var_2 - var_4))) & ((((var_9 && var_4) || (((arr_1 [i_0]) && (arr_2 [i_0] [i_0]))))))));
                var_21 = ((((((((max(-27613, var_15))) && ((max(var_19, -20294))))))) < (min((((arr_5 [i_1]) ^ (arr_3 [i_0]))), (((20286 / (arr_2 [i_0] [i_1]))))))));
                arr_7 [i_1] = ((((((((arr_2 [i_0] [i_0]) * var_11)) - var_0))) / -4930610462589439770));
                var_22 = (((max((-14309 ^ var_5), -5880115869893764807)) >= var_14));
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
