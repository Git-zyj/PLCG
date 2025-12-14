/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 -= ((-(((-63247706086013282 - 22) ? (min(18446744073709551593, 22)) : (max(1610612736, var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((((((var_6 + 108) == var_2)) ? (min((min((arr_11 [i_2] [i_1 - 1] [i_2] [i_0] [i_2] [i_0] [i_2]), var_4)), ((((arr_2 [i_0] [8]) >> (1744761129 - 1744761067)))))) : ((-1610612752 ? ((8118129141802115392 ? var_0 : (arr_3 [i_4]))) : -70)))))));
                                var_12 = var_5;
                                var_13 &= 18434850576269850377;
                                var_14 *= (((!13) == (arr_3 [i_2])));
                                var_15 = (min(var_15, ((((((5123542692415898530 ? 0 : 1610612736)) * (arr_5 [i_1 + 4] [i_1 + 3] [i_1 + 3]))) + (!var_3)))));
                            }
                        }
                    }
                    var_16 = (max(var_16, var_6));
                    var_17 ^= (max(((((min(18446744072098938877, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((18446744073709551615 * (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : var_0)), (arr_7 [i_2] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = (max(var_18, ((((var_4 + var_1) == ((var_0 + ((min(var_6, 4194272))))))))));
    var_19 *= (((max(1837489749, 11614436727962044172)) + var_3));
    var_20 -= (((var_4 / var_0) == -var_9));
    var_21 *= var_9;
    #pragma endscop
}
