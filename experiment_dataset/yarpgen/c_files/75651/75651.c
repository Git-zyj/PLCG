/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? var_10 : (max(((0 ? var_13 : var_12)), (max(-7346566420307953301, var_4))))));
    var_16 = (min(var_16, (~1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = ((((min(-28, -7346566420307953301))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : ((min(var_9, -7346566420307953301)))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = (max((min(((min(2512097736, 7346566420307953284))), var_6)), (min(((((arr_5 [i_1] [i_2] [i_2]) << (var_5 - 7785432695317928730)))), (max(var_5, -7167382808663063800))))));
                        var_19 = var_10;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 = (~7346566420307953325);
                            var_21 ^= (arr_10 [i_0] [i_1] [i_2] [i_3] [3]);
                            var_22 = (min(var_22, 7346566420307953301));
                            var_23 = ((-7346566420307953304 ? 1 : 0));
                        }
                    }
                }
            }
        }
        var_24 = ((~(arr_1 [i_0])));
    }
    var_25 |= (var_5 || var_0);
    #pragma endscop
}
