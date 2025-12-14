/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((((min(3102368970, var_1))) ? var_1 : var_3))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = (min(var_18, var_1));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_0 [i_1])));
            var_20 = (((var_9 ^ 4013744158) || ((((-127 - 1) ? var_3 : var_14)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_21 ^= ((+(((arr_5 [i_0] [i_0] [i_0]) ? 281223167 : -12636))));
                            arr_12 [i_0] [i_4] = (i_0 % 2 == 0) ? ((((arr_9 [i_0]) / (arr_9 [i_0])))) : ((((arr_9 [i_0]) * (arr_9 [i_0]))));
                            var_22 += ((-var_2 << (((((arr_4 [i_0] [i_1] [i_2] [i_3]) + 1507)) - 9))));
                            arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] = -1;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_23 = (!1);
            var_24 = (((arr_8 [i_5]) || (arr_5 [i_0] [i_0] [i_5])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_25 = (((arr_23 [i_0] [i_0] [i_0] [i_6] [i_7] [i_8]) ? (arr_23 [i_0] [i_5] [i_7] [i_6] [i_6] [i_6]) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_24 [i_0] [i_0] = var_10;
                            arr_25 [i_0] [i_5] [i_6] [8] [i_5] [i_8] |= 12;
                            arr_26 [i_8] [i_0] [i_0] [i_5] [i_0] = (((arr_3 [i_6] [i_7]) != (29 - 5)));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_26 = (min(var_26, (!25)));
            arr_30 [1] [1] [1] |= (((((((var_10 ? (arr_19 [1] [i_9] [i_9] [i_9]) : (arr_22 [i_0] [i_9] [0] [0] [i_9])))) ? ((max(var_11, var_0))) : (max((arr_6 [i_0] [i_9] [i_0]), (arr_9 [14]))))) >= ((min((((var_7 ? (arr_7 [i_0] [i_9] [i_9]) : var_1))), (max((arr_11 [i_9] [i_9] [i_9] [i_0] [i_0]), var_9)))))));
            var_27 = (min(var_27, var_7));
        }
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            arr_34 [i_0] [i_0] = ((max(var_14, (arr_2 [i_0]))));
            arr_35 [i_0] = ((-var_13 > (((1141539604 != (arr_19 [i_0] [i_10 + 1] [i_10] [i_10 + 1]))))));
        }
        var_28 = ((((-(arr_7 [i_0] [i_0] [i_0]))) + ((min(119, 147)))));
        arr_36 [i_0] = (((~-60) | 4013744149));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_29 = ((-(arr_39 [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_30 ^= ((-26953 ? 171 : 641530606));
                        arr_50 [i_11] [i_12 - 1] [i_11] [i_12] = (arr_23 [i_11] [i_11] [i_12 - 1] [i_13 + 1] [i_14] [i_14]);
                        arr_51 [i_11] [i_12] [i_11] [i_14] &= (max((max(49455, 3153427709)), ((((((var_15 ? var_4 : (arr_19 [i_12] [i_13 + 2] [i_13 - 1] [i_13])))) ? var_15 : 3945)))));
                        var_31 |= ((-(((!((min(var_11, var_7))))))));
                    }
                    var_32 = (arr_16 [i_11] [i_12 - 1] [i_11]);
                    var_33 = max((!32767), 2728307328);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                arr_56 [i_15] [i_11] = ((((((arr_54 [i_12 + 1]) ? (arr_54 [i_12 - 2]) : (arr_54 [i_12 - 2])))) ? (((arr_3 [i_12 - 1] [i_12 + 1]) << (((arr_3 [i_12 - 2] [i_12 + 1]) - 59)))) : (min((((arr_23 [i_11] [i_11] [i_13] [i_15] [i_16] [i_13]) ? (arr_14 [i_11] [i_11] [i_16]) : var_5)), ((min(1, (arr_7 [i_16] [i_15] [i_13 - 2]))))))));
                                var_34 = min((((~38381067) ? (arr_31 [i_12]) : (max((arr_8 [i_16]), (arr_0 [i_11]))))), var_6);
                                arr_57 [i_11] [i_11] [i_13 - 1] [i_11] [i_16] = (max((max((((!(arr_19 [i_11] [i_12] [i_15] [i_16])))), (max(var_8, var_2)))), (((!(arr_27 [i_12 + 1] [i_13 - 1] [i_13 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
