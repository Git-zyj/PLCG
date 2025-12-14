/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (max(((((~var_19) > var_5))), var_13));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        arr_2 [1] [i_0] = (arr_0 [i_0 - 3]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = ((((max(0, (arr_3 [i_1])))) ? 7813683992235365710 : (arr_3 [i_1])));
        var_23 ^= (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = (arr_6 [i_2]);

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_25 = (max((max((arr_8 [i_2] [i_3] [i_3 + 1]), (arr_8 [8] [i_3 + 1] [i_3 + 2]))), (((!(arr_8 [i_3 + 3] [i_3 + 3] [i_3 + 4]))))));
            arr_9 [i_2] = ((((((!((((arr_8 [i_3] [i_2] [i_2]) ? (arr_6 [1]) : 1))))))) > (-408115723 || var_10)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_17 [i_5] [i_2] [i_5] = (max(((~(arr_13 [i_4] [i_2] [i_2]))), 1));
                arr_18 [i_2] [i_4] [i_2] = arr_12 [i_2];
            }
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                var_26 -= (((min(1, 252))));

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_27 = (min(var_27, (arr_12 [i_7])));
                    var_28 *= ((((min(49558, 237))) ? (arr_0 [i_6 + 1]) : (((arr_0 [i_6 - 1]) ? (arr_0 [i_6 - 1]) : (arr_0 [i_6 + 4])))));
                    var_29 = var_12;
                    arr_23 [i_2] [1] [i_7] = (min((min((arr_5 [i_2]), (((arr_3 [i_2]) ? var_15 : (arr_20 [i_7]))))), (arr_11 [i_2] [i_2] [i_2])));
                }
                var_30 = ((~(((var_6 > (((arr_6 [i_2]) ? (arr_4 [i_2]) : -115)))))));
            }
            var_31 = (((9223372036854775807 >= (arr_8 [i_4] [i_4] [i_4]))) ? (arr_8 [6] [i_4] [i_2]) : (((!(arr_8 [i_2] [i_4] [i_4])))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_32 = (arr_6 [i_8]);
            arr_26 [6] [i_2] [8] = (((((-408115713 ? var_2 : 247)) ? ((max((arr_25 [i_8] [i_2] [i_2]), var_18))) : (max((arr_1 [i_2]), (arr_6 [i_2]))))));
        }
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_30 [i_9] = (arr_14 [i_9] [i_9] [10]);
        var_33 = ((1 ? (min(((min((arr_25 [i_9] [i_9] [i_9]), (arr_6 [i_9])))), var_14)) : (((0 ? 1 : 161)))));
    }
    var_34 = ((+(((!var_13) ? ((var_6 ? 799124893 : var_4)) : var_8))));
    #pragma endscop
}
