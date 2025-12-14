/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (((arr_1 [i_0]) & (arr_4 [i_0 - 1] [i_0 + 3] [i_0 + 1])));
                var_11 = (min(1, -5373));
                var_12 = (26407 % 1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 *= (arr_5 [7] [i_4]);
                                var_14 = (max(var_14, (arr_7 [4] [4])));
                                arr_12 [i_0] [i_3] [i_4] [i_2] [i_4] [i_0] = (((~var_2) ? ((7 % (arr_6 [i_0 + 2] [i_0 + 1]))) : 3410915599));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_0] = (max(0, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((65535 ? 5017695750126102682 : -5017695750126102661));
    var_16 = var_5;
    var_17 = var_5;
    var_18 = (((1 % 1) ? var_1 : var_6));
    #pragma endscop
}
