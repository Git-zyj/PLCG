/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1 + 1] = ((var_17 ? ((((((arr_3 [i_2 - 2]) < (arr_9 [i_1] [i_1] [i_1])))) >> (var_5 - 17093440095346940187))) : ((((((var_7 > (arr_4 [i_0] [i_0] [i_1 - 1])))) <= (((var_1 != (arr_0 [i_2 - 2] [i_1])))))))));
                    arr_11 [i_0] [i_0] [7] [i_2 - 1] = (var_2 <= 0);
                    arr_12 [i_0] [i_0] = (0 && var_2);
                    arr_13 [i_2 - 2] [i_0] [i_0] &= var_5;
                    arr_14 [5] [5] [5] [5] = (((!90) ? (min((((arr_7 [i_0] [i_1] [i_2 - 1]) ? var_7 : 281474976645120)), var_6)) : (((((arr_3 [i_2]) || (var_14 ^ var_8)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            {
                arr_20 [i_3] = (((805306368 ^ var_14) ^ ((var_17 ? ((var_12 ? 11331586607857772183 : var_2)) : var_5))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_27 [2] [i_4] [i_5] [i_6] = (((arr_21 [7] [i_4] [i_3]) >= (((arr_15 [i_4 + 2] [i_3]) ? (arr_15 [i_4 + 2] [i_4 - 1]) : var_14))));
                            var_18 = (arr_6 [i_3] [i_4] [i_3] [i_6]);
                            var_19 = (min(var_19, (((255850730 + ((3412447705 ? 63 : 1408596405)))))));
                            var_20 |= (max((((arr_5 [i_3] [i_5]) ? 4294705152 : (arr_17 [i_6]))), (((var_11 < ((var_2 ? var_10 : var_10)))))));
                        }
                    }
                }
                arr_28 [1] [i_4 - 1] = (max(var_4, (((min((arr_26 [i_3] [i_3] [i_4] [i_4] [i_4]), var_13)) + (((var_16 ? (arr_7 [i_3] [i_4] [i_4]) : var_16)))))));
                arr_29 [i_3] = var_13;
            }
        }
    }
    var_21 = var_11;
    var_22 = 20;
    #pragma endscop
}
