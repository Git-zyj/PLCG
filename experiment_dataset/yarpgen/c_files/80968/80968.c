/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((((306473964 || 0) ? (max(13824482564356619776, 16)) : (-1 - 2710634956)))) ? (!var_14) : (((var_17 ? var_1 : var_11)))));
                arr_4 [i_1] = ((4095 ? -14704 : 13824482564356619773));
            }
        }
    }
    var_21 -= ((var_18 + ((var_7 ? var_1 : var_13))));
    #pragma endscop
}
