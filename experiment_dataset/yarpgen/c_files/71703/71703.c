/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 += -var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [9] = (((~var_5) != (((arr_8 [14] [14] [14] [i_2]) + 200))));
                                arr_17 [i_3] [i_1] [i_1] [i_1] [i_4] |= ((!(((max(25206, 2147483520)) > (arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_1 + 2])))));
                                var_19 &= ((25206 > (~25206)));
                                var_20 = (min(var_20, (((-((2017606356 ? (arr_5 [i_1 - 1] [i_3] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_3] [i_2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, -4885688362775611133));
                                var_22 += ((!((min((arr_1 [i_0 - 1] [i_1 + 2]), var_13)))));
                            }
                        }
                    }
                    var_23 = (~24437);
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
