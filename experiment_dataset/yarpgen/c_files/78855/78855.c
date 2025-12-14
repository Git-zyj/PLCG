/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (min(var_20, (((-(-127 - 1))))));
        var_21 = ((var_6 ? 22707 : -var_16));
        var_22 *= ((var_7 ? var_6 : ((-12564 ? var_0 : var_18))));
        var_23 = ((((22727 ? var_12 : var_3))) ? (~var_19) : var_5);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_24 = (min(var_24, 9051878945188779115));
        var_25 = ((~(min(var_10, ((var_6 ? var_6 : 4732))))));
    }
    var_26 = ((((min(((max(196, 6571))), -1))) ? 2147483647 : (((((9394865128520772508 ? 1218594575 : var_6))) ? 32767 : ((var_4 ? -4712 : 26085))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                var_27 = ((-((-19547 ? var_14 : var_3))));
                arr_9 [i_2] = (min((((~var_3) ? ((var_0 ? (-2147483647 - 1) : 9394865128520772508)) : var_1)), var_15));
            }
        }
    }
    #pragma endscop
}
