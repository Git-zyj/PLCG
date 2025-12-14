/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((!((((!var_0) % (var_5 ^ var_13)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [10] [i_1] = ((!(((~(arr_1 [i_0] [i_1]))))));
                                var_19 *= (arr_10 [i_0] [i_4] [0] [i_3] [i_4]);
                                var_20 *= ((~((max(65535, -116)))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0] = (arr_6 [i_0]);
                            }
                        }
                    }
                }
                arr_14 [5] [i_0] = (((var_15 > var_2) > (arr_3 [i_1] [i_1] [i_0])));
                arr_15 [i_0] [i_0] = (i_0 % 2 == 0) ? (((~(((arr_9 [i_0] [i_1] [i_0] [i_1]) << (((((arr_9 [10] [i_1] [i_0] [i_1]) | var_8)) - 1277867245))))))) : (((~(((((arr_9 [i_0] [i_1] [i_0] [i_1]) + 2147483647)) << (((((((((arr_9 [10] [i_1] [i_0] [i_1]) | var_8)) - 1277867245)) + 1277867313)) - 19)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_22 [4] = arr_16 [7];
                arr_23 [i_5] = max((min(((~(arr_17 [i_5]))), ((max(var_12, var_4))))), (((-(((!(arr_19 [i_5]))))))));
                arr_24 [i_6] = ((-(arr_20 [i_6])));
            }
        }
    }
    var_21 = (min(var_21, (((-(var_6 / var_4))))));
    var_22 = var_5;
    #pragma endscop
}
