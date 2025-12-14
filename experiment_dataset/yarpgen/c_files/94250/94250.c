/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = (arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (4 || 0);
                                arr_16 [i_0] [i_1] [i_2] [i_3] [1] [i_1] [i_0] = ((((-((max(1, var_13))))) + (min(var_1, (min(var_11, 1))))));
                            }
                        }
                    }
                    var_21 = var_14;
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_22 = (~var_16);
                            arr_27 [i_0] [i_1] [i_5] [i_6] [i_0] = 1;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_23 = (((var_12 ? (arr_10 [i_0]) : var_13)));
                            var_24 += ((var_5 - (arr_19 [i_6 - 1] [i_1 - 2] [i_0 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_25 = (max(var_25, var_14));
                            arr_34 [i_9] [i_1] [i_5] [i_6] [i_0] = (((arr_4 [i_6 - 1]) > (arr_0 [i_0 + 1] [i_1 - 2])));
                        }
                        arr_35 [i_0] [i_0 - 2] [i_0] [i_5] [i_0 - 2] = (((var_15 >= 1) ? 1 : 1));
                    }
                    arr_36 [i_0] [i_0] [3] = var_2;
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_26 = (max(var_26, (((((max((((arr_10 [5]) ? (arr_12 [i_0] [i_1] [i_10]) : (arr_22 [i_10]))), (!32767)))) + ((-32767 ? ((min((arr_6 [i_0] [i_0]), (arr_17 [i_10] [i_1] [i_1] [i_10])))) : (arr_37 [i_10] [i_10] [i_10] [i_10]))))))));
                    arr_39 [i_0] [i_1 + 3] [i_0] = ((-(((!((max(12, (arr_32 [i_1] [i_10] [i_1] [i_1] [15])))))))));
                    arr_40 [i_0] [i_10] [i_10] |= ((((~(((arr_33 [i_0] [i_0] [i_1] [i_0] [i_1]) ? -1303461616088806738 : 1)))) * (((min((arr_22 [i_10]), (arr_4 [i_10]))) >> (min(1, (arr_17 [i_10] [i_10] [i_10] [i_10])))))));
                    arr_41 [i_0] [i_10] |= (max((min((arr_13 [i_0] [i_0] [i_0]), ((((arr_1 [i_0]) != var_4))))), (!1)));
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_11] [i_11] [i_12] = (1 && 1);
                            var_27 = 1;
                            var_28 = (max(var_28, (((((min(18446744073709551615, 94))) ? 17246 : 1)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            {
                var_29 = (((1 * (arr_31 [i_13 - 2] [i_14] [i_14] [i_14] [i_14]))));
                var_30 = (((((-((max((arr_32 [i_14] [i_14 - 1] [i_14] [i_14] [i_14]), var_15)))))) ? ((((!3) != (((arr_12 [i_13] [i_13] [1]) + (arr_44 [i_13] [i_13] [i_13] [i_13])))))) : var_5));
            }
        }
    }
    var_31 = 0;
    #pragma endscop
}
