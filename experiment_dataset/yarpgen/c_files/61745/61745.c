/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((var_6 ? var_12 : ((var_10 ? var_18 : 32))))))));
    var_21 = (var_4 && var_11);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (!var_8)));
                    var_23 = ((((min((arr_4 [i_0 + 2]), (arr_5 [i_0])))) ? (min((arr_4 [i_0 + 2]), (arr_5 [i_0]))) : (arr_4 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
