/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (var_9 ? ((((1 >> (var_14 + 1433326596))) << (((arr_2 [i_0 - 1]) - 1686820246)))) : (arr_2 [i_0]));
        arr_4 [i_0] [i_0] = (min(((((var_1 & (-2147483647 - 1))) | ((~(arr_2 [i_0]))))), (var_16 | 0)));
        var_19 = (min(var_19, (((((!((max(var_5, var_9)))))) <= ((((max(1, (arr_1 [i_0])))) ? (arr_2 [i_0 + 1]) : (((arr_1 [i_0]) ? 1 : 275469679))))))));
    }
    var_20 = ((((((var_13 * var_6) + var_8))) / var_2));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            {
                arr_11 [5] [i_2] [i_2] = var_16;
                var_21 = (max(var_21, (((((arr_6 [i_2 - 2] [i_1]) && (arr_6 [i_2 - 2] [i_2]))) || ((((arr_6 [i_2 + 2] [i_2]) ? (arr_6 [i_2 - 2] [i_2]) : (arr_6 [i_2 - 2] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_20 [i_1] [i_3] [i_3] [i_4] [i_4] = (1 <= var_7);
                            arr_21 [i_3] [i_4] = var_7;
                            var_22 = ((((max(1, var_17))) * (((arr_0 [i_2 - 2] [i_2 - 2]) ? var_15 : (arr_0 [i_2 + 1] [i_2 + 2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
