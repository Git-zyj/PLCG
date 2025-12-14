/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((!(((2147483647 ? var_5 : ((var_7 ? 8191 : 676301943)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_19 |= (max(8167238654432443437, 62013445738258));
                var_20 -= ((((((arr_0 [i_0 - 2]) ? var_16 : ((var_13 ? -28463 : var_3))))) ? var_9 : (((((5 ? 0 : 288230376151711743))) ? 84 : -1))));
            }
        }
    }
    var_21 = ((var_0 ? 18446744073709551594 : (((-2048 ? 2147483633 : (((-32767 - 1) ? 32767 : 128)))))));
    #pragma endscop
}
