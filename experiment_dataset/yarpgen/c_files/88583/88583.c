/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((9223372036854775797 ? 108 : -109)))) ? var_0 : ((max(108, -105)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((arr_7 [i_2]) != 65520)))));
                    arr_9 [i_0] [i_0] [i_0] = (min((arr_6 [i_2 - 2] [1] [i_2 - 2]), (((((arr_6 [0] [i_1] [i_0]) ? 4294967292 : var_3)) >> (((max((arr_2 [11]), var_7)) - 1820571036))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (arr_10 [i_2] [10] [11]);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_13 [i_0] [i_0] [i_1] [8] [i_2] [i_3];
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_20 = (((((arr_17 [5] [i_2 - 2]) ? (((arr_13 [i_0] [i_0] [1] [i_0] [i_0] [i_0]) + var_16)) : (~var_4))) <= ((max(226, -var_0)))));
                        arr_18 [6] [i_0] [i_1] [i_0] [i_2] [11] = (max((((!((((arr_6 [2] [i_1] [i_2 - 3]) ? (arr_8 [i_0] [i_2] [i_4]) : -109)))))), ((min((arr_0 [4]), (arr_2 [i_0]))))));
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_21 = (min((arr_1 [i_0]), (((var_3 != 39) ^ (max((arr_17 [i_1] [i_5]), (arr_15 [i_0] [i_1] [i_2] [i_5])))))));
                            arr_23 [i_0] = (arr_22 [i_6 + 2] [i_6] [2] [i_6] [4] [i_6] [i_6]);
                            var_22 += var_5;
                            var_23 = (min(var_23, var_16));
                        }
                        var_24 = (max(var_24, var_4));
                    }
                }
            }
        }
    }
    var_25 -= var_1;
    var_26 = var_9;
    #pragma endscop
}
