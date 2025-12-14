/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((~((-(arr_0 [i_0] [i_0])))));
        var_20 = (((~(arr_0 [i_0] [i_0]))));
        var_21 *= ((min(43, ((-56 ? 77 : 0)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((((min(219, -56))) * ((-(((arr_3 [i_1]) + var_11))))));
        arr_7 [i_1] [i_1 - 1] = (arr_3 [i_1 - 1]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_22 += ((((max((arr_0 [i_1] [i_1 - 1]), (arr_0 [7] [i_1 - 1])))) || (max((var_18 || var_5), (!-111)))));
            var_23 = ((((((var_16 < (arr_5 [i_1]))))) < ((((((arr_4 [i_1]) ? (arr_1 [i_2] [i_1 - 1]) : (arr_3 [1])))) ? (1428034868 + 63) : (max((arr_8 [i_1] [i_2] [i_2]), var_9))))));
            var_24 = (max(var_24, (max(((max((arr_0 [i_1 + 1] [i_1 + 1]), 166))), (min(2649732631706288214, 90))))));

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_25 = (arr_11 [i_1] [i_2]);
                arr_14 [8] [7] [i_3 + 1] = -24;
                var_26 = ((((max(((((arr_11 [i_1] [i_1]) <= 44))), (((arr_4 [i_1 - 1]) ? -2 : (arr_10 [i_3] [i_2])))))) ? 59 : ((((arr_4 [i_1 + 1]) != (~-47))))));
                arr_15 [i_2] [i_2] [i_2] = (90 % ((((min(var_14, (arr_4 [i_1 + 1])))) ? var_0 : (arr_1 [i_1] [7]))));
            }
            var_27 = var_6;
        }
        var_28 = (max(var_28, ((min((((~(arr_13 [i_1] [i_1] [i_1 - 1])))), (arr_4 [i_1]))))));
    }
    var_29 += 3165312727;
    #pragma endscop
}
