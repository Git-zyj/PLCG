/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((+((var_1 ? (!var_16) : ((-2101347974 ? var_8 : var_14))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((21935 == ((((arr_2 [i_0] [i_0]) > (arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (min((((22999 > ((21935 ? 4537 : -21405))))), var_4));
                    var_22 = (max(var_22, 63));
                    arr_11 [i_0] = (((((arr_8 [i_0]) > (arr_1 [i_2] [i_2]))) ? ((min(-21939, -6860))) : (((arr_2 [i_2] [i_2]) ? 4554 : 4537))));
                    var_23 = (min(((((arr_9 [3] [3] [12] [12]) == (var_17 / var_12)))), (max(431320303, 2137577547))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_18 [i_0] [i_0] [i_0] = (max(var_2, ((-(arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 1])))));
                    var_24 += (min(((var_18 - (arr_3 [i_4] [i_4]))), ((((((-1 - (arr_14 [6] [6])))) ? var_7 : (1047342128 / 1920))))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_25 = (max((((((arr_4 [i_0] [i_0]) ^ (arr_9 [i_0] [i_0] [11] [i_0]))) - ((431320283 ? -4510 : var_2)))), ((((arr_4 [i_0] [i_0]) * var_8)))));
                        var_26 = (-5024 <= (var_9 & var_17));
                        arr_21 [i_4] [i_4] [i_0] [i_0] |= ((-16383 ? 2147483632 : ((431320276 ? 3080799356 : 30328))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_25 [i_0] = (31 ? var_9 : -21939);
                        var_27 = (((min(((max((arr_15 [i_3] [7] [i_3 - 2]), var_13))), -14)) <= ((~(arr_1 [i_4] [i_4])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [0] = ((((var_9 - (arr_9 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1]))) ^ (min(((min((arr_0 [i_0]), var_11))), (((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : var_19))))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = (((((arr_9 [i_0] [i_0] [i_0] [i_0]) * ((max((arr_24 [i_0] [5] [i_0] [4]), -591))))) == (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (var_13 ^ var_3)))));
                    }
                    var_28 = (-16384 ^ (((arr_4 [i_0] [i_0]) ? (((arr_16 [i_3] [i_3 - 3] [i_3] [i_3]) ? (arr_23 [i_0]) : var_0)) : (!-32767))));
                }
            }
        }
    }
    var_29 = var_12;
    var_30 |= var_5;
    #pragma endscop
}
