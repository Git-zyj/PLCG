/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) / ((var_1 ? (arr_1 [i_0 + 1]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((((min(3753179072835880069, -1)) >= ((min((((!(arr_6 [i_1] [i_1])))), (((arr_6 [i_1] [i_1]) ? var_17 : var_14))))))))));
            var_20 &= ((var_8 ? ((var_6 ? var_15 : (arr_0 [i_1]))) : ((((((arr_5 [i_0]) ? var_17 : var_16))) ? (min(var_18, var_14)) : ((~(arr_5 [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = (var_17 == var_9);
            var_21 = var_13;
            arr_11 [i_0] [12] [i_2] = (((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 1]))) << (var_15 + 31318)));
            var_22 = (max((((arr_1 [i_0 - 1]) ? var_14 : (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((((((arr_6 [i_0] [i_0]) / (((-(arr_5 [i_0]))))))) ? var_8 : (arr_12 [i_0 + 1] [i_0 - 1])));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_23 = ((!(!var_7)));
                var_24 -= (arr_13 [i_3] [i_0 - 1]);
                var_25 ^= var_11;
                arr_17 [9] [i_0] [i_0] [i_0] = ((((((arr_2 [i_0]) + (arr_16 [20] [1])))) ? (var_2 ^ var_10) : ((((arr_7 [i_0 - 1] [i_3]) ? var_12 : (arr_4 [i_4] [15] [i_0]))))));
                var_26 = ((((var_18 ? var_12 : (arr_5 [i_0]))) << (((((arr_12 [i_0] [i_4]) | (arr_8 [i_0] [i_3] [i_4]))) - 4227828654))));
            }
        }
    }
    var_27 *= (min(var_3, (max(var_6, (min(var_15, var_10))))));
    var_28 &= (((((max((max(var_4, var_14)), var_4)))) ^ (max(var_17, (((var_14 ? var_6 : var_10)))))));
    var_29 = var_16;
    var_30 = var_5;
    #pragma endscop
}
