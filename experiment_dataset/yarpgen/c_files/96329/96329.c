/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max((((var_5 ? -63 : ((var_3 ? 26544 : var_6))))), var_2));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = ((((((~0) ? 1 : 9221382762724408651))) ? 61 : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [1]) : var_6))));
                                var_16 = var_1;
                                arr_12 [i_1] [i_1] = (((((max((arr_3 [i_1]), var_2)) >> (-var_7 + 47))) == (((~(var_9 + var_1))))));
                                arr_13 [i_1] [i_1 + 3] [i_2 - 1] [i_3] [i_4] = ((((min(((min(var_7, 1))), 1))) ? ((-var_1 - ((-(arr_4 [9] [9]))))) : (((~(arr_7 [i_4] [i_1] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_17 = var_9;
                }
            }
        }
        var_18 = (max(var_18, (arr_7 [i_0] [i_0] [i_0] [i_0])));
        var_19 -= (((4 - 1) ? (((!((((arr_4 [i_0] [i_0]) ? var_4 : var_4)))))) : (((var_2 && (~var_2))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_20 &= (((((50 ? var_1 : (arr_0 [i_5])))) && ((min(((var_13 ? var_3 : var_11)), (arr_3 [i_5]))))));
        var_21 = (arr_0 [i_5]);
    }
    #pragma endscop
}
