/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_9, var_11));
    var_13 = (min((((((9054336743012724252 ? 4 : var_9))) ? ((var_1 ? var_11 : var_6)) : var_10)), ((min(var_10, var_8)))));
    var_14 = (((var_0 <= var_10) ? -104 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (arr_3 [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = min((((((((arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3]) != var_4)))) | (arr_2 [i_0]))), ((((((123 ? -2589891810764863263 : var_0))) ? (701766331 > 8191) : (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4]) - var_7))))));
                                var_15 ^= (((((((~(arr_10 [i_4] [i_1] [i_1] [i_0])))) ? ((~(arr_12 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] [5]))) : (max(var_5, -701766331)))) <= (max(((377530473 ? var_6 : -485953294)), (var_0 - 701766338)))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_2] [11] [i_3] [i_4] [5] = ((var_3 ? ((((-1996318174 | var_1) <= 701766334))) : (max((max(var_4, 252)), 0))));
                            }
                        }
                    }
                    var_16 = (arr_2 [i_0]);
                    arr_17 [i_2] [21] [i_0 + 1] = (-var_5 ? (-4 && var_6) : (~701766331));
                }
            }
        }
    }
    #pragma endscop
}
