/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_6 << ((min(var_13, var_11)))))) & ((var_4 ? (((min(var_10, 59681)))) : var_0))));
    var_20 = ((+(((!107) ? (var_7 != var_2) : var_17))));
    var_21 = var_2;
    var_22 = -0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = ((!(arr_1 [i_1 + 2] [i_1])));
                var_24 = (max(var_24, ((min(-901652226, 5158251825575970503)))));
            }
        }
    }
    #pragma endscop
}
