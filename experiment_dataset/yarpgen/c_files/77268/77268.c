/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));
    var_14 = (max(var_14, (((((((var_9 ? var_7 : var_1))) || (((var_2 ? var_0 : var_5))))) ? var_6 : (((((var_4 ? var_6 : var_10))) ? (!var_9) : ((var_6 ? var_0 : var_12))))))));
    var_15 = ((((~(((-2147483647 - 1) % var_1)))) <= var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = -1788071347;
                var_17 = (max(var_17, ((-2147483644 ? 1196480808 : -308229620))));
            }
        }
    }
    #pragma endscop
}
