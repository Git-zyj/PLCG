/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (max(var_13, var_8));
        var_14 = (((arr_0 [i_0] [i_0]) == 8388608));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = (((!var_5) ? (arr_3 [i_1 + 4]) : (((arr_4 [i_1 + 4] [i_1 - 1]) ? (arr_4 [i_1 + 3] [i_1 + 3]) : (arr_3 [i_1 - 1])))));
        var_15 = (arr_4 [i_1] [i_1]);
    }
    var_16 = ((-(((!var_7) ? (var_7 >= var_8) : var_5))));
    var_17 = ((var_8 ? var_1 : ((((var_4 && (var_7 ^ var_7)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_18 [i_4] = (arr_1 [i_5]);
                            arr_19 [i_2] [3] [i_4] [i_5] = -var_7;
                        }
                    }
                }
                arr_20 [i_3] = -var_4;
            }
        }
    }
    var_18 |= ((var_12 && (var_9 + var_9)));
    #pragma endscop
}
