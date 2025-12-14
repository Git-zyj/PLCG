/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~var_1) ? (min(var_10, var_6)) : (!var_16)));
    var_18 = 119;
    var_19 = ((((max(((var_3 ? (-9223372036854775807 - 1) : var_11)), (max(8907258055894058522, -8907258055894058534))))) ? (var_14 ^ var_0) : ((((var_1 ? var_15 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = 1842009838;
                var_21 -= ((var_10 ? (var_15 >= var_15) : ((251 ? var_13 : ((1517218179 ? 1842009838 : var_7))))));
            }
        }
    }
    #pragma endscop
}
