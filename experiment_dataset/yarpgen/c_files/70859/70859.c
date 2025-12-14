/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (arr_5 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_22 = ((((min((arr_10 [i_3] [i_3 - 3] [i_3 - 3] [i_3 + 2] [i_3 - 3] [i_3 - 4]), 2111780781))) ? (arr_10 [i_3 - 1] [i_3 - 3] [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3 - 1]) : ((2147483647 ? -6677 : (arr_10 [i_3] [i_3 + 3] [i_3 - 1] [i_3 - 3] [i_3 - 4] [i_3 - 1])))));
                            var_23 = var_19;
                        }
                    }
                }
                var_24 *= ((var_10 && ((min(((-105 ? (arr_3 [5]) : 0)), -669414871)))));
            }
        }
    }
    var_25 = ((var_0 && (((var_17 ? var_7 : 1)))));
    var_26 = ((((var_4 == var_15) ? ((min(var_3, 255))) : (var_5 >= var_19))));
    #pragma endscop
}
