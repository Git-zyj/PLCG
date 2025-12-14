/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = ((var_5 ? ((var_11 ? var_12 : (((1 ? var_8 : var_11))))) : -var_9));
    var_21 ^= ((((((var_2 || ((min(8464730395273330348, var_0))))))) > (min(var_9, ((var_14 ? var_7 : 116))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3 + 2] [i_4] = max((((arr_13 [i_0] [i_0] [10] [i_0] [i_3]) ? (max(var_6, var_15)) : 28672)), ((max(-23731, (((arr_8 [i_0] [i_1] [4] [i_1]) ? var_13 : 1))))));
                                var_23 ^= ((((min(((8464730395273330338 ? 9982013678436221258 : 9223372036854775807)), var_7))) ? ((var_1 ? (arr_5 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3]) : var_17)) : var_17));
                                var_24 = (min(var_24, 853292972217812033));
                                var_25 -= -1223883113;
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_2] [i_2] = var_7;
                    var_26 -= ((~(~8464730395273330344)));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_27 = (-2147483647 - 1);
                            var_28 = (min(var_28, (arr_9 [i_6] [i_5] [i_0] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_22 [3] [i_1] [i_2] [i_5] [i_7] [11] = (~8464730395273330377);
                            var_29 = (min(var_29, (arr_10 [4] [9] [0] [i_5] [i_7])));
                        }
                        arr_23 [i_1] [i_1] [i_1] [i_1] = (min(((max((min(var_18, var_1)), ((min((arr_12 [2] [i_1] [i_2] [i_1] [i_0]), var_13)))))), (max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_5]), (arr_10 [i_0] [i_1] [i_2] [i_5] [7])))));
                    }
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        var_30 -= ((+((((arr_11 [i_0] [i_0] [i_8 - 4] [i_8] [i_2] [i_0]) != var_5)))));
                        var_31 = (min(var_11, var_15));
                        var_32 = ((((!((max((arr_10 [i_0] [i_1] [i_2] [i_8 - 1] [0]), var_3))))) ? (((var_15 / var_17) ? ((1 ? 8464730395273330321 : 125)) : ((max(var_12, var_16))))) : ((max(502664402665176447, 65535)))));
                        var_33 ^= var_3;
                        arr_27 [i_1] [i_1] [7] [i_1] [i_1] = (arr_17 [i_2] [i_1]);
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_32 [i_1] [i_1] [i_2] [i_2] = min((((~((var_0 ? var_11 : var_1))))), ((~((853292972217812052 ? var_8 : (arr_19 [i_1] [i_2]))))));
                        var_34 = (max(var_34, ((min(65522, 1223883106)))));
                        arr_33 [i_0] [0] [i_1] [i_1] = ((-(max(var_15, (arr_24 [i_2] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
