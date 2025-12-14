/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((var_8 ? var_5 : ((var_1 ? var_5 : var_7))))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [15] = (((((-(arr_0 [i_0])))) <= ((max(var_1, var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((((((((arr_4 [15] [3] [i_2]) % var_6)) + ((max(var_0, var_2)))))) ? ((var_5 + ((((!(arr_11 [i_1]))))))) : (((var_5 <= var_0) / (((arr_5 [i_0] [i_1] [i_0]) - var_2))))))));
                                var_12 += ((11288 ? 13905 : ((-13896 ? 13932 : 65535))));
                                arr_15 [i_0] [i_0] &= max((arr_14 [i_3] [i_4 - 1] [i_4] [i_4 - 1] [i_4]), ((~(arr_14 [i_1] [i_4 - 1] [i_4] [i_4 - 1] [i_4]))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((min(var_6, (min(var_6, var_4)))), ((((65534 ? var_0 : var_0))))));
                            }
                        }
                    }
                }
                arr_17 [23] [23] [i_0] = 13910;

                for (int i_5 = 4; i_5 < 24;i_5 += 1)
                {
                    var_13 = (min(var_13, ((((min((arr_19 [i_1] [i_5 - 4] [i_5 - 3] [i_5]), (var_6 <= var_1))) % ((((((var_8 ? var_2 : var_0))) ? (arr_4 [i_5 - 2] [i_5] [i_5 - 2]) : (((max(var_4, 13905))))))))))));
                    var_14 *= ((-(((min((arr_5 [i_0] [i_0] [i_0]), var_2)) & var_3))));
                    arr_21 [i_5 - 1] [i_1] [i_0] = var_5;
                    var_15 = var_6;
                    var_16 ^= (((!((max(var_5, var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
