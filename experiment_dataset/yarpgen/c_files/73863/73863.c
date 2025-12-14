/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 0;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (((!(((5612444148465042104 ? 214 : 1099243192320))))) ? (arr_1 [i_1] [i_1]) : (max(((((arr_4 [i_1]) ? var_14 : (arr_6 [i_0])))), (arr_4 [i_1]))));
            var_19 = 214;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = (arr_5 [1] [i_2]);
            arr_11 [i_2] = 112;
            arr_12 [i_0] [i_2] = ((var_1 ? (arr_8 [i_0] [i_2]) : (arr_0 [i_2])));
            var_20 = (((arr_1 [i_0] [i_2]) + (arr_8 [i_2] [i_2])));
            var_21 = var_3;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_22 = ((var_7 ? (arr_13 [1]) : (arr_13 [i_0])));
            arr_15 [i_0] [i_3] [i_3] = ((-(arr_14 [i_0] [i_0] [i_0])));
            var_23 = (-(((arr_1 [i_0] [i_3]) ? var_14 : var_4)));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 3; i_5 < 6;i_5 += 1)
                {
                    arr_22 [i_5] [i_4] [i_5] = ((((var_5 ? (arr_0 [i_5]) : 4207795941106003944)) * ((((!(arr_4 [5])))))));
                    arr_23 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = ((!(arr_21 [i_0] [6] [7] [7] [1] [6])));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        var_24 = (((arr_21 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 1]) != (arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1])));
                        arr_29 [i_7] = (((arr_28 [i_7 + 1] [i_7 + 1] [i_4]) | var_15));
                        var_25 = (((arr_18 [i_7 + 1] [i_7 + 1] [i_3]) ? (arr_18 [i_7 + 1] [i_3] [0]) : (arr_18 [i_7 - 1] [i_3] [i_4])));
                    }
                    var_26 = var_6;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_32 [i_0] [i_8] = ((!(arr_6 [i_0])));
                    var_27 = (((((var_12 ? 540431955284459520 : 1))) ? (arr_25 [0] [7] [0] [0]) : 4158740739078661730));
                    var_28 = arr_16 [i_0] [9] [i_0] [9];
                    arr_33 [0] [8] [i_4] [i_4] [0] &= -1103248720;
                }
                arr_34 [i_0] [i_3] [i_4] [i_3] = (((-1059440212 + 41) ? -var_12 : var_7));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_29 = -14360994821623986976;
                var_30 = (53370 >> (arr_26 [i_0] [i_3]));
                var_31 = var_7;
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_43 [i_3] [i_10] = ((var_8 ? ((var_8 ? 15509688940446234743 : (arr_26 [i_0] [i_3]))) : ((((-2147483647 - 1) + var_14)))));
                            arr_44 [i_10] = var_10;
                        }
                    }
                }
            }
            for (int i_12 = 3; i_12 < 7;i_12 += 1)
            {
                arr_49 [6] [i_3] = ((arr_46 [i_0] [i_0] [i_12 - 3]) ^ (arr_36 [i_12 - 2]));
                var_32 = ((arr_28 [i_12 - 2] [i_3] [i_0]) ? ((64955 & (arr_9 [i_12 - 1] [i_3] [i_12 - 3]))) : (arr_8 [i_0] [4]));
            }
            var_33 = (arr_6 [i_0]);
        }
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        arr_53 [i_13] = (max(((-((min(0, 65535))))), (((arr_50 [i_13]) ? (max(var_4, var_2)) : (!1)))));
        arr_54 [i_13] [i_13 - 1] = ((0 ? (max(((max(185, 1))), (arr_50 [i_13]))) : var_13));
    }
    var_34 = var_15;
    var_35 = 41942;
    #pragma endscop
}
