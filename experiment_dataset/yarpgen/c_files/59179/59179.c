/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = var_8;
                                var_16 = (var_8 ? (((675559805 & var_3) ? 1567663469 : var_10)) : (((~var_14) | (min(var_12, 1801652584)))));
                                var_17 = (min((((arr_9 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3]) - 4294967295)), (((-(arr_9 [16] [i_0 + 2] [i_0 + 1] [i_0 - 1]))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (max((518982595 <= var_8), -var_14));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_6] [i_5] [i_1] [i_0] = ((((((123 | var_4) & (((!(arr_9 [i_0] [20] [i_0] [2]))))))) < ((var_12 % (((arr_20 [i_0] [i_5] [i_6]) - 3775984696))))));
                                arr_23 [i_5] [i_5] = (112 ? (max(((var_0 ? (arr_5 [i_7]) : 518982603)), (arr_1 [8]))) : var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_6;
    var_19 = ((((((((var_9 ? var_9 : 4294967295))) ? (var_5 ^ var_13) : var_14))) ? (max(518982600, (min(3775984707, var_7)))) : (((((var_2 ^ var_7) == (~var_8)))))));
    #pragma endscop
}
