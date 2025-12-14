/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((-(8065211045239679743 / -1))), (((-1382043287 ? -12 : 262143)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (!-262143);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (~12)));
                                var_12 = (15303510971577021598 == -5013258658800583858);
                                var_13 = (((-3299913548791997487 - var_3) / ((((arr_9 [i_1]) ? 2147483647 : (arr_2 [i_2] [i_4]))))));
                                arr_13 [11] [i_3] [i_4] [i_1 - 1] [i_0] = var_0;
                                arr_14 [i_0] [i_1 - 1] [i_4] [8] [i_4] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = (((!var_3) ? (((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]) ? 24 : 0)) : (~759899838)));
                                arr_21 [i_6] [i_5] [i_2] [i_1] [1] = var_7;
                                arr_22 [i_0] [i_1 - 1] [i_2 + 3] [i_2] [5] [i_6] = (((((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_9 : 7)) + 2147483647)) >> (((~985972131) + 985972153))));
                            }
                        }
                    }
                    arr_23 [i_1 - 2] [i_0] |= (((224 == -9075) - (arr_8 [i_2 + 4] [i_1 - 2] [i_0] [i_0])));
                }
            }
        }
    }
    var_14 &= var_5;
    #pragma endscop
}
