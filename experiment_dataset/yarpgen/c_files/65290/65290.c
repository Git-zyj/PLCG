/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_20 += (~var_1);
                            var_21 = var_5;
                        }
                    }
                }
                arr_13 [i_0] = (max((min(-var_4, var_18)), (min(var_5, ((min(1, 0)))))));
            }
        }
    }
    var_22 = var_11;
    var_23 &= var_18;
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] [i_6] [i_5] = (min((arr_19 [7] [i_4] [i_6] [i_4]), (min(var_12, (arr_21 [i_6 - 1] [i_6] [1] [i_6] [i_6 - 1] [i_6 - 1])))));
                                var_24 &= var_13;
                            }
                        }
                    }
                }
                var_25 = (arr_22 [1] [11] [i_5] [i_5]);
                arr_26 [i_5] = (((arr_17 [i_5] [i_4] [i_4]) ? ((((((arr_15 [i_4]) % var_10))) ? ((min((arr_23 [i_4] [1] [1] [1] [5] [1]), (arr_15 [i_4])))) : ((max(var_1, var_18))))) : var_8));
            }
        }
    }
    #pragma endscop
}
