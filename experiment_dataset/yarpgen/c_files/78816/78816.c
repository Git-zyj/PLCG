/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((~(-37 >= 1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 *= (!-5289);
                var_12 = (((min(0, -78))) >= (115 || 32766));
            }
        }
    }
    var_13 = (min(var_13, ((((((min((1 - 127), var_6)) + 2147483647)) >> (123 >= -123))))));
    #pragma endscop
}
