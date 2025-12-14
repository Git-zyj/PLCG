/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 2147483647;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = var_3;
                            var_19 = (min(var_19, (arr_8 [i_0] [i_0] [i_2] [3])));
                            var_20 = (((arr_0 [i_0]) ? (((2147483647 / (arr_0 [i_0])))) : ((var_2 ? (arr_0 [i_2]) : var_15))));
                            var_21 = (min((2147483647 && -2147483646), (-2147483642 && var_1)));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((((-2147483646 - (-2147483646 - -2147483640)))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_23 = ((2147483643 ? -var_3 : ((min(74, 1405573689)))));
                    var_24 = (min(var_24, 0));
                    arr_17 [i_6] [i_6] [i_5] [i_4] = 64;
                }
            }
        }
    }
    #pragma endscop
}
