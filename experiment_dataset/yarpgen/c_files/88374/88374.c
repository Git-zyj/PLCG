/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = 16219;

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_21 -= (((arr_7 [2] [2] [i_2]) || ((((26 - 17665) ? (min(1, var_19)) : var_17)))));
                                arr_12 [11] [i_1] [i_0] [i_1] [1] = (((arr_4 [i_0] [11] [i_2] [i_4]) ? -733632846 : ((((min(1824971121, 0))) ? ((max(var_8, (arr_8 [i_4])))) : ((1257832067 ? -1824971121 : 1824971121))))));
                                var_22 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_23 = var_8;
                var_24 = ((((((((-1824971121 % 135) + 2147483647)) >> (var_16 / var_16)))) ? (arr_6 [i_0]) : (((((arr_9 [i_0] [i_0]) ? -1824971122 : var_11)) - (-1824971131 + 1824971136)))));
            }
        }
    }
    var_25 = (-(max((min(var_8, var_17)), var_11)));
    var_26 &= ((var_4 == ((119 << (var_11 - 2751952482)))));
    #pragma endscop
}
