/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_12 || ((((var_11 <= var_11) ? var_1 : (((var_2 + 2147483647) >> var_11))))))))));
    var_14 = ((var_12 ^ (max(2215199421138128734, (min(var_6, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2 - 2] [i_3] [8] = ((((arr_4 [i_0] [i_1] [6] [i_3]) ? (((~(arr_9 [i_4] [i_3] [i_2] [i_1])))) : (((((arr_4 [i_0] [i_1] [i_2] [i_2]) + 9223372036854775807)) >> (((arr_5 [i_1] [i_2] [i_3] [i_4]) - 147)))))));
                                var_15 = arr_1 [i_2];
                                var_16 = ((~(((var_11 / var_7) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0 + 1] [i_2 - 1] [i_2 - 1]) : (-30 >= 2147481600)))));
                            }
                        }
                    }
                }
                var_17 = (((((arr_2 [i_0 - 1] [i_0 - 2]) ? (arr_5 [i_0] [18] [i_0] [i_0]) : ((var_6 ? (arr_10 [i_0 + 1] [i_1] [4] [i_1] [17] [i_1] [i_0]) : (arr_6 [16]))))) > (((~var_10) ? (arr_9 [i_1] [i_1] [i_0] [i_1]) : (arr_5 [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_18 = (max(var_18, var_9));
    var_19 = ((var_12 < (((~((max(var_10, var_11))))))));
    #pragma endscop
}
