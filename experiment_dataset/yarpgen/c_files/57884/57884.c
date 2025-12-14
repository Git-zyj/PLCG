/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (((((((max(var_14, var_12)) <= (((arr_2 [1]) >> (((arr_4 [i_0] [2] [i_2]) - 724074172)))))))) * (arr_7 [i_1] [8])));
                    var_17 = ((~(((arr_4 [i_2] [i_1] [1]) ? ((~(arr_3 [i_2]))) : (arr_3 [i_1])))));
                    var_18 = ((~((~((511 >> (((arr_5 [i_0] [3] [10]) - 3571196661))))))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [9] = ((+(((arr_9 [4] [4] [i_3 - 1] [i_3 - 2]) + (arr_9 [i_0] [2] [i_3 - 1] [11])))));
                        var_19 = (max((((~57) ? (arr_6 [6] [i_3 - 2] [i_3 - 2] [i_3 - 1]) : (arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1] [13]))), ((((~(arr_1 [6] [1])))))));
                        arr_11 [8] [i_1] [0] = (arr_9 [4] [2] [6] [1]);
                        var_20 -= (((arr_1 [i_2] [9]) + ((~(max((arr_5 [i_0] [i_2] [1]), (-9223372036854775807 - 1)))))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [10] [7] = ((((min((arr_3 [i_4]), (arr_3 [i_0])))) ? ((var_4 ? (arr_3 [i_2]) : (arr_3 [i_0]))) : (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [0])))));
                        var_21 = (14620 % var_11);
                    }
                }
            }
        }
    }
    var_22 = var_12;
    var_23 = (var_15 / var_3);
    #pragma endscop
}
