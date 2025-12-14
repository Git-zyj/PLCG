/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_3));
    var_19 = ((1 ? -1802548687 : 28));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_20 = (min(var_20, -42));
                        arr_12 [i_0] [i_0] [1] [i_0] = (((arr_9 [6] [10] [i_1] [i_0]) ^ ((-(arr_8 [i_0] [i_0] [i_2] [i_3])))));
                    }
                    var_21 -= (((~(arr_8 [i_0] [1] [i_2] [6]))));
                    var_22 = 213;
                    var_23 = ((~(arr_1 [i_0 - 1])));
                }
            }
        }
        arr_13 [i_0] [6] = ((1 << (51300 || 1)));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 = (min(var_24, (((arr_1 [i_0]) ? (((arr_16 [1] [13]) ? (arr_15 [i_4]) : var_17)) : (((var_15 || (arr_5 [i_4]))))))));
            var_25 = var_12;
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_26 = ((((max(1, var_7))) >= (max(var_16, ((-(arr_17 [i_5] [i_5])))))));
        var_27 = (min(var_27, (((((((((arr_18 [1] [1]) ? -15 : (arr_17 [i_5] [i_5]))) - (arr_17 [i_5] [i_5])))) ? (((!(arr_17 [i_5] [9])))) : (((((-1889297350 ? 10335279916908061934 : 30316)) == 24479))))))));
        var_28 = ((((min(var_8, 1))) || ((((min(var_7, (arr_18 [3] [12])))) >= (var_1 + var_9)))));
        arr_19 [5] = ((6435407001736675882 & (arr_17 [9] [i_5])));
        var_29 = (((~1) ? (((((0 ? var_1 : var_7)) >= (arr_18 [i_5] [i_5])))) : (!0)));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [12] &= 0;
        var_30 -= ((var_13 ? ((0 % ((((arr_18 [i_6] [i_6]) ? (arr_18 [i_6] [3]) : (arr_18 [i_6] [i_6])))))) : (arr_21 [1])));
        var_31 = (arr_20 [i_6]);
        arr_23 [i_6] = ((~(min((arr_21 [i_6]), 9103492684732344066))));
    }
    #pragma endscop
}
