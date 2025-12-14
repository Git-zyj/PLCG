/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((max((min(1840623012, 34730)), ((max((arr_5 [i_1 + 2] [i_1 + 1]), (arr_6 [i_1 - 1])))))))));
                var_11 = (arr_6 [i_0]);
            }
        }
    }
    var_12 = (max(((min((max(var_5, 533386741)), var_5))), ((var_8 ? (!62125) : var_2))));
    var_13 = (max(((~(~56343))), (~-17701)));
    #pragma endscop
}
