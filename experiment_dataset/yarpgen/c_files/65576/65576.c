/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_5, ((var_8 ? var_14 : var_8)))) << (((((13697768656390080802 || 13697768656390080802) + var_13)) - 3786997694))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0 - 1]);
                var_19 = var_0;
            }
        }
    }
    var_20 = (min(((var_1 ? (max(4748975417319470814, 127)) : var_5)), (var_16 % -1830035653124321591)));
    #pragma endscop
}
