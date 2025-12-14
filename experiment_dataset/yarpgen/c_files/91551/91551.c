/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((~1), (!var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] |= ((((max((!167), (~-2147483640)))) ? 127 : var_6));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [9] [i_0] [9] = (max((max((((arr_0 [i_0]) == (arr_4 [i_0] [i_1]))), ((!(arr_4 [i_0] [i_0]))))), var_2));
            var_11 = -322531477;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_12 = (max((((arr_6 [i_0] [i_3 - 1] [14]) ? var_2 : -63)), (max(-2147483631, (arr_8 [i_0] [i_0])))));
                    var_13 = (((((arr_8 [i_0] [16]) != (max((arr_1 [i_3]), (arr_3 [i_0] [i_1]))))) && ((((31 == -198705108) ? (arr_7 [i_1] [i_1] [i_3 + 1]) : (arr_6 [i_0] [i_0] [i_0]))))));
                    var_14 = (max((((((2559249960 ? (arr_9 [i_0] [i_3] [i_2]) : var_7))) * (max((arr_9 [i_0] [i_3] [5]), (arr_6 [1] [1] [1]))))), -0));
                    var_15 = -2147483638;
                }
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    arr_13 [i_0] [10] [i_1] [10] [i_4] = ((((arr_12 [i_4 - 3] [i_4 - 1] [i_4 + 1] [i_4 - 3]) - (max((arr_8 [i_2] [i_2]), var_8)))));
                    var_16 = (min(var_16, (((-(arr_6 [7] [1] [2]))))));
                    var_17 = ((-(min(127, 0))));
                }
                var_18 = ((-((max((arr_9 [i_0] [i_2] [i_2]), (arr_0 [i_1]))))));
            }
            var_19 = (max(var_19, (arr_6 [i_0] [i_1] [i_1])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_20 = ((arr_12 [i_5] [i_5] [i_0] [i_0]) & (((arr_8 [5] [5]) ^ (arr_14 [16] [i_5] [i_5]))));
            var_21 = (((arr_12 [10] [i_0] [i_5] [i_5]) > (27 - var_5)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_19 [i_6] [i_0] = (arr_6 [12] [i_0] [i_0]);
            var_22 = (min(var_22, var_4));
        }
        var_23 |= (!65409);
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        arr_22 [i_7] = 5942;
        arr_23 [i_7] [i_7 - 1] = (arr_10 [i_7] [i_7] [i_7 + 1] [i_7]);
        arr_24 [6] |= (((((31 ? 32144 : ((var_1 - (arr_20 [i_7])))))) ? (((((arr_6 [i_7 + 1] [i_7] [i_7]) / var_4)))) : (arr_9 [6] [2] [i_7])));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_28 [i_7] [i_7] [i_7] = -10325;
            var_24 = ((arr_1 [1]) >= var_5);
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            var_25 = (((((arr_15 [i_7] [i_9 + 1] [i_9]) > (arr_0 [i_7]))) && var_4));
            arr_31 [i_7] [i_7] [i_7] = arr_20 [i_7];
            var_26 = (arr_0 [i_7 - 1]);
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_27 = (min(var_27, (arr_6 [i_7] [i_10] [4])));
            arr_34 [i_7] [i_10] [i_7] = (((arr_15 [i_7] [i_7] [i_10]) <= (((!((min(var_9, 23184))))))));
        }
    }
    var_28 = (min(var_5, (((-(max(-2147483640, 51)))))));
    var_29 = (((((((var_9 | var_1) <= 290)))) <= var_5));
    var_30 -= (~-var_4);
    #pragma endscop
}
