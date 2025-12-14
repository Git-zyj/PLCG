/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = 13;
        var_20 ^= var_17;
        arr_4 [i_0] &= (min((max(32760, -var_5)), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_1;
        var_21 += ((~(arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_3] [i_3] [11] = (arr_10 [i_2]);
            var_22 = (arr_13 [i_3] [i_2] [i_2]);
            var_23 += ((var_10 ? (min(var_5, (arr_12 [i_2] [i_3] [i_3]))) : var_5));
            arr_15 [i_3] [i_2] [i_2] = ((!(arr_13 [i_3] [i_3] [i_3])));
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_24 = min(((((~var_7) + ((var_0 ? var_0 : var_15))))), (((((max(1, (arr_11 [i_2]))))) + ((var_2 ? 1 : (arr_13 [i_2] [i_4 + 1] [1]))))));

            /* vectorizable */
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                var_25 += (((arr_18 [i_4 + 1] [i_5 - 2] [18]) | 32757));
                arr_21 [i_2] [i_5] [i_2] = 1;

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = (!(arr_19 [i_6] [i_5 - 2]));
                    var_27 = (arr_24 [i_5] [i_2] [i_5]);
                    var_28 = (-3242621490149024215 || (((-(arr_22 [i_5] [i_5] [i_4 + 1] [i_2] [i_2])))));
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_29 [i_2] [i_4] [i_7] = (((((var_16 ? (arr_26 [i_2] [i_4] [i_7]) : 4179970968866028017))) ? (32751 && var_11) : (arr_25 [i_7] [i_4] [4])));
                arr_30 [i_2] [i_7] [19] = ((-(~144)));
                var_29 = (((!32733) && var_6));
                arr_31 [i_2] [i_4 + 1] [i_7] = (arr_17 [i_2] [i_4 + 1]);
            }
            var_30 ^= ((((((((var_7 ? (arr_12 [i_4 + 1] [i_4 + 1] [12]) : 3242621490149024218))) ? ((var_0 ? 1 : -4179970968866028011)) : (arr_20 [i_4 + 1] [i_4 + 1])))) ? (arr_24 [i_2] [i_4] [1]) : (((!(arr_13 [i_4 + 1] [i_4 + 1] [i_4]))))));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_31 = (max(var_31, (((((32767 | (arr_28 [i_2] [i_8] [1] [i_8])))) && (((-(arr_28 [i_2] [i_2] [i_2] [i_8]))))))));
            arr_34 [1] [1] [6] |= ((((min(var_10, (arr_16 [i_8])))) ? -63 : ((var_11 ? (arr_13 [9] [i_8] [i_8]) : var_12))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_32 = (min(var_32, ((((arr_33 [i_2] [i_2] [i_2]) ? (arr_33 [i_9] [i_2] [i_2]) : var_16)))));

            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_33 += (arr_24 [i_10 - 1] [i_10 - 1] [i_9]);
                var_34 = (max(var_34, -4179970968866028014));
                var_35 = ((-(1 + 1)));
            }
            var_36 = (min(var_36, var_13));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_47 [i_12] [i_9] [i_9] [i_2] [i_2] = (var_10 || var_9);
                        var_37 = (var_16 | 144);
                        arr_48 [i_9] = -9223372036854775802;
                        arr_49 [i_2] [1] [i_9] [1] [i_11] [19] |= var_15;

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_38 = (min(var_38, (arr_11 [i_11])));
                            arr_52 [i_9] [i_13] = (((((13936 ? (arr_44 [i_12] [i_9] [i_2]) : var_6))) ? (arr_22 [i_2] [i_2] [i_11] [i_12] [i_9]) : (arr_26 [i_12] [i_11] [i_9])));
                        }
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            arr_55 [i_11] [i_11] [i_11] [3] [i_9] = ((!(arr_22 [i_11] [i_12] [i_11] [i_9] [i_2])));
                            var_39 = var_16;
                            arr_56 [6] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = var_1;
                            var_40 ^= 111;
                            arr_57 [9] [i_12] [i_11] [i_11] [i_2] [i_2] = var_5;
                        }
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_41 = (min(var_41, (((-((max(1, 1))))))));
            arr_60 [i_2] = (arr_36 [i_15]);
        }
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            var_42 = (min(var_42, (((var_3 ? (((!(!var_17)))) : ((var_8 ? ((var_11 ? 133 : 1)) : ((min(1, var_9))))))))));
            var_43 = (-127 - 1);
        }
    }
    #pragma endscop
}
