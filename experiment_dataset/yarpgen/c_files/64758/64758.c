/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_7 ? ((((var_2 < var_9) - var_7))) : (536870912 - 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((((!(arr_2 [i_0])))) * var_5));
                arr_5 [i_1] [0] [i_1] = ((((((max(var_6, var_5))) >> ((var_5 >> (var_2 + 1545501226)))))) ? (arr_3 [i_0] [6]) : -var_3);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = -var_2;
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_2 + 1]) + var_7);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_11 |= (-31 + -31);
                        arr_15 [1] = (arr_8 [0] [i_2 + 1] [0] [i_2 + 1]);

                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_12 -= (((arr_14 [i_5] [i_5 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_1]) ? var_7 : (arr_14 [i_5] [i_5 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [16])));
                            arr_18 [i_0] [i_1] [i_0] [i_4] [i_5 - 2] = (((((arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5 + 1]) + var_4)) >= var_0));
                            arr_19 [1] [i_0] = ((-31 ? 56357 : 1247901943));
                        }
                        arr_20 [i_0] = (((arr_17 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 2]) ? var_9 : var_6));
                        var_13 = (((arr_1 [i_2 - 2]) - (arr_1 [i_2 - 2])));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = (!var_8);
                        var_14 = (((arr_2 [i_2 - 2]) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 - 1])));
                    }
                    arr_25 [i_0] [i_1] [i_2 + 1] = ((var_8 ? (arr_16 [i_2 + 1] [i_1] [i_1] [i_0] [i_0]) : (arr_1 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
