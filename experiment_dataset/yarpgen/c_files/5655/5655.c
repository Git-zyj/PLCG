/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((var_12 ? ((max(var_2, var_12))) : ((var_5 ? 8508 : -15082))))) ? var_9 : ((var_0 & (var_3 < var_0)))));
    var_16 = (min(var_11, (min((-3670 > -8512), ((var_4 ? var_2 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((((((max(var_12, -8512))) & (arr_0 [i_0]))) ^ (arr_0 [i_1])));
                var_18 *= (max(((((var_0 ? 39435 : (arr_0 [i_0]))))), (min(6520736333396999723, 1614503882962154428))));
                var_19 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
