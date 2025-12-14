/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_11 = ((min(((arr_0 [i_0] [i_0]), ((max(1, (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_1] = var_2;
                arr_9 [i_0] [i_1] [i_1] = ((((min((arr_7 [i_2] [i_1] [i_2]), (arr_0 [i_1] [i_2])))) / (((arr_5 [i_2] [i_1] [i_1]) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_1])))));
                var_12 = (max(var_12, (((((!(arr_5 [i_0] [i_1] [1]))) || 255)))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_13 = (((arr_2 [i_1]) | 56590));
                    arr_12 [i_1] [i_0] [i_1] [i_2] [i_2] [i_3] = (arr_11 [i_0] [i_1] [i_2] [i_2 - 1]);
                    var_14 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                    var_15 |= (!2);
                }
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_15 [i_1] = (arr_7 [i_0] [i_1] [i_4]);

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_4] [i_1] [i_4] [i_5] = ((~(((arr_5 [i_0 + 1] [i_0] [i_1]) ^ (((arr_17 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5]) ? -15 : var_2))))));
                    arr_19 [4] [i_1] [i_4] [i_5] |= ((!(((((1 || (arr_1 [i_0]))) ? (arr_11 [i_0] [i_1] [i_4] [i_5]) : (arr_17 [i_0] [i_1] [i_4] [i_5] [i_5] [i_4]))))));
                }
                arr_20 [i_1] [i_1] [i_1] [i_4] = (!var_9);
                var_16 = arr_7 [i_0] [i_1] [i_4];
                var_17 -= ((((arr_16 [1] [i_4]) + var_8)));
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                arr_25 [i_1] = ((((((250 - var_10) * ((-(arr_22 [i_6] [i_1] [i_0] [i_0])))))) / (max((arr_17 [i_6] [i_6 - 2] [i_6] [i_6] [i_6] [i_6]), (max(var_2, 1))))));
                var_18 = (max(var_18, (((min((-127 - 1), (max(65530, (arr_3 [i_0] [i_6])))))))));
                arr_26 [i_1] = var_7;
                var_19 = (arr_13 [i_1] [i_1] [i_6] [i_6]);
                var_20 |= (9764 && 1);
            }
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                var_21 = (max(var_21, (((((var_0 >> var_1) ? var_9 : (((arr_13 [12] [i_0] [i_1] [i_7]) ^ 0))))))));
                var_22 = (min(var_22, (arr_3 [i_1] [2])));
                arr_30 [i_1] [i_1] [i_1] = -6438113615060184430;
            }
            arr_31 [i_1] [i_1] = ((-(max(((((arr_28 [i_1] [i_1] [i_1]) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0])))), (min(var_10, var_5))))));
        }
        arr_32 [i_0] |= (min((arr_4 [i_0 + 1] [i_0 + 1]), ((var_6 / (arr_22 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
        var_23 = (min(var_23, (((((max((arr_24 [16] [i_0] [i_0 - 1] [i_0]), (arr_24 [18] [i_0] [i_0 + 1] [i_0])))) ? (arr_2 [14]) : var_3)))));
        arr_33 [i_0] [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_36 [i_8] = ((var_1 | (arr_7 [i_8] [i_8] [i_8])));
        arr_37 [i_8] = (((~(arr_22 [i_8] [i_8] [i_8] [i_8]))));
        arr_38 [i_8] = (arr_6 [i_8] [i_8]);
        arr_39 [i_8] = ((((arr_34 [i_8]) * 10)));
    }
    var_24 = (max((min(var_2, var_4)), (((!(!var_3))))));
    #pragma endscop
}
