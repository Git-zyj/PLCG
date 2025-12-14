/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(2281892278, ((var_5 ? 2281892270 : -1)))) - var_7);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, ((var_6 ? (arr_1 [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 - 1])))));
        var_16 = (min(var_16, ((((-9223372036854775807 - 1) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (-9223372036854775807 - 1))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = (((min((~65535), (var_3 <= var_6)))) | (((arr_5 [i_1] [i_1] [4]) ? (arr_1 [i_1]) : (min((arr_6 [i_2] [i_1]), var_12)))));
            var_17 = (min(var_17, ((max(1, 2013075014)))));
        }

        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_18 = (max(var_18, ((((((((((arr_5 [i_1] [i_1] [i_4]) ? var_6 : -1885308709))) ? (arr_10 [i_3 + 1] [i_3 - 1]) : 0))) ? ((0 ? 9223372036854775804 : var_1)) : (((var_4 ? (var_6 * var_1) : var_1))))))));
                var_19 += ((var_11 || (((var_4 ? var_10 : ((var_1 ? var_8 : (arr_0 [i_1] [0]))))))));
            }
            var_20 = (max((var_6 - 1), var_8));
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_21 = (arr_1 [i_5]);
        arr_15 [15] = ((~(65535 > -1396668067)));

        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_22 [i_7] [i_7] [i_5] [i_5] = var_12;

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_22 += ((~((min(1566, -11)))));
                    arr_26 [i_6] [i_6] [i_6] = (!(arr_3 [i_5] [i_6 + 2]));
                    var_23 = (max(var_23, (((~(min(var_10, (arr_0 [i_6 + 2] [i_6 - 1]))))))));
                }
                arr_27 [i_5] [i_6 - 4] [i_7] [i_7] = ((((min(var_5, -23))) % (min((arr_1 [i_7]), (arr_18 [i_5] [i_5])))));
                arr_28 [i_5] [i_6 + 1] [i_5] [i_5] = max((!var_3), ((2013075018 ? 65528 : 2508175304)));
            }
            var_24 = var_12;
            var_25 = ((var_3 ? (!-31697) : var_1));
            arr_29 [i_6] |= (((max(9223372036854775790, -0)) == (((arr_18 [i_5] [i_6]) & (min(0, (arr_14 [i_6 - 4])))))));
        }
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            var_26 *= max((((-(arr_25 [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 1])))), (arr_30 [i_5] [9] [i_9 + 2]));
            arr_34 [i_9] = (((!8714666220494487455) ? (((arr_9 [i_9 - 4] [i_9 - 3]) & var_2)) : (arr_3 [i_9 + 2] [i_9 - 4])));
        }
        arr_35 [i_5] = (max((max((max(var_0, 10808648360205909493)), -22)), ((min(var_12, (arr_30 [i_5] [i_5] [i_5]))))));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        arr_39 [i_10] = ((((((arr_38 [i_10]) ? (arr_36 [i_10 + 1] [i_10 - 1]) : var_5))) + (((arr_38 [15]) - (arr_37 [i_10])))));
        var_27 = (arr_36 [i_10] [i_10]);

        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            var_28 = -var_12;
            arr_43 [i_10] [i_10] = var_0;
            arr_44 [i_10] [i_10] = (var_1 && var_0);
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 21;i_12 += 1)
        {
            arr_47 [i_10] = 0;
            var_29 = (((arr_38 [i_10 - 1]) < -15872));
        }
    }
    #pragma endscop
}
