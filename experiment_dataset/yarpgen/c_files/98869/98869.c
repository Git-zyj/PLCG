/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_13, (((var_12 * 683557467989102449) * ((var_6 ? var_13 : 16233521655951422958))))));
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((!((max(var_8, (-127 - 1))))));
                var_21 = (!var_3);
            }
        }
    }
    var_22 = ((((var_5 | (~16233521655951422958)))) ? ((~(var_5 | var_1))) : (!-var_16));
    #pragma endscop
}
