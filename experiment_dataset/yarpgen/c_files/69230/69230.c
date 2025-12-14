/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~(~var_15)))) ? (!var_9) : (min(((min(var_8, var_2))), var_7))));
    var_20 = (min((max((min(var_14, var_17)), (!var_14))), (max((min(var_7, var_16)), -var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 ^= (arr_1 [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 ^= (((arr_1 [2]) / (arr_4 [i_0] [i_1] [i_2])));
                        var_23 = (max(var_23, ((((arr_6 [i_0] [i_1] [i_0] [i_0]) / (((var_15 + 9223372036854775807) >> (var_5 - 6924656944166024670))))))));
                        arr_9 [i_0] [i_2] [i_0] [i_0] = (!var_15);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_24 = max((min((((var_5 == (arr_3 [i_1] [i_4])))), (arr_5 [i_1]))), ((-(arr_5 [i_0]))));
                        arr_13 [i_2] [2] [2] [i_1] = (arr_10 [i_2] [i_2]);
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_2] [i_2] [i_0] = (((((arr_15 [i_2]) ? var_13 : ((((((arr_12 [i_0] [4] [i_0] [i_2] [i_0]) + 2147483647)) << (var_8 - 1980453669)))))) < (arr_15 [i_1])));
                        arr_19 [i_2] [i_2] = ((-(max((arr_16 [i_0] [i_1] [13] [7] [i_0]), (max((arr_1 [i_2]), (arr_2 [i_1] [10])))))));
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, var_5));
                        arr_23 [i_2] [i_0] [i_2] = ((((((arr_15 [1]) ? (arr_3 [i_0] [i_6]) : (arr_15 [i_1]))) / ((-(arr_10 [i_0] [i_2]))))));
                    }
                    var_26 += (((max(var_17, var_6))));
                    var_27 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
