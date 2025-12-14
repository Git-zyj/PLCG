/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = -var_19;
                                var_22 |= ((!(((-(arr_8 [i_0] [i_0] [4] [i_4 + 1]))))));
                                var_23 = ((-(min(var_6, ((11247986362949596610 ? 11 : (arr_11 [i_0] [i_1] [i_1] [i_3] [i_1])))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_24 = ((-(arr_18 [i_0] [i_1] [i_5] [i_6] [i_6])));
                                var_25 = 47692;
                            }
                        }
                    }
                }
                var_26 = ((min(var_13, (!47703))));
            }
        }
    }
    var_27 = var_5;
    var_28 = (((((var_2 + (47665 + var_13)))) / (var_19 & var_1)));
    #pragma endscop
}
