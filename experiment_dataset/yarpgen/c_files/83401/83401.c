/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_4;
                arr_7 [i_0] [i_1] [i_0] = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_23 [i_2 + 4] [8] [i_4] [i_5] [12] &= (arr_21 [0] [11] [i_3 - 2] [i_4] [0] [i_6]);
                                var_19 = (arr_3 [i_2] [i_2 + 4] [i_2 + 4]);
                                arr_24 [i_2] [6] [i_3] [i_4 - 1] [i_5] [i_5] [i_6] = (((max((331161075070730130 <= var_2), 1)) ? ((((((arr_13 [i_3] [i_6]) <= var_1)) ? (arr_13 [i_2 - 2] [i_5 + 2]) : (!331161075070730152)))) : 8589934591));
                                arr_25 [i_2] [i_5] [12] [i_5] [i_6] [i_2] = 239;
                                arr_26 [i_2] [11] [i_2] [i_5] [i_2] = 2138541560;
                            }
                        }
                    }
                }
                arr_27 [i_2] [7] = ((var_15 ^ (arr_14 [i_3] [i_3] [i_3 + 1])));
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
