/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = ((var_3 ? var_11 : (var_10 && var_12)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((-(((~1411) ? (arr_4 [i_0 + 1]) : 2305399239))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = ((1989568044 ? ((((((arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0]) + 2147483647)) << (var_17 - 9760)))) : -1989568056));
                                var_22 = (~2305399233);
                            }
                        }
                    }
                    var_23 = (min(var_23, (max(((9223372036854775807 ? (arr_10 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) : var_16)), (((arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1]) ? 526921843 : var_14))))));
                    var_24 = (arr_3 [i_1 - 2] [i_1] [i_1 - 2]);
                    var_25 *= (~0);
                }
            }
        }
    }
    var_26 = (min(var_26, var_4));
    var_27 = (!var_9);
    #pragma endscop
}
