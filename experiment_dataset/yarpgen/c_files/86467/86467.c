/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((14239 ? (!-8104132534249057207) : 26)))));
                var_15 = max(122, 14235);
                var_16 = (max((max(((14239 ? 2640690534 : 8)), (arr_0 [i_0 + 1]))), ((((arr_1 [i_0]) < 14254)))));
            }
        }
    }
    var_17 = ((((max(var_7, var_10))) ? 58 : var_2));
    var_18 = ((((((var_6 ? var_12 : 8)) <= (((-4096 ? 15 : 2147483632))))) ? ((var_10 ? var_10 : var_10)) : 65535));
    #pragma endscop
}
