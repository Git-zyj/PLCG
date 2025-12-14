/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min((var_15 | var_8), var_14)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 *= (min(2288695666, 6001198955067986911));
                var_21 = var_2;
                arr_6 [i_0 - 1] [i_0] = max(((var_2 * (((max(var_3, 21868)))))), var_1);
                arr_7 [i_0] [i_0] = ((!((max(var_6, var_3)))));
            }
        }
    }
    #pragma endscop
}
