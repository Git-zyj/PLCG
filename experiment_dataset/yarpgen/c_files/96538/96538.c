/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = arr_4 [i_0];
                var_21 = (max(((+(((arr_1 [i_1]) + var_0)))), var_8));
                var_22 = (min(var_22, (((-((-(arr_4 [i_0]))))))));
            }
        }
    }
    var_23 = (((((65535 ? 3861380591 : 1642003948))) ? ((((min(4146, 52992))) + ((min(65535, 65532))))) : (((min(var_14, var_19))))));
    var_24 *= ((-3 ? (~-11317) : var_3));
    var_25 = (max((var_1 | var_0), (~var_16)));
    #pragma endscop
}
