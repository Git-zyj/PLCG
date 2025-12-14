/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (((arr_4 [i_0] [i_0] [6]) * ((max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1]))))));
                arr_5 [i_0] [i_1] = 31;
            }
        }
    }
    var_18 = (min(var_11, ((-14085 - ((28345 ? 115 : 1))))));
    var_19 = (max(((~(var_6 | var_7))), var_16));
    #pragma endscop
}
