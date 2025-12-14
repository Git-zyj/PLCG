/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (min(var_16, ((((((((min(-1805794655, -870752098))) ? ((var_12 ? var_11 : var_8)) : (~var_0)))) ? ((-var_1 ? (870752097 >= 7856424527621491093) : var_1)) : (((var_7 ? var_6 : var_11))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_17 = (~((((arr_5 [i_0] [i_0] [i_1]) < var_7))));
            var_18 = arr_1 [i_0];
            arr_6 [i_0] [i_0] [i_0] &= (((((2147483620 ? (-2147483647 - 1) : var_12))) ? var_13 : (!-823)));
            var_19 = (min(var_19, (((-5320876775854177687 ? -870752082 : 1)))));
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_20 = var_5;

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_21 = (max(var_21, (arr_8 [i_2 + 1])));
                            var_22 = ((!var_9) ? (~var_0) : (var_13 == var_8));
                            var_23 = (min(var_23, -var_11));
                            arr_17 [i_3] [i_2] [i_4] [i_4] [i_5] = (arr_1 [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 |= ((var_13 ? var_13 : -1));
                            var_25 = (arr_11 [i_0] [i_4] [i_2] [i_0]);
                            var_26 &= (arr_10 [i_0 + 3] [i_0 + 1]);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((!(arr_15 [i_7]))))));
                            var_28 = var_1;
                            arr_24 [i_0 + 2] [i_0] [i_4] [i_0 + 1] [i_0] = (((arr_16 [i_0 + 3] [i_2] [i_4] [i_4] [i_7] [i_7] [i_7]) <= (arr_12 [2] [i_4] [i_4] [i_4] [i_0])));
                            var_29 ^= ((546563287 ? var_0 : (arr_1 [i_0 + 1])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_30 = (!var_6);
                            var_31 = ((255 <= (arr_1 [i_4])));
                            arr_27 [i_0] [i_0 + 3] [i_8] &= var_7;
                            var_32 = (1781486124 > 870752102);
                        }
                        var_33 = (((arr_23 [i_0 + 1] [i_2 - 1] [i_3]) ? 127 : (arr_23 [i_2 + 1] [i_0 - 1] [i_0 - 1])));
                        var_34 = ((~((var_7 ? (arr_25 [i_0] [i_4] [i_2] [i_3] [i_4]) : 2198956146688))));
                    }
                }
            }
        }
        var_35 = 0;
    }
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        var_36 = (min(var_36, (arr_5 [i_9] [i_9] [i_9])));
        var_37 = arr_8 [i_9 - 1];
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_38 = -2198956146689;

        for (int i_11 = 4; i_11 < 20;i_11 += 1)
        {
            arr_34 [i_10] = (((var_6 ? (arr_30 [i_10]) : 56)) < (((arr_30 [i_10]) ? var_11 : (arr_31 [i_10]))));
            arr_35 [i_10] = (((!15) ? (var_8 != var_4) : (arr_32 [i_11 - 2] [i_11 - 2])));
        }
        for (int i_12 = 3; i_12 < 19;i_12 += 1)
        {
            var_39 = -var_7;

            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {

                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    arr_43 [i_10] [i_10] [i_10] [1] [i_10] &= (((arr_31 [20]) ? (arr_38 [i_10] [i_13 - 1] [16]) : var_0));
                    arr_44 [i_10] [i_10] [12] [i_10] [i_10] [i_14 + 1] = ((((var_7 & (arr_39 [i_10])))) && (21 != 1588677394));
                    arr_45 [13] [i_10] [i_13] [i_10] = (((((var_9 ? -2198956146680 : var_0))) && (((var_11 ? -1588677395 : 1)))));
                    arr_46 [i_10] [i_12] [i_13] [i_14] = var_7;
                }
                for (int i_15 = 3; i_15 < 19;i_15 += 1)
                {
                    var_40 |= ((((-2198956146683 ? var_6 : (arr_33 [10]))) <= (((arr_49 [i_15] [i_13] [10] [i_12] [i_10]) ? var_11 : var_12))));
                    var_41 = (((arr_36 [i_12] [i_10]) & (arr_36 [i_10] [i_10])));
                }
                var_42 = (((((var_9 & (arr_39 [i_10])))) ? (1588677394 > 19) : ((0 ? var_3 : var_4))));
                var_43 = ((234881024 ? (arr_47 [i_13 - 1] [i_10] [i_13] [i_13 - 1]) : (arr_47 [i_13 - 1] [i_10] [i_10] [i_13 - 1])));

                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    arr_53 [i_10] [i_12] [i_16] [i_10] [i_10] = ((1 * 98) ? (arr_30 [i_12 - 2]) : var_12);
                    arr_54 [i_10] [i_10] [i_13] = var_7;
                    var_44 = (max(var_44, ((((~(arr_40 [i_10] [i_10] [i_10] [i_10]))) - ((((arr_49 [i_16] [i_16] [i_16] [i_10] [i_10]) > 483231816)))))));
                    var_45 = (((arr_31 [i_10]) ? var_3 : (arr_39 [i_10])));
                    var_46 = (min(var_46, ((((((-(arr_48 [i_16] [i_12] [i_16] [i_16])))) ? (~var_7) : (arr_39 [i_16]))))));
                }
            }
            var_47 &= (arr_36 [i_10] [i_10]);
        }
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            var_48 = ((var_2 - (~var_6)));
            var_49 = (arr_31 [i_10]);
        }

        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                var_50 = ((-(arr_48 [i_18] [i_18] [i_19] [i_10])));
                var_51 ^= 255;
            }
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                var_52 = ((-(arr_37 [i_10])));
                arr_65 [i_10] [i_20] = (var_10 ? (arr_56 [i_18 + 1] [i_18] [1]) : var_1);
                arr_66 [i_20] [i_20] [2] [2] &= (arr_62 [i_18 + 1] [i_20]);
                var_53 ^= (((var_10 / (arr_48 [i_10] [i_18 + 1] [i_20] [i_20]))));
            }
            var_54 = (var_2 >= var_7);
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            var_55 *= (((arr_33 [i_21]) ? var_14 : 1399122046));
            var_56 = (((arr_32 [i_21] [i_21]) % (130560 % var_11)));
        }
    }
    #pragma endscop
}
