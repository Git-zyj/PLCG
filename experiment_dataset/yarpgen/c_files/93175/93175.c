/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~(max(var_6, var_1))))) ? ((-94 ? var_10 : var_3)) : ((1 ? 114 : 1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (((((~((var_13 / (arr_7 [i_0] [15])))))) % (((-94 ? (arr_8 [8] [i_1] [i_1 - 1] [4]) : (arr_3 [i_0] [i_2]))))));
                    var_22 = ((!((((!10688) ? (-22660 > 118) : (((-9734 + 2147483647) << (((arr_3 [i_1 + 1] [i_1 + 1]) - 28323)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 = ((!(arr_11 [i_2] [i_3] [i_4 + 2])));
                                var_24 = (arr_11 [i_0] [0] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
