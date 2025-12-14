/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_3);
    var_21 = ((((((10798816448374233733 | 13302685971474138905) ? ((min(var_15, var_3))) : (18 * var_1)))) ? ((((!(((187 ? var_8 : var_14))))))) : (((var_17 || var_18) ? var_8 : (((min(1, 21834))))))));
    var_22 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_23 += min((((arr_10 [i_0 - 2] [i_0] [i_1] [i_1] [i_1] [i_1 - 1]) && (!var_16))), (!-69));
                            var_24 ^= (((max((arr_5 [i_0 - 1] [i_1 - 1] [i_0 - 1]), var_0)) << (((min(24084, (arr_8 [i_0 + 1] [i_1 - 1] [i_0 - 2] [i_3]))) - 24084))));
                        }
                    }
                }
                arr_11 [i_0 - 2] [i_1 - 1] [i_1 - 1] = -49744;
                var_25 += (49744 - 18140);
                var_26 += 49775;
                var_27 = 45514;
            }
        }
    }
    #pragma endscop
}
