/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 *= ((!((min((5833232830329541522 <= var_6), var_0)))));
                arr_4 [i_1] = -0;
            }
        }
    }
    var_16 = max(((7623 ? ((147732069 ? -7617 : var_7)) : (!147732090))), (var_13 + var_13));

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_17 -= ((var_14 ? -6850 : var_14));
        var_18 |= ((((max((arr_6 [i_2 + 3] [i_2 + 3]), var_6))) ? (((arr_6 [i_2 + 3] [i_2 + 3]) | var_2)) : var_6));
        var_19 = (((2443754112 ? 147732069 : ((1 ? var_3 : var_12)))));
    }
    #pragma endscop
}
