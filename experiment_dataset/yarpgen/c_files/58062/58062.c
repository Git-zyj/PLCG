/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (arr_0 [i_1]);
            var_11 = (64651 * 25496);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = (arr_8 [i_2]);

            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                var_12 -= ((+((-(((arr_6 [i_0 - 1]) - 65535))))));
                arr_14 [i_0 + 1] [i_2] [i_2] [i_3] = (((-(arr_6 [i_0 - 1]))) - ((((((arr_4 [i_2] [i_2] [i_2]) | (arr_13 [i_0] [i_2] [i_3] [i_0]))) >= 25488))));
                var_13 = ((arr_3 [i_3] [i_0 - 1]) > (arr_0 [i_0]));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_14 = (((arr_3 [i_0] [i_0 - 1]) || (arr_1 [i_0 + 1] [i_2])));
                var_15 = (max(var_15, 229));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_16 = (min(var_16, ((((arr_20 [i_0]) % (~-32))))));

                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] = 255;
                    arr_26 [i_0 + 1] [i_0] [i_0] [i_0] = ((-(((115 || 2040) * (!198)))));

                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        arr_30 [i_7] [i_7 - 2] [i_7 - 2] [i_5] [i_7 - 2] = (arr_1 [i_2] [i_5]);
                        arr_31 [i_5] &= ((~(((((!(arr_23 [i_7] [i_7 + 1] [i_6] [i_0] [i_2] [i_0]))) && -40047)))));
                    }
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_17 = 255;
                        arr_35 [i_8] [i_2] [i_2] = 11625156592382185305;
                        var_18 = (((((234 || (arr_2 [i_8])))) - (((0 / 255) >> (((arr_19 [i_5] [i_5]) - 43683))))));
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_39 [i_0 - 1] [i_2] [i_5] [i_6] [i_9] = ((+((-(((arr_15 [i_0] [i_2] [i_5] [i_9]) + (arr_29 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])))))));
                        arr_40 [i_0 - 1] [i_6] [i_5] [i_6] [i_0 - 1] = ((-(arr_17 [i_0] [i_6])));
                        arr_41 [i_0 - 1] [i_2] [i_2] [i_6] = -234;
                        arr_42 [i_0 - 1] [i_0 + 1] [i_2] [i_5] [i_6] [i_9] = 25496;
                        arr_43 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_9] = (arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_19 = ((240 > (((!((((arr_8 [i_2]) / (-32767 - 1)))))))));
                    var_20 = (45 | (~40048));
                }
            }
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_21 = (!1);
                            var_22 = ((arr_50 [i_0]) && 3268698835970181766);
                        }
                    }
                }
                var_23 = ((!((((((arr_47 [i_2] [i_2] [i_2] [i_0 + 1]) | (arr_48 [i_2] [i_2] [i_2] [i_2]))) | (arr_33 [i_0] [i_2] [i_2] [i_2] [i_2] [i_11 + 2] [i_11 + 2]))))));
                arr_56 [i_11] [i_2] [i_0] [i_0] = 4743853608988428065;

                /* vectorizable */
                for (int i_14 = 2; i_14 < 10;i_14 += 1)
                {
                    arr_59 [i_11] [i_14 - 1] = ((((((arr_54 [i_14] [i_11] [i_11 - 2] [i_2] [i_2] [i_0 - 1] [i_0]) || (arr_52 [i_0] [i_0] [i_0 - 1] [i_2] [i_11 - 2] [i_14])))) | -57));
                    arr_60 [i_14] [i_0] [i_0] [i_0] [i_0] &= ((-(((arr_22 [i_2] [i_0]) << (14945632010789728434 - 14945632010789728426)))));
                    arr_61 [i_0] = -1310789841;
                    var_24 = ((!(((-(arr_18 [i_14] [i_11 + 2] [i_2] [i_0 - 1]))))));
                }
            }
            arr_62 [i_0] [i_2] = (arr_20 [i_2]);
            var_25 ^= (arr_18 [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
            arr_63 [i_0] [i_0] = ((arr_52 [i_2] [i_2] [i_2] [i_0 - 1] [i_0 + 1] [i_0 + 1]) <= ((-(arr_47 [i_0] [i_0] [i_0] [i_2]))));
        }
        arr_64 [i_0 + 1] = ((-(arr_28 [i_0] [i_0 - 1] [2] [i_0 - 1] [i_0])));
    }
    var_26 -= var_3;
    var_27 = var_5;
    var_28 = -40036;
    var_29 = var_3;
    #pragma endscop
}
