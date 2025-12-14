/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 = var_1;
                                var_12 = (((arr_6 [i_0] [i_0 - 1]) <= (max(var_9, ((((arr_3 [i_1] [i_1]) < (arr_5 [i_3] [i_2]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_13 = (arr_9 [i_0] [i_1] [i_5] [i_7]);
                                var_14 = (((arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) / (max(((var_1 << (((arr_7 [i_0] [i_1] [i_0] [i_1]) + 32)))), ((max((arr_1 [i_0]), var_7)))))));
                                var_15 = var_4;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((+((((((arr_17 [i_0] [i_1] [i_9]) ? (arr_5 [i_1] [i_1]) : 1))) ? (arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (max(1, (arr_3 [i_8] [i_8]))))))))));

                            for (int i_10 = 0; i_10 < 25;i_10 += 1)
                            {
                                arr_29 [i_0 + 1] [i_1] [i_0 + 1] [i_8] [i_8] [i_10] = (arr_18 [i_0]);
                                var_17 = (max(var_17, (((var_7 + (max(var_6, ((~(arr_22 [i_0]))))))))));
                            }
                            for (int i_11 = 2; i_11 < 24;i_11 += 1)
                            {
                                var_18 = ((((min(((var_5 >> (var_3 - 170))), (max(801272678, 165))))) ? (((min(1, (arr_3 [i_1] [i_9]))) & (((~(arr_8 [i_0] [i_1])))))) : ((((!(((1 ? 128 : 1)))))))));
                                arr_32 [i_1] = ((((max(179, 0))) - (((arr_20 [i_0] [i_1] [i_8] [i_11]) - (arr_20 [i_11 - 2] [i_9] [i_0 - 1] [i_0 - 1])))));
                            }
                            var_19 = (min(var_19, var_1));
                            arr_33 [i_0] [i_0] [i_8] [i_9] [i_9] [i_1] = max((!var_4), ((2253164739 ? (((((arr_12 [i_0] [i_1] [i_8] [i_8] [i_1]) != 1)))) : (arr_31 [i_9] [i_9] [i_0 - 1] [i_0 - 1]))));
                        }
                    }
                }
                arr_34 [i_1] [i_1] = (!1);
            }
        }
    }
    #pragma endscop
}
