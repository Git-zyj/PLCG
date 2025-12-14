/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = (min((max(((var_10 ? var_0 : (arr_4 [i_1] [i_0] [i_1]))), ((((arr_1 [i_0]) ? (arr_12 [i_2] [i_1] [i_0] [i_3 + 2] [i_0 - 1]) : var_12))))), (((((arr_1 [i_0 - 1]) ? var_12 : (arr_10 [i_0] [i_0] [i_2] [i_1] [21] [i_2] [i_0 - 1])))))));
                                var_14 = (((((-127 - 1) + 2147483647)) << 0));
                                var_15 ^= (min((((~(arr_1 [i_0])))), (((72 ? var_13 : (arr_0 [i_0] [18]))))));
                                var_16 = (max(var_16, var_0));
                            }
                        }
                    }
                    var_17 = ((-(((!(~var_0))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((((arr_11 [i_0 - 1] [i_1] [i_0] [i_5] [i_1]) ? var_10 : ((((arr_0 [i_0] [i_5]) <= var_4)))))) - -var_4))));
                                var_19 = (max(13, (((arr_15 [i_0 - 1] [i_0]) & -115))));
                                var_20 -= (max((arr_16 [12] [i_1]), ((-var_4 ? (arr_10 [i_6] [i_5] [i_5] [i_2] [i_5] [i_5] [i_0]) : (((529959440 ? 23 : (arr_0 [20] [i_5]))))))));
                                arr_18 [i_0] [i_5] [i_2] [i_1] [i_0] = (arr_6 [i_5] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_21 = (min(var_21, (((!(arr_3 [i_0] [i_0] [0]))))));
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
