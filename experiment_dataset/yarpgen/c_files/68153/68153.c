/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_2 ? -1 : -9223372036854775786);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [2] [i_0] = ((((~(max((arr_2 [1]), var_0)))) < ((((((var_3 ? (arr_0 [i_0]) : 3014501895))) + var_3)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_15 = ((((((65535 ? var_6 : var_7)))) ? 65515 : (((!((max(4, (arr_9 [i_0] [i_1])))))))));
                            var_16 = (max(var_16, (((-(max(var_0, (arr_2 [i_1]))))))));
                        }

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_1] [i_5] = ((var_0 ? var_3 : (arr_7 [i_1] [i_1] [i_0])));
                            var_17 += ((max(((65527 ? (arr_8 [i_0] [i_1] [i_3] [i_5]) : var_12)), ((min((arr_4 [i_5] [i_0] [i_0]), 65510))))) + var_9);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_1] = (((-9223372036854775807 - 1) / var_7));
                            arr_24 [i_6] [i_1] [i_1] [i_0] = (((arr_5 [i_2 - 1] [i_1]) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 1])));
                            arr_25 [i_0] [7] [10] [i_1] = (((var_3 < var_3) ? (var_8 & var_11) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_18 = (min(var_18, (((((((min(var_4, var_6))) ? var_5 : ((min(var_12, (arr_14 [i_0] [i_1] [i_2] [i_3])))))) != ((max((min(var_12, 255)), (((arr_16 [1] [10] [i_2] [i_2] [2]) ? var_3 : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3])))))))))));
                        var_19 -= (min(var_6, 65535));
                    }
                }
            }
        }
        var_20 = ((var_9 ? (min(0, (((arr_9 [i_0] [4]) * var_8)))) : (arr_9 [i_0] [10])));
    }
    #pragma endscop
}
