/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(-var_6, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (arr_11 [i_0] [i_0] [i_0] [i_3] [i_0])));
                                arr_16 [i_2] [8] = (arr_13 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2]);
                            }
                        }
                    }
                }
                var_15 = arr_5 [i_0] [i_0] [i_1];
                var_16 = ((var_12 >= (~var_0)));
            }
        }
    }
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_10));
                                var_19 = ((((min((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_23 [i_5] [i_9] [i_7] [i_7 + 1])))) ? (~var_9) : ((+(((arr_27 [i_5] [i_6] [i_7 + 3] [i_8] [i_9]) - (arr_24 [i_5] [i_6 + 1] [i_5] [i_9])))))));
                            }
                        }
                    }
                    var_20 = (max(var_20, ((max(var_6, (((arr_23 [i_5] [i_5] [i_5] [i_5]) ? (((-(arr_17 [i_5] [i_6])))) : (arr_22 [i_5] [i_6] [i_7]))))))));
                    arr_29 [i_5] [i_7 - 2] [i_7] = ((~(min(((-71 ? (arr_26 [i_5] [i_6 + 2] [i_6 + 2] [i_5] [i_5] [16]) : var_7)), ((((arr_19 [i_7]) ? 2557025137 : (arr_27 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
