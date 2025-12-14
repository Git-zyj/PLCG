/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (i_1 % 2 == 0) ? ((((((var_12 >> ((((var_7 ? (arr_6 [i_1] [i_2 - 1] [i_1] [i_1]) : var_0)) - 1405899292))))) ? ((max(var_7, var_6))) : ((min((arr_0 [i_0]), var_8)))))) : ((((((var_12 >> ((((((var_7 ? (arr_6 [i_1] [i_2 - 1] [i_1] [i_1]) : var_0)) - 1405899292)) - 1487732383))))) ? ((max(var_7, var_6))) : ((min((arr_0 [i_0]), var_8))))));
                            var_17 = (min(var_17, var_9));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_1] &= (((((arr_6 [i_0] [i_2 + 1] [i_2 - 3] [i_0]) ? var_1 : 235544188)) * ((var_14 ? (arr_6 [i_0] [i_2 - 1] [i_2 + 1] [i_0]) : (arr_6 [i_0] [i_2 - 2] [i_2 - 3] [i_0])))));
                                arr_14 [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = (max(((((arr_12 [i_1]) || var_15))), var_5));
                                arr_15 [i_1] [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] = var_2;
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_7 [i_0]);
                                var_18 = ((128 ? (var_14 & var_14) : ((((var_1 && ((min((arr_0 [i_0]), 2420035409)))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 14;i_5 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_0] = (i_1 % 2 == zero) ? ((((((arr_6 [i_1] [i_1] [i_2] [i_3]) >> (((arr_5 [i_1]) - 15395561515059042818)))) >> (((arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5 - 1] [i_5]) - 48835))))) : ((((((arr_6 [i_1] [i_1] [i_2] [i_3]) >> (((((arr_5 [i_1]) - 15395561515059042818)) - 10724659428678135666)))) >> (((((arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5 - 1] [i_5]) - 48835)) + 37784)))));
                                var_19 = ((arr_6 [i_0] [i_2 + 1] [i_2] [i_2 - 2]) ? (arr_19 [i_2 - 2] [i_2 - 1] [i_0] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 1]) : (arr_19 [i_2 - 3] [i_2 - 3] [i_5] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2]));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_1] [i_5 + 1] = var_6;
                            }
                            for (int i_6 = 1; i_6 < 14;i_6 += 1)
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_3] [i_6] = var_5;
                                var_20 = (arr_12 [i_1]);
                                var_21 = (arr_5 [i_0]);
                                var_22 = 1874931876;
                            }
                            var_23 = var_11;
                            arr_25 [i_0] [i_1] [i_2] = (((((((var_8 ? 2420035425 : (arr_8 [i_1] [i_1] [i_2 - 2] [i_3]))) << ((((var_0 ? var_13 : var_15)) - 83))))) ? (var_7 & 1874931876) : var_10));
                        }
                    }
                }
                arr_26 [i_1] = var_10;
                arr_27 [i_1] = 1874931871;
                var_24 = var_0;
            }
        }
    }
    var_25 = var_14;
    var_26 = var_11;
    #pragma endscop
}
