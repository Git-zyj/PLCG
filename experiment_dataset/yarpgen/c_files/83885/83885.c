/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 ^= (((arr_1 [i_2] [i_1]) ? (((((var_7 + (arr_2 [i_2] [i_2 - 2])))) ? (arr_9 [4] [i_1] [2] [i_1]) : var_14)) : (arr_6 [i_0 - 3] [6] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 &= (!29);
                                var_22 = ((-(((var_13 + 1) ? var_8 : ((((arr_3 [i_2]) ? 1 : 65254)))))));
                                arr_15 [i_1] [i_3] [i_3] = var_11;
                                arr_16 [i_3] [i_3] [20] [i_1] [6] [i_3] [i_3 + 1] = 908245074;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, 0));
    var_24 = ((-var_2 ? 16571180852765761146 : var_6));
    #pragma endscop
}
