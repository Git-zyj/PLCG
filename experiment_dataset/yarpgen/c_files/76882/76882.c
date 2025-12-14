/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= (min(57487, (arr_4 [i_0] [i_0])));
                var_20 *= (var_1 % var_12);
            }
        }
    }
    var_21 = (min(var_21, ((((((var_18 << 3) != (8064 | var_13))) ? (min(var_5, (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (var_14 - 558304633))))) : 32615)))));
    var_22 = (max(var_22, (((((min(((8040 >> (57487 - 57469))), ((52 << (var_13 - 1005792608)))))) ? ((min(var_9, var_14))) : var_18)))));
    var_23 = (max(var_23, (((((((((8075 ? var_12 : 2103835906))) - 3994761678))) ? var_11 : var_11)))));
    #pragma endscop
}
