/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? var_18 : -1214222352))) ? (~1) : 197120892));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 -= (((((max((arr_4 [i_1] [i_0]), (arr_0 [i_1]))))) ? ((min((arr_4 [i_0] [i_1]), -9633))) : ((((var_17 ? 55902 : var_17)) * var_12))));
            var_20 = ((!(arr_0 [i_0])));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_11 [2] [i_4] [i_2] [i_4] = var_7;
                        var_21 = (arr_3 [i_2 - 1] [i_2 + 1] [i_4]);
                        var_22 = ((((7863527719698126071 && (arr_1 [i_2 + 1]))) && ((!(arr_1 [i_2 - 1])))));
                    }
                }
            }
            arr_12 [i_2] [i_2] [i_2] = (arr_1 [i_2 + 1]);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 += ((((var_10 || (arr_5 [i_0] [i_5]))) ? (arr_8 [i_0] [i_0] [i_0]) : 356451001));
            var_24 = ((((((arr_9 [i_0] [5] [5] [0]) ? (arr_9 [i_5] [i_5] [i_0] [i_0]) : (arr_9 [i_5] [i_0] [i_0] [0])))) <= (arr_7 [i_0] [i_0] [i_5] [i_5])));
            var_25 = (((((arr_0 [i_0]) ? 1824228184 : (arr_0 [i_0])))) ? (arr_0 [i_5]) : ((max((arr_0 [i_0]), (arr_0 [i_0])))));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_26 += ((-((9633 + (arr_0 [i_7 + 4])))));
                        var_27 = (max(var_27, ((((((((arr_14 [i_7] [i_7 + 4]) <= (arr_14 [1] [i_7 + 2]))))) / 2470739126)))));
                        var_28 = (((((-(~var_16)))) ? (arr_10 [i_8] [6] [6] [i_7] [i_6 + 1] [i_0]) : (max((max((arr_13 [i_0] [i_7]), var_2)), (arr_3 [i_6 + 2] [i_7 - 1] [i_7 - 1])))));

                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_29 &= (arr_24 [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1]);
                            var_30 = (min(var_30, (max((max((arr_25 [i_9 + 1] [i_9] [i_7 - 1] [i_6 - 1]), 55902)), (arr_25 [i_9 + 1] [i_7] [i_7 + 3] [i_6 - 1])))));
                            var_31 += 2470739111;
                        }
                        for (int i_10 = 1; i_10 < 7;i_10 += 1)
                        {
                            var_32 = ((((-(arr_20 [i_6 + 1] [i_6 + 2] [i_7 + 3])))) ? ((((!(!9633))))) : (((arr_25 [i_6 + 1] [i_7 - 1] [i_10 - 1] [i_10 + 2]) ? var_6 : (arr_25 [i_6 + 2] [i_7 + 4] [i_10 + 1] [i_10 + 3]))));
                            var_33 = (min(var_33, (((((((arr_6 [i_8]) / (arr_6 [i_8])))) * (max((((arr_28 [i_0] [i_0] [i_7] [i_8] [i_10] [i_0]) ? (arr_23 [i_0] [i_8] [i_8] [10] [i_8] [i_0]) : (arr_7 [i_0] [i_6 + 1] [i_8] [i_6 + 1]))), var_4)))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_34 = arr_26 [i_0] [i_0] [i_6 + 1] [i_6 + 1];
                            var_35 = ((var_14 & (6195238097189128806 - 1)));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        arr_37 [i_6 - 1] [i_6] [i_7] [i_6 - 1] = ((~(arr_3 [i_6] [i_6 - 1] [i_7 - 1])));
                        var_36 = ((-(arr_5 [i_12] [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_13] [i_7] = var_17;
                        var_37 *= (arr_26 [i_6] [i_6] [i_7] [i_13]);
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_38 = (arr_36 [i_7] [i_7 + 1] [i_14]);
                        arr_43 [i_0] [i_0] [i_0] = (((arr_35 [i_0] [i_6 - 1] [i_7] [i_7 - 1] [i_7] [i_14]) ? 1389305745 : (((arr_35 [i_0] [i_6 - 1] [i_7] [i_7 + 4] [i_0] [4]) ? (arr_35 [8] [i_6 + 2] [i_7] [i_7 - 1] [9] [1]) : (arr_35 [i_0] [i_6 + 1] [i_7] [i_7 + 1] [i_7] [i_7])))));
                        arr_44 [i_0] = var_16;

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            arr_47 [i_0] [i_6] [i_7] [i_14] [i_0] [i_15] [i_14] = (-(arr_10 [i_6] [i_6 + 1] [i_6 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 1]));
                            var_39 = ((var_16 * (((arr_16 [i_14] [i_6]) ? var_14 : 9645))));
                            arr_48 [i_6 + 2] [4] = (((arr_21 [i_6] [i_7]) ? (arr_30 [i_0] [i_6] [i_7 + 4] [i_7] [i_14] [10]) : (arr_5 [i_7 + 3] [i_14])));
                            arr_49 [1] [i_6 - 1] [i_7] [i_7] [i_14] [1] [i_15] = ((1824228188 ? 24326 : (arr_24 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1])));
                            var_40 = (arr_32 [i_6 + 1] [i_7 + 4]);
                        }
                        arr_50 [i_0] [i_6 + 1] [7] [i_14] = var_16;
                    }
                    arr_51 [i_0] [i_6] [i_7] = ((var_5 ? (!33633) : -6195238097189128818));
                    arr_52 [i_7] [i_7] [6] = ((!((max(var_5, 1389305745)))));
                    arr_53 [i_7] = var_6;

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        var_41 += (arr_9 [i_16] [i_7] [i_6] [i_0]);
                        var_42 = (((arr_21 [i_7 - 1] [i_6 + 1]) ^ (arr_21 [i_7 + 4] [i_6 + 2])));
                        arr_56 [i_0] [i_6] = ((-(arr_36 [i_6 - 1] [i_7 + 2] [i_7 + 2])));
                        var_43 = (~1310973715598835065);
                    }
                }
            }
        }
    }
    var_44 += (min((((!(var_12 <= var_2)))), var_14));
    var_45 = var_0;
    #pragma endscop
}
