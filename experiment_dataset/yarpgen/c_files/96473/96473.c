/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_15));
    var_20 += var_15;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((var_17 ? (!1989544963) : (arr_4 [i_0 - 1])))) || (((arr_5 [i_2 - 1] [13] [i_2 - 1] [17]) && var_14))))));
                    var_22 = (min(var_22, (arr_6 [i_2 + 2] [0] [i_1])));
                }
            }
        }
        var_23 = (arr_1 [i_0 + 1] [i_0 - 2]);
    }
    #pragma endscop
}
