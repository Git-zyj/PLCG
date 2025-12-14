/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = 150;
                arr_8 [1] [i_0] [i_0] = (max((107 / 90), (min(var_18, ((39051 ? 105 : 150))))));
                arr_9 [i_0] [i_1] = (min((min((var_1 * var_16), ((var_14 ? var_16 : -1974)))), (min((min(var_18, var_4)), ((max(var_2, var_5)))))));
                var_20 = (min(var_20, ((((min((max(var_9, 3150573236)), (var_14 && var_4))) / (((min(var_18, var_14)))))))));
            }
        }
    }
    var_21 = (((((var_0 ? (((min(150, var_7)))) : (min(-6302, var_16))))) ? var_4 : ((max(((min(12476, 1967))), (min(3007653776, var_15)))))));
    #pragma endscop
}
