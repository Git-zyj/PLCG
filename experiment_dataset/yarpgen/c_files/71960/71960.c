/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_19 = -612053452369053781;
                var_20 = 612053452369053783;
                var_21 &= ((arr_4 [i_0 - 2] [i_0 - 2]) | (((var_1 < ((var_13 ^ (arr_5 [i_0] [i_0] [8])))))));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 *= ((~(arr_8 [i_1 + 1])));
                            var_23 *= (((arr_6 [i_5] [0]) ? var_3 : (max(-0, ((var_11 ? var_17 : (arr_14 [i_3] [i_1] [i_5] [i_4] [i_5])))))));
                            var_24 = (arr_8 [i_0]);
                            arr_16 [i_0 - 2] [i_1] [i_3] [i_1] [10] = (min((((arr_0 [i_3] [i_3]) >= 18347591064541498975)), (arr_6 [i_1] [i_1 + 2])));
                        }
                    }
                }
                var_25 = ((((((arr_15 [i_1]) ? var_4 : var_18))) && ((((612053452369053780 && (arr_1 [i_1] [i_1])))))));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_26 = ((((max(var_7, var_6))) < (max(var_18, var_5))));
                    var_27 ^= (arr_12 [i_0 - 1] [6] [i_0]);
                }
                var_28 *= max((min((((612053452369053780 < (arr_0 [3] [i_0 + 1])))), var_18)), var_7);
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((((max((arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0]), ((((arr_3 [i_8]) >= -319488958)))))) ? var_8 : (((((arr_19 [i_0] [i_8] [i_0] [0]) * var_11)) | var_14)))))));
                            var_30 *= ((max(var_14, ((var_10 ? var_5 : 3566071567)))));
                        }
                    }
                }
                var_31 = ((((arr_11 [i_1 + 2] [i_1] [9] [i_0 - 2] [i_0]) | 4210024905080773057)));
                var_32 |= max(var_10, var_14);
                var_33 = (((((var_9 > (arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2])))) > (max(var_2, var_15))));
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_38 [i_1] [i_11] [8] [i_0 + 1] [i_0 + 1] [i_1] = ((-103 ? -319488958 : 2013586820));
                            var_34 = (min(var_34, ((max(-1616647359, 62278)))));
                            var_35 = ((var_1 > (max((arr_25 [i_12] [i_12 - 1] [i_12 - 1] [i_1] [i_12] [i_12]), var_11))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 10;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 2; i_14 < 9;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_36 -= (((arr_2 [i_0 - 2] [i_14 - 1]) > var_1));
                    var_37 = (arr_8 [i_13 + 1]);
                    arr_45 [i_0] [i_0] [i_13] [i_0] [i_13] = (((((arr_33 [7] [i_13] [7]) ? var_17 : 996400674)) | (arr_37 [i_0 - 2] [i_0 - 2])));
                    arr_46 [i_0] [i_13] [i_14 - 2] [i_15] = ((-(arr_40 [i_13] [i_13])));
                    var_38 = (((2429210666462918983 - var_5) / (arr_5 [3] [i_13] [i_0])));
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_39 = (min(var_39, (!var_4)));
                    var_40 = (arr_44 [5] [5] [i_13] [7]);
                    arr_49 [i_16] [i_13] [i_16] [i_16] [i_0] [i_0 - 1] = (var_14 > (arr_30 [i_0 + 1] [i_0 - 1] [i_13]));
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                {
                    var_41 += arr_22 [9] [i_14] [i_0] [i_0];
                    var_42 &= var_13;
                }
                for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
                {
                    var_43 = (min(var_43, (arr_4 [i_13 + 2] [i_13])));
                    arr_55 [i_13] [i_13] [i_14] [i_18] [i_18] = var_18;
                }
                var_44 = (((arr_31 [i_0] [i_13 + 1] [i_14 + 2] [i_14 + 2]) / (arr_26 [i_14] [i_13 + 1] [i_0])));
            }
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                var_45 = var_4;
                var_46 &= var_5;
            }
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 8;i_22 += 1)
                    {
                        {
                            var_47 = ((((!(arr_47 [i_0 - 2] [8] [i_21] [i_22 - 1]))) || (arr_0 [i_13 + 1] [i_13 + 1])));
                            var_48 = (max(var_48, var_10));
                        }
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 12;i_23 += 1)
        {
            var_49 = 143;
            var_50 = var_9;
        }
        arr_68 [i_0] = arr_37 [10] [i_0 - 1];
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 12;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 12;i_26 += 1)
                {
                    {
                        arr_76 [i_26] [i_0] [8] [i_26] = var_15;
                        arr_77 [6] [i_24] [i_25] [6] |= var_1;
                        arr_78 [i_0] = (arr_8 [i_0 - 2]);
                    }
                }
            }
        }
    }
    var_51 = var_2;
    var_52 = var_5;
    #pragma endscop
}
