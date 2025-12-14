/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~(~var_7))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [4] = (max((((((var_4 ? var_15 : (arr_2 [i_0])))) ? (min(6106170009091629103, var_6)) : 6106170009091629109)), ((((arr_0 [i_0]) || var_16)))));
        arr_4 [i_0] [i_0] = (min((arr_1 [i_0] [i_0]), (((((((arr_2 [i_0]) + var_10))) ? (((arr_0 [i_0]) ? 12 : 9)) : ((12 - (arr_2 [1]))))))));
        arr_5 [i_0] = ((~(((((((arr_1 [i_0] [i_0]) ? var_7 : (arr_0 [i_0])))) || 2147483638)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] = var_3;
            var_20 = (min((((var_9 ? (0 > var_8) : (((!(arr_9 [i_1] [i_2]))))))), ((((-2147483647 - 1) ? var_13 : -13)))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_21 = var_13;

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_16 [i_1] [i_1] [i_4] = -5;
                arr_17 [i_1] [i_1] [i_1] [i_1] = 5748528224491656968;
            }
            arr_18 [i_1] [i_1] = (max(239, var_3));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_21 [1] [i_1] = (((arr_12 [i_5] [i_1]) ? var_6 : (arr_11 [i_1])));
            arr_22 [i_5] [i_1] [i_5] = ((var_4 / ((((arr_19 [i_1]) > 21)))));
            var_22 = (max(var_22, (((12340574064617922512 >> (var_12 - 10520))))));
        }
        arr_23 [6] [6] &= (((((var_14 ? 12340574064617922512 : 4294967277))) && 12340574064617922505));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        var_23 &= ((((arr_11 [4]) ? (((((-32767 - 1) && (arr_25 [12]))))) : (((arr_12 [i_6 - 2] [i_6]) ? var_18 : var_18)))));
        arr_27 [i_6] = (min((-1775580344 && var_7), (((~var_18) ? (arr_11 [i_6]) : (arr_14 [i_6] [i_6])))));
    }
    #pragma endscop
}
