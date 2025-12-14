/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(0, 14));
    var_14 += var_0;
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((((var_8 ? (5 >> 0) : ((((arr_2 [i_1] [i_1] [i_1]) / (arr_3 [i_0] [i_0]))))))) ? (((((arr_0 [i_1]) ? (arr_0 [i_0]) : 18446744073709551613)))) : 18446744073709551607)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (~var_1);
                                var_18 = var_0;
                            }
                        }
                    }
                    var_19 = ((18446744073709551615 ? 18446744073709551615 : (((var_11 << (18446744073709551615 - 18446744073709551600))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_14 [i_0] [9] [i_0] = (((arr_6 [i_1]) == (arr_1 [i_0])));
                    var_20 = (((arr_3 [i_0] [i_0]) / ((18446744073709551615 ? var_2 : (arr_2 [i_0] [i_1] [i_5])))));
                    var_21 = (max(var_21, (((!(arr_8 [i_0] [i_1] [i_1] [i_5]))))));
                }
                var_22 = 18446744073709551609;
                var_23 = (min(var_23, 18446744073709551607));
            }
        }
    }
    #pragma endscop
}
