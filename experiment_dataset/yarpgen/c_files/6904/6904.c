/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = (!391943114);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((max((max(var_4, 3903024195)), var_2))) ? var_1 : (max(391943124, var_0))));
                arr_6 [i_0] [i_0] = var_15;
                arr_7 [i_0] [i_0] = max(((((arr_0 [i_1]) != 3903024191))), (min(var_0, (arr_0 [i_0]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_19 |= (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                        arr_13 [i_3] [i_0] = -3903024206;
                        var_20 |= (arr_4 [i_3] [i_3 - 4]);
                        arr_14 [i_0] = (((((var_7 ? var_9 : var_2))) ? var_15 : var_4));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_21 = (((var_3 ? var_9 : -3749087136077834871)) >> (((arr_8 [i_0] [i_0] [i_0] [i_0]) + 7125742716816834276)));
                        var_22 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                        var_23 = (min(var_23, ((var_5 ? (arr_9 [i_0]) : var_12))));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_2] [i_5] |= ((391943107 ? var_14 : (((arr_18 [i_1] [i_2] [i_5]) ? var_8 : 2074801215))));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = -4502209751601707141;
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_24 = (((arr_23 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 1]) ? var_15 : (arr_4 [i_6 - 2] [i_6 + 3])));
                        var_25 = (min(var_25, ((((((var_6 ? (arr_10 [i_0] [i_0] [i_0]) : 56))) | (arr_15 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 2]))))));
                        var_26 = (max(var_26, -var_3));
                        var_27 = var_5;
                    }
                    arr_24 [i_2] [i_2] [i_2] [i_2] = (!var_2);
                }
            }
        }
    }
    #pragma endscop
}
