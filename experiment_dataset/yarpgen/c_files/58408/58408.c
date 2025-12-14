/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 >> (var_8 - 4071502587)));
    var_15 = var_11;
    var_16 = (-16945 | 362391395);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((((3932575917 ? 14986017246582667315 : (arr_1 [i_0] [i_0])))) ? (((((var_12 ? (arr_1 [i_0] [i_0]) : var_7))) ? (min(-390526520, (arr_0 [i_0]))) : (arr_0 [i_0]))) : 390526521));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (var_11 ? (((-(((arr_7 [i_0] [i_1] [i_2]) ? (arr_3 [i_0]) : var_1))))) : ((min(81, (arr_6 [i_0] [i_2])))));
                    var_18 ^= ((-(max(((-(arr_8 [i_0] [i_0] [i_1] [i_2]))), ((max((arr_2 [i_0] [i_1]), var_7)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_19 = (((arr_8 [i_3] [i_3 + 1] [i_1] [i_1]) ? var_7 : 3932575916));
                        var_20 = ((23346 <= (((!(arr_1 [i_0] [i_0]))))));
                        var_21 ^= (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (((arr_5 [i_1 - 2] [i_1 - 1] [i_0]) ? var_1 : (arr_11 [i_0])));
                        var_22 = ((1 >> ((((((3460726827126884302 ? (-2147483647 - 1) : var_6)) - -2147483633)) + 46))));
                    }
                }
            }
        }
        var_23 -= arr_6 [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_24 ^= (((arr_8 [i_0] [i_4] [i_5] [i_6]) ? (((((arr_8 [i_0] [i_4] [i_5] [i_6]) <= (arr_8 [i_0] [i_0] [i_0] [i_0]))))) : (min(3460726827126884302, 81))));
                        var_25 = var_2;
                        arr_21 [i_0] [i_0] [i_5] [i_0] [i_0] = -3932575917;
                        arr_22 [i_0] [i_4] [i_0] [i_6] = (min(((-var_1 - (var_2 + var_5))), var_9));
                        arr_23 [i_0] [i_5] [i_4] [i_0] = (((3460726827126884317 ? ((min(var_12, 81))) : 1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
