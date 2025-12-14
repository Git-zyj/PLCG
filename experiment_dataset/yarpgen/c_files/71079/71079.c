/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1 - 1] = var_16;
                arr_8 [i_1] [i_1] [i_0] = (((arr_1 [i_0 + 2]) ? ((-(arr_5 [i_0 + 2] [i_1 + 1]))) : (min((arr_5 [i_0 + 1] [i_1 - 1]), (arr_5 [i_0 + 3] [i_1 + 1])))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = var_15;
                    var_21 = (min((((-((var_19 + (-32767 - 1)))))), ((1905936777 ? 4611686018427387903 : -1905936761))));
                    arr_11 [i_1] = (((arr_2 [i_0 + 1]) ? ((min(((max((arr_9 [i_0 + 1] [i_1] [i_1 + 1] [i_2]), (arr_9 [1] [i_0 + 3] [i_1 + 1] [i_2])))), (min((arr_3 [i_0] [i_1]), -27384))))) : ((-(max(-857797602, (arr_3 [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                                var_22 = (min(((!(arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_1] [6]))), (((arr_4 [i_0 + 1] [i_1]) && (arr_4 [i_1] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_23 [i_0 - 1] [i_2] [i_5] [i_1] = -5756;
                                arr_24 [i_6] [i_1] [i_6] [i_6] [i_6] [i_6] [i_6] = 27385;
                                var_23 = (((min(15, 857797605)) + (((max(var_0, (arr_0 [i_0 - 1])))))));
                                arr_25 [i_1] = ((~(arr_10 [i_5] [i_1] [i_5 - 1])));
                            }
                        }
                    }
                }
                arr_26 [i_1] [i_1] = ((((~((var_0 ? var_5 : (arr_17 [i_0] [i_1 - 1] [i_1 + 1]))))) + (((min(1, 49))))));
            }
        }
    }
    var_24 = ((3825307312 && -2147483643) <= var_11);
    var_25 = (((((-(!var_18)))) ? var_0 : var_0));
    #pragma endscop
}
