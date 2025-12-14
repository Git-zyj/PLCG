/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = arr_0 [i_0] [i_0];

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [i_2] = 7992774397629355332;
                arr_11 [i_1] [i_1] = var_11;
                arr_12 [i_2] [i_2] [i_1] [i_0] = ((var_11 > (var_15 && var_15)));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_16 = (min(var_16, ((((var_7 != (arr_14 [i_1] [17])))))));
                arr_17 [1] [i_1] [i_3] [1] = (arr_16 [i_1]);
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_17 = 154;
                arr_20 [i_1] [i_1] = ((var_5 ? (((arr_0 [i_0] [1]) ? (arr_9 [i_0] [i_1] [i_0]) : var_12)) : 38757));
                var_18 += (-4105616434520612692 > var_10);
                var_19 ^= ((var_4 > (arr_15 [i_1] [i_1] [6])));

                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    arr_25 [13] [i_1] [i_1] [i_0] = 25281;
                    var_20 = (101 ? var_8 : (((arr_6 [i_0] [i_0]) ? (arr_5 [11] [i_1] [i_5]) : var_5)));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_21 = ((62 ? var_5 : ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_4]) : (arr_27 [i_0] [i_0] [i_4] [i_0] [i_4]))))));
                    var_22 = (arr_8 [i_0] [i_1] [i_1] [i_0]);
                }
            }
            arr_28 [i_1] = var_14;
        }

        /* vectorizable */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            arr_31 [i_7] = var_5;
            var_23 = var_13;
        }
    }
    var_24 = (var_1 & var_7);
    var_25 = var_11;
    #pragma endscop
}
