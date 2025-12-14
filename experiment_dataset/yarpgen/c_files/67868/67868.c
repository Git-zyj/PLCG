/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (((((max(-10123, var_9))) ? var_4 : (var_0 && var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (arr_1 [0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 -= (((((10854663047865855358 ? (~2718552876) : (((((arr_3 [11] [i_3]) || var_3))))))) ? ((((-32765 != var_1) * (((var_7 || (arr_4 [i_3] [i_0]))))))) : (((((var_8 / (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : (((((arr_7 [i_0] [6] [i_2] [2]) > var_2))))))));
                                var_17 = (arr_9 [i_3] [i_3] [i_2] [i_0] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = var_8;
    #pragma endscop
}
