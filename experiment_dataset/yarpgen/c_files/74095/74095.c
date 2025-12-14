/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_11 / var_6) != 4217795917));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 += min(65535, (((arr_5 [i_0] [14] [i_0]) | (max(var_10, var_7)))));
                arr_7 [i_0] = (min(((((var_7 & 11720) ? ((var_8 ? 134217727 : var_5)) : var_4))), 4217795918));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_5] [i_4] [i_2] = (((arr_15 [i_2] [i_3] [i_4] [i_5] [i_4]) ? ((min(17138, (min(var_1, (-32767 - 1)))))) : (min(18, var_11))));
                                arr_21 [i_2] [i_2] [17] [i_2] = (arr_15 [i_6] [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1]);
                                arr_22 [i_2] = -var_2;
                            }
                        }
                    }
                }
                var_16 = (max(63, (max((arr_19 [i_2 - 2]), -1))));
                var_17 = ((((((arr_11 [i_2] [i_2 - 1] [i_2 + 1]) << (((arr_11 [i_2] [i_2 - 1] [i_2 + 1]) - 1494676029))))) ? (arr_11 [i_2] [i_2 - 1] [i_2 + 1]) : ((var_2 * (arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1])))));
                arr_23 [i_2] = (arr_9 [i_2 + 1] [i_2 + 1]);
            }
        }
    }
    #pragma endscop
}
