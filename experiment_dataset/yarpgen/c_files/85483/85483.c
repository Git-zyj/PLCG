/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 = ((-(max(var_1, (arr_12 [i_3 + 3] [i_2 - 1] [i_0 + 1] [9])))));
                            var_17 = (((1547053134 == 243210054) ? (arr_7 [i_3] [i_1] [i_3 - 2] [i_3]) : ((~(arr_7 [i_0] [i_1] [i_3 + 1] [i_3 + 1])))));
                            var_18 = (min(var_18, (((!(var_13 >= var_3))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((((arr_0 [i_5 - 1]) ? (arr_7 [i_5 - 3] [i_5 + 1] [i_0 - 1] [i_0]) : (arr_3 [i_0] [i_0 + 3] [i_0])))) ? (arr_8 [i_0 + 1]) : ((-95 ? ((~(arr_3 [i_5 + 1] [i_4 + 4] [i_1]))) : (min((arr_17 [i_0] [i_1] [18]), 8191)))))))));
                            arr_19 [i_5] = var_5;
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_21 = ((var_5 && ((((arr_24 [i_6] [i_6 + 1]) ^ (arr_24 [i_6 + 1] [i_6 + 1]))))));
                arr_27 [i_6] = var_12;
            }
        }
    }
    var_22 = ((~(~var_9)));
    var_23 |= var_14;
    #pragma endscop
}
