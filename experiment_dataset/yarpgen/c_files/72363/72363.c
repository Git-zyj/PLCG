/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((var_0 ? var_8 : 4294967295)) >> (4294967287 - 4294967285)))), ((-var_7 / ((var_9 ? var_7 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_12 |= (((((var_5 ? (6 != 4) : var_4))) ? ((((var_9 ? var_10 : 10)))) : var_8));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = (((((var_5 ? 37 : 3768))) ? ((var_5 ? var_1 : var_1)) : 30));
                            arr_12 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((((((1 ? var_1 : 901533683)) ? var_9 : var_2))));
                            var_13 = (((~(4740 | 65508))));
                            arr_13 [i_0] [i_3] = (min(14508, (((60810 ? 1772 : var_4)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_29 [i_4] [i_8] |= (((((((1 < 1819449232) && ((min(-1, -5445138602217588588))))))) > 901533690));
                                arr_30 [i_7] = ((((!(((1 ? var_10 : var_1))))) ? ((790351336847598944 ? (((var_8 ? var_3 : var_10))) : ((var_5 ? 470176 : 0)))) : (((min(var_3, var_4))))));
                                var_14 -= ((((2475518077 >= (var_9 || var_5))) ? (((((var_6 ? var_2 : var_8)) <= var_3))) : (((1 & var_8) / var_9))));
                            }
                        }
                    }
                }
                var_15 += 59395;
                var_16 = (((((46 ? var_10 : ((1806990938 ? 32931 : 756815476))))) ? var_10 : ((((var_4 ? var_5 : var_8)) * (var_7 < var_0)))));
                var_17 = (((((var_6 ? (var_9 || var_0) : -144115188075855871))) ? (((4611615649683210240 && var_8) ? 3 : var_7)) : ((var_0 ? 64889 : 4756))));
                var_18 = (min(var_18, (((min(-1892050025, var_9))))));
            }
        }
    }
    var_19 = (((1980887821 & -var_3) == (((((var_0 ? var_10 : var_1)) >> (var_6 - 3362436856))))));
    #pragma endscop
}
