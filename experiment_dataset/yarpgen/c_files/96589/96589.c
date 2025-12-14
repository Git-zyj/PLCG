/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((min(var_13, (min(2027328852, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = var_12;
                var_19 = (((!(!var_14))));
            }
        }
    }
    var_20 = (min(var_20, ((((var_14 % (var_12 >= 2914095178))) + (((!((min(1206403708, var_4))))))))));
    #pragma endscop
}
