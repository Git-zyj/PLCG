/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 &= (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_0]);

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [5] [i_0 - 3] [i_1] = ((-(arr_9 [i_3] [i_3 + 1] [i_3] [0])));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_14 = ((1 && (arr_2 [i_0 + 1] [i_0 - 4])));
                            var_15 -= (((!var_0) != 5774675708623399310));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_16 = (((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_5]) < (arr_8 [i_0] [1])));
                            var_17 = (arr_4 [i_3]);
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = (((((-5774675708623399311 ? 10 : 14035199600402009025))) ? (arr_0 [i_0 - 4]) : var_7));
                }
            }
        }
        var_18 = ((1 ? 0 : -5774675708623399306));
        arr_19 [i_0] = (arr_16 [i_0] [i_0] [i_0] [4] [i_0]);
        var_19 = (min(var_19, (arr_10 [i_0] [i_0 - 2] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_20 = (min(var_20, ((((arr_21 [i_6]) <= (arr_21 [i_6]))))));
        arr_22 [i_6] &= -5774675708623399289;
        var_21 = (((((var_3 ? (arr_20 [7]) : var_4))) ? (((arr_21 [i_6]) >> (5774675708623399314 - 5774675708623399312))) : (arr_21 [i_6])));
        var_22 = ((((((arr_20 [i_6]) / (arr_21 [i_6])))) ? var_9 : ((var_4 ? -29139 : 16754))));

        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            var_23 = (min(var_23, ((((((arr_21 [i_6]) ? var_10 : 1)) << ((((1 ? 29155 : (arr_20 [i_6]))) - 29153)))))));
            var_24 |= ((14 && (arr_25 [i_6] [i_6] [i_7 - 2])));
            arr_26 [i_7] [i_7] = (((arr_21 [1]) ? (arr_25 [i_7] [i_7 - 1] [1]) : var_9));
            arr_27 [i_7] [0] [i_7] = ((-(arr_25 [i_7] [i_7] [i_7 - 2])));
        }
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_25 = (max(var_25, ((((1 / var_9) < (arr_21 [i_9]))))));

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_34 [i_6] [i_9] [i_6] [1] = 3985925475161089101;
                    var_26 = var_5;
                }
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    var_27 = (max(var_27, -var_3));
                    var_28 = (((arr_35 [i_8] [i_8 + 3] [i_8] [i_11 + 1] [i_11]) <= var_0));
                }
                var_29 = (min(var_29, (arr_21 [i_6])));
                arr_39 [i_9] = (arr_23 [i_8 - 1] [i_6]);
            }
            for (int i_12 = 4; i_12 < 10;i_12 += 1)
            {
                var_30 = -580791872;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_31 = var_2;
                            var_32 = (arr_46 [i_6] [i_8 + 1] [i_6] [i_13] [i_12 + 2]);
                            arr_48 [i_13] [i_8] |= (var_8 ? (arr_41 [i_6] [i_6] [i_6]) : (arr_46 [i_6] [i_8] [i_12] [i_12 - 3] [i_14]));
                        }
                    }
                }
            }
            for (int i_15 = 2; i_15 < 12;i_15 += 1)
            {
                arr_51 [i_15] [i_15] [i_8] [5] = (((arr_36 [0] [i_15 - 2] [i_15 - 1] [i_6] [i_15 - 2]) & 1));
                var_33 ^= (((arr_23 [i_15 - 2] [i_8 + 2]) - -var_5));
                arr_52 [i_6] [i_8] [i_15 + 1] = (((arr_25 [i_6] [12] [i_15 + 1]) ? var_6 : (((arr_32 [i_6]) | var_6))));
            }
            var_34 |= var_9;
            var_35 -= (((((var_3 ? var_1 : var_11))) ? 5774675708623399322 : var_9));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_36 ^= (!1);

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_59 [i_17] [i_16] [i_16] [1] [1] = arr_30 [i_6] [i_6] [6];
                    var_37 = (max(var_37, var_2));
                }
                var_38 = -var_7;
                var_39 = (min(var_39, var_10));
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_40 |= (((arr_36 [i_6] [i_6] [1] [i_6] [i_18]) && 220));
            var_41 &= (arr_61 [i_6] [i_6]);
            var_42 = 0;
            arr_62 [i_18] = (!var_2);
            var_43 = var_3;
        }
    }
    for (int i_19 = 2; i_19 < 16;i_19 += 1)
    {
        var_44 = (max(var_44, 5774675708623399345));
        var_45 = ((((((arr_63 [i_19 + 1]) / ((var_1 ? (arr_64 [1]) : 2919285118))))) && var_9));
    }
    #pragma endscop
}
