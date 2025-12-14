/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_19 ? (((var_16 ? var_5 : var_12))) : var_17))) ? (((min(var_16, var_9)))) : var_16));
    var_21 = (((((max(var_0, var_10)) ? ((max(var_7, var_6))) : (var_17 ^ var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((var_15 ? (var_18 - var_17) : (((var_6 << (var_10 + 125))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [0] [i_3] [i_4] = ((((var_12 ? var_3 : var_5)) - ((max(var_18, var_9)))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] |= ((max(((var_10 ? var_6 : var_1)), -var_12)));
                            }
                        }
                    }
                }
                arr_16 [i_1] = var_17;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_25 [i_6] = min(((min(var_10, var_13))), (1 + 0));
                    arr_26 [i_5] [i_5] [i_6] [i_7] = (((var_9 % var_8) | ((((var_2 - var_3) == -72)))));
                    arr_27 [21] [i_6] [i_6] [i_7] |= (max((((!var_16) ^ var_14)), var_19));
                    arr_28 [i_5] [i_5] [i_7] [i_7] = (-(((var_12 - var_14) ? (max(var_3, var_11)) : (((max(var_1, var_3)))))));
                }
            }
        }
    }
    var_22 = (((((-((var_12 ? var_7 : var_5))))) ? var_10 : ((min(var_15, var_6)))));
    #pragma endscop
}
