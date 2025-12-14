/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((-(~var_6)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = 65535;
        arr_4 [i_0] = ((((!(arr_1 [i_0])))));
        var_12 = (((arr_1 [i_0]) > var_7));
        arr_5 [i_0] = var_2;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_13 = (arr_3 [i_1]);
            var_14 = ((~(((((max((arr_12 [i_1] [i_1 - 1] [i_1]), (arr_8 [i_1 - 1])))) != (((arr_6 [i_2] [i_1]) / var_2)))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_3] [i_3 + 2] [i_1] [i_2] = ((!((((arr_17 [i_2 + 1]) ? (arr_17 [i_2 + 1]) : (arr_17 [i_2 + 1]))))));
                        arr_19 [1] [i_2] [i_3] = ((!((((arr_10 [i_1] [i_2 - 1] [i_1 - 1]) | (arr_3 [i_1]))))));
                        var_15 = (min(((1 ? ((~(arr_14 [i_2] [i_2] [i_3]))) : 36478)), -var_1));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = (arr_8 [i_2 + 1]);
                            arr_24 [i_1] [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 3] = arr_6 [i_3] [i_3 - 1];
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_6] [i_2 + 1] [i_4] [i_3] [i_2 - 1] [i_2 + 1] [i_1 + 1] = ((!(arr_0 [i_1 + 1])));
                            arr_28 [i_1 - 1] [i_3] = (!36275);
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_1] [i_2 + 1] [i_2 + 1] [i_3] [i_7] [i_4] = min(((min(var_0, (arr_26 [i_1 + 1] [i_1 + 1] [15] [4] [i_3])))), (((arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3]) << (arr_26 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_3]))));
                            var_17 = (max(12893640494480263165, (--2014)));
                            var_18 |= ((-(arr_22 [i_1] [i_1] [i_1] [i_1 - 1] [i_4] [i_1 - 1] [i_1])));
                        }
                    }
                }
            }
        }
        var_19 = -2853851888446989222;
        var_20 = (max(var_20, (arr_9 [i_1 + 1] [i_1 + 1])));
        arr_32 [i_1] [7] = (((-127 % var_0) % -var_0));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_36 [i_8] = (((arr_33 [i_8] [i_8]) - (arr_34 [i_8])));
        var_21 = (min(var_21, ((min((((((-311198604 + (arr_34 [i_8]))) < ((var_2 ? (arr_34 [9]) : (arr_33 [i_8] [i_8])))))), (arr_33 [i_8] [i_8]))))));

        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            arr_40 [15] [i_9] = 2029;
            arr_41 [i_8] = var_8;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_52 [i_12] [i_8] [i_8] &= (max((~3), ((~(arr_39 [i_12 - 1] [i_9 + 1] [i_11 - 1])))));
                            var_22 = (min(var_22, var_6));
                            var_23 -= (((max((arr_38 [i_12 - 1] [i_11 - 1]), (((-1 ? (arr_50 [i_8] [i_8] [i_8] [i_11 - 3] [i_9 + 1] [i_10]) : 190))))) >= (((-(~-2853851888446989222))))));
                        }
                    }
                }
            }
        }
        arr_53 [i_8] = ((((30943 + 4907) && ((min(1, (arr_50 [i_8] [i_8] [i_8] [1] [i_8] [i_8])))))));
        var_24 = (((((~(arr_43 [i_8])))) ? ((~(arr_43 [i_8]))) : (((arr_43 [i_8]) ? (arr_43 [i_8]) : (arr_43 [i_8])))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_56 [i_13] = ((1 || ((max(43662, 25523)))));
        var_25 = (max(var_25, var_3));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            {
                var_26 = (min(var_26, (((((arr_2 [i_14]) || (arr_2 [i_14])))))));
                arr_64 [i_14] [i_14] = (~-14379);
            }
        }
    }
    var_27 = (var_8 > var_5);
    #pragma endscop
}
