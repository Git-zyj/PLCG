/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!35272) | var_1))) && var_8));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_4] = ((!((((((var_14 ? 1127923717 : var_16))) ? (((var_2 ? var_5 : -12578))) : -4294967290)))));
                                arr_14 [i_0] [i_0] [i_0] [5] [9] [i_3] = ((17042430230528 | ((((((arr_0 [7] [i_1]) ? var_9 : (arr_0 [i_1] [i_1]))) >> (((-5857 % var_2) - 7893821292917413087)))))));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = arr_0 [i_1] [i_1];
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = (-18633 ? (-32040 || -26650) : 9782642854210456767);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_33 [i_8] = (arr_32 [i_8 - 1] [i_6 + 1] [i_6 + 1]);
                                arr_34 [i_5] [i_8] [i_5] [15] [18] [i_5] = ((1127923723 ? ((26630 ^ ((min(var_15, 5850))))) : (min((!-286406531), (arr_28 [i_5] [i_5] [i_7] [i_8 + 1])))));
                            }
                        }
                    }
                }
                arr_35 [i_5] [i_5] [i_6] = (((((!((((arr_2 [i_5] [i_5]) ^ (arr_6 [i_5]))))))) <= (arr_2 [i_5] [i_6 - 1])));
            }
        }
    }
    #pragma endscop
}
