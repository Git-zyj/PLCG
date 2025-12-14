/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [15] [i_0] = ((((arr_3 [i_0] [i_1]) / 1)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((-(max((arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]), 6520305345857928779))))));
                                var_21 = (max(var_21, ((max(((1 ? (((arr_0 [i_1] [i_3 + 1]) ? var_13 : 9223372036854775807)) : (max(6520305345857928773, 46)))), 1)))));
                                var_22 = var_5;
                                arr_16 [i_0] [i_1] &= (((((~(-22 % 29538)))) ? ((-(arr_15 [i_0] [i_0] [i_2] [i_3 + 3] [i_0]))) : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((max(18446744073709551607, var_4)))) ? (((-var_5 ? (!var_8) : var_15))) : 5214523122420852602));
    var_24 = (max((max(var_15, 27727)), -1));
    var_25 = (max(var_25, -764601105));
    #pragma endscop
}
