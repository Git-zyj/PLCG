/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 7576));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (max(-7576, (((1 * -7576) ? -7597 : ((var_14 ? (-9223372036854775807 - 1) : 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] = max(7578, 18014398509481983);
                                var_16 = ((1 ? ((2753020700161120186 / (-9223372036854775807 - 1))) : (var_7 - var_6)));
                                var_17 = ((((min(var_1, -7577))) + (-6 / -2)));
                            }
                        }
                    }
                    var_18 = (min(var_18, ((((((~-7577) < ((max(960, 96))))) ? ((134217728 ? var_14 : 1)) : ((1 ^ (-127 - 1))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = 134217728;
        arr_19 [i_5] = max((18017 && 1), (18 ^ 127));
        var_20 = (max(var_20, (((8390 ? 176 : 1)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_21 = (min(var_21, 955100025));
        var_22 = (var_11 + var_0);
    }
    var_23 -= 1;
    #pragma endscop
}
