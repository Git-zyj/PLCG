/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((max(var_6, var_10))) ? 799199904 : ((var_11 ? var_14 : var_3)))));
    var_18 = (max(var_18, ((min((max(var_16, var_2)), var_0)))));
    var_19 = (min(((((min(var_2, var_7))) ? (~var_16) : var_2)), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_20 += (((((-1670345415 ? 145 : 1057230012))) ? var_6 : (((((var_2 ? var_2 : var_15))) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (((arr_2 [i_0] [i_0]) ? var_0 : var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_3 - 3] [i_2] [i_1] [i_2] [i_0] = (((((var_16 ? var_14 : (arr_3 [i_1] [i_3 - 1])))) ? ((max(var_4, var_0))) : var_8));
                            arr_12 [i_2] [i_0] = (max(-23024, 1));
                            arr_13 [i_0] [i_2] [i_2] [i_3] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_21 |= ((min(var_7, ((var_1 ? var_11 : 44178)))));
    #pragma endscop
}
