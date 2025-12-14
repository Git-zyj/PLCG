/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+(((13336487912937739429 >= 61325) ? var_5 : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = max((arr_3 [i_0] [i_1]), (~var_10));
                arr_5 [i_1] [i_0] = (((-(min(var_0, (arr_3 [i_0] [i_1]))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] = (max((((255 / 1) ? ((var_14 / (arr_0 [i_0]))) : (arr_2 [i_2] [i_0] [i_3 + 2]))), ((((arr_3 [i_1] [i_1]) * -var_13)))));
                        var_17 = (((((((max(0, 255))) * ((min(var_11, (arr_7 [i_0] [i_0]))))))) ? ((min((((arr_3 [i_0] [i_3]) + var_11)), (((var_15 ? (arr_10 [i_0] [i_1] [i_2]) : 8353)))))) : ((var_4 ? var_2 : (var_6 && var_10)))));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_14 [16] [16] |= (((((!(arr_13 [16] [16] [4] [i_4 + 1] [8])))) + (((max((arr_7 [i_0] [10]), 255))))));
                        var_18 |= ((((max(((var_12 ? 255 : var_0)), -255))) ? -var_15 : ((65527 ? (arr_13 [i_0] [i_1] [i_2] [i_0] [i_4 - 1]) : 255))));
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 = (i_0 % 2 == zero) ? (((((((arr_10 [i_0] [i_1] [i_2]) ? 73 : var_8)) / ((25 << (((arr_9 [i_0]) - 74)))))))) : (((((((arr_10 [i_0] [i_1] [i_2]) ? 73 : var_8)) / ((25 << (((((arr_9 [i_0]) - 74)) + 49))))))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_20 |= ((((((0 ? var_12 : (arr_1 [i_1])))) > (min(var_2, 255)))));
                            arr_19 [i_0] [i_1] [i_0] [i_5] [i_6] [i_6] = (((!255) / (((3526099480347041270 || (var_9 * var_1))))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_21 = (max(var_21, (((-(!-73))))));
                            arr_24 [i_0] [i_1] [i_2] [i_5] [i_0] = (max(((((!var_15) && (arr_12 [i_0] [i_1] [i_2])))), (((558446353793941504 && var_4) ? (((!(arr_16 [i_0] [i_1] [i_5] [i_7])))) : 255))));
                            arr_25 [i_0] [i_0] [i_2] [4] [i_7] = max(((((var_11 / var_4) ? 73 : (arr_12 [i_1] [i_1] [i_5])))), (min((arr_12 [i_0] [i_1] [i_7]), var_4)));
                        }
                    }
                    var_22 = (((((var_9 > (arr_2 [i_0] [i_0] [i_2])))) << (((max(var_6, 7383152596045028837)) - 7383152596045028835))));
                    var_23 = (((((-(arr_6 [i_0] [i_1] [10]))))));
                }
                var_24 = (max(var_24, ((max((var_13 < 37), ((!(arr_3 [i_0] [i_1]))))))));
            }
        }
    }
    var_25 = var_3;
    #pragma endscop
}
