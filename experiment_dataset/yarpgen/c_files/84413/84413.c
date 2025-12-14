/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((var_7 ? var_4 : (!534773760)))) > var_12)))));
    var_19 = ((((~(~-13613))) * (((((var_4 ? var_15 : var_6)) > (~var_14))))));
    var_20 += ((-(((((var_3 ? var_4 : 268435448))) ? 3549748117991363639 : (!var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((~((var_2 << (((arr_4 [i_0] [2]) + 5985139038926825427))))))));
                var_22 = ((((min(1, (arr_1 [i_0])))) ? ((min(268435435, (-9223372036854775807 - 1)))) : (max(8831582280284193541, (arr_0 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 = var_16;
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] = ((((!((min(1, -268435448)))))) | (var_14 < 11686378319251347358));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] = ((min(408320140218197590, (arr_16 [i_0]))));
                            var_24 += 12712;
                            arr_20 [i_0] [i_0] [i_0] [i_0] = (((~12712) < ((~(~0)))));
                            var_25 = ((((min(var_10, var_14) / 9))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((((((~var_0) ? 237 : 65535))) & var_0));
    #pragma endscop
}
