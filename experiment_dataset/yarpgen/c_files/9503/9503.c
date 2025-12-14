/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((3967592864 % 97), 12335162200770728716));
        var_19 *= ((!(~-9223372036854775780)));
        arr_3 [i_0] [10] |= max((min((max(39, 161721756)), 661821581)), ((min(-161721756, 161721758))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 = 728378180;
                        arr_14 [i_1] = (min(((((((-2147483647 - 1) ^ 161721756)) ^ (~1127357711)))), (((-2147483647 - 1) | 3285202373))));
                        arr_15 [i_1] [i_1] [i_1] [i_4] = (max((min(32754, (min(1620354920, -18248)))), -2147483647));
                    }
                }
            }
        }
        var_21 = (max(var_21, ((min(((~(4294967295 * 16))), -1)))));
        arr_16 [i_1] [13] = 13257532491155097274;
        arr_17 [i_1] [i_1] = ((-2147483647 % (max((3285202373 - -14316), 119))));
    }
    var_22 = (15 - -64);
    var_23 = (~var_7);
    #pragma endscop
}
