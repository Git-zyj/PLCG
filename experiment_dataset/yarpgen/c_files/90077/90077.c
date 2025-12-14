/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max((((((49322 ? 2340437771 : 2475661790))) ? var_1 : 2340437771)), ((min(var_10, ((var_8 ? var_9 : var_11)))))));
    var_18 = ((((((((var_7 ? var_3 : var_8))) ? (min(var_6, var_14)) : (((max(var_9, var_12))))))) ? ((((min(var_3, var_14))) ? ((max(var_3, var_2))) : ((var_14 ? var_4 : var_0)))) : ((max(var_0, ((max(var_12, var_15))))))));
    var_19 = (max(var_19, (((var_9 ? ((((var_4 ? var_2 : var_14)) & ((max(var_12, var_8))))) : (((var_3 ? ((var_4 ? var_10 : var_1)) : (((max(var_11, var_6))))))))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 += (arr_1 [18]);
        var_21 += ((1954529525 ? 219 : 1));
        var_22 = -36;
        var_23 = (max(var_23, var_7));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_24 = (max(var_24, var_0));
            arr_8 [i_2] = var_2;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_13 [i_1] [i_3] [i_4] = (arr_12 [i_3] [i_3] [i_3] [1]);
                    var_25 -= (((((((max((arr_7 [i_1]), var_0))) ? (min((arr_12 [14] [i_1] [i_3] [i_4]), (arr_9 [1]))) : var_0))) ? ((((max(var_12, var_9))) ? var_3 : var_8)) : (((((min(var_1, (arr_9 [6])))) ? (((arr_11 [i_1] [i_1] [16] [i_4]) / var_14)) : ((((arr_4 [i_4]) ? -14410 : 220))))))));
                }
            }
        }
        arr_14 [i_1] = (((arr_4 [i_1]) ? ((((((arr_5 [i_1]) ? var_0 : var_9))) ? (((arr_7 [i_1]) - (arr_6 [i_1] [i_1] [i_1]))) : (min((arr_4 [i_1]), var_4)))) : (((((((arr_4 [1]) ? (arr_5 [i_1]) : (arr_3 [i_1])))) ? var_16 : (arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_26 = ((((((arr_11 [i_5] [i_6] [i_7] [i_8]) ? (arr_21 [i_5 - 1] [i_5 - 1] [i_6]) : (arr_19 [i_6])))) ? ((((arr_17 [i_5] [i_7] [i_8]) ? var_11 : var_13))) : (((arr_7 [i_5]) ? (arr_3 [i_6]) : (arr_19 [i_6])))));
                        var_27 = (min(var_27, (arr_18 [1] [i_7])));
                        arr_25 [i_5] [i_6] [i_6] [i_8] = (((((var_10 ? (arr_11 [i_5] [i_6] [i_7] [i_8]) : (arr_23 [i_5] [i_5] [i_7] [i_7] [i_8] [i_8])))) ? (((arr_6 [i_6] [i_7] [i_8]) ? (arr_3 [i_6]) : (arr_4 [i_6]))) : var_8));
                    }
                }
            }
        }
        var_28 = (max(var_28, (((var_5 ? (arr_12 [0] [i_5] [2] [i_5 + 1]) : ((((arr_12 [1] [i_5] [i_5] [i_5 - 1]) ? (arr_5 [i_5]) : var_16))))))));
        arr_26 [i_5] [i_5] = (arr_23 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_5]);
        arr_27 [i_5] [i_5] = ((58161 ? 1819305495 : 0));
    }
    for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_29 = ((((arr_17 [i_9] [i_9] [5]) ? ((min((arr_7 [i_9 - 1]), (arr_17 [i_9 - 1] [i_9 - 1] [i_9])))) : (arr_7 [i_9]))));
        var_30 = (arr_20 [i_9 - 1] [i_9 + 1] [i_9]);
        var_31 = (((arr_28 [i_9]) ? (arr_20 [i_9] [i_9 + 1] [i_9]) : ((((((arr_18 [6] [i_9]) >> (((arr_6 [i_9] [i_9 - 1] [19]) - 1403941517))))) ? (arr_12 [12] [i_9] [1] [i_9 - 1]) : var_5))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_33 [i_10] = ((var_10 ? (((arr_18 [i_10] [i_10]) - (arr_31 [i_9] [i_10]))) : (((arr_29 [i_10]) ? (arr_30 [i_9] [i_10]) : var_15))));
            var_32 = (max(var_32, (((-(((var_13 && (arr_32 [12] [6])))))))));
        }

        for (int i_11 = 3; i_11 < 19;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_40 [i_12] = var_16;
                var_33 -= min(((max(-var_4, ((min((arr_15 [i_11]), (arr_23 [i_9] [i_9] [i_11] [18] [i_12] [i_12]))))))), ((((arr_3 [i_12]) == (arr_38 [i_9 + 1] [i_11] [2])))));
                var_34 = (max(((max((max((arr_39 [i_9] [i_12]), var_14)), var_5))), ((((((arr_19 [i_12]) - (arr_39 [i_9 - 1] [i_12])))) - ((var_15 ? (arr_20 [i_9] [i_11 - 3] [i_12]) : (arr_9 [i_12])))))));
            }
            var_35 = (max(var_35, (((((max(((min((arr_5 [i_9]), (arr_23 [i_9 + 1] [i_9] [i_11] [i_11] [i_11] [i_11])))), ((-(arr_20 [i_9 - 1] [i_11] [i_11])))))) ? (arr_19 [20]) : (((((var_9 ? (arr_19 [16]) : (arr_17 [i_9] [i_11 - 2] [i_11])))) ? (((var_9 ? var_12 : (arr_7 [i_9])))) : (((arr_30 [i_9] [i_11]) ? var_3 : var_8)))))))));
            arr_41 [i_9] [1] = (((((var_6 ? (((arr_15 [i_9]) ? (arr_38 [i_9] [i_9] [2]) : (arr_16 [i_9] [i_11 - 2]))) : var_1))) ? ((((((arr_21 [i_9 - 1] [0] [2]) ? (arr_11 [i_9] [i_11 + 1] [i_11 + 2] [i_11]) : (arr_5 [i_9])))) ? (min((arr_30 [i_9] [i_11]), (arr_37 [i_9] [1] [i_11 + 2] [i_11 + 1]))) : (max((arr_4 [4]), (arr_31 [i_9] [i_11]))))) : (max(((((arr_9 [1]) ? (arr_15 [i_9 - 1]) : (arr_23 [i_9 - 1] [i_9] [i_9] [i_11] [i_11] [i_11 - 2])))), (arr_19 [2])))));
        }
    }
    #pragma endscop
}
