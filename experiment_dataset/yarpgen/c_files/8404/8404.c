/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((var_2 ? var_0 : 255)), var_1))) ? var_11 : var_1));
    var_17 = ((((~((16312735798823291517 ? var_11 : var_11)))) < ((min(var_15, var_1)))));
    var_18 &= (~-var_4);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = ((!(arr_1 [i_0])));
                var_19 = ((~(arr_7 [i_0] [i_2])));
            }
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                arr_11 [i_0] [0] [i_0] [i_3] = (((arr_4 [i_0] [i_0]) ^ (arr_4 [i_0] [i_0])));
                var_20 -= ((~(arr_1 [i_3 + 1])));
                var_21 = (((arr_6 [i_3 + 1]) ? (arr_0 [i_0]) : ((-(arr_6 [i_3])))));
            }
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                var_22 = var_2;

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_23 = (((arr_13 [i_0] [i_0] [i_0]) ? (arr_14 [4] [i_0] [i_1] [i_4] [i_5]) : (((((arr_17 [i_4]) >= (arr_3 [i_4])))))));
                    arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_9 [i_4] [i_4 + 1] [i_4] [i_0]) % var_7));
                }
                var_24 = (arr_6 [i_4]);
                var_25 = 79;
            }
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                arr_23 [10] [i_1] [10] &= ((!(arr_2 [i_0 + 2] [i_0 + 1])));

                for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, 240));
                    var_27 = 1;
                    var_28 = ((~(65535 / var_8)));
                }
                for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] [i_8 + 2] = (arr_3 [i_0 + 3]);
                    var_29 = var_10;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_30 = var_1;
                    arr_32 [i_6] [i_6] [i_6] [i_6] [i_0] = (arr_9 [i_0] [i_1] [14] [i_0]);
                    var_31 = 1;
                    var_32 ^= ((var_11 ? 1 : (arr_12 [i_6 + 1] [i_6] [i_6] [i_6 - 1])));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_33 = ((!((var_6 <= (arr_3 [i_0])))));

                    for (int i_11 = 4; i_11 < 22;i_11 += 1)
                    {
                        var_34 = (16355424305070139482 ? (arr_37 [i_6 + 1] [i_6] [i_6] [i_10] [i_0 - 2] [i_11 - 1] [i_11]) : (arr_37 [i_6 + 1] [i_1] [i_6] [i_11] [i_0 - 2] [i_11 - 3] [i_6]));
                        var_35 = (arr_29 [i_0]);
                        var_36 -= (((arr_33 [i_0] [i_1] [i_6] [i_10] [i_11] [i_11 - 3]) % ((((arr_6 [i_1]) < (arr_36 [i_11] [i_10] [18] [i_1] [i_11]))))));
                        var_37 = (min(var_37, ((((arr_15 [i_0 + 1] [i_1] [21] [i_11]) ? var_10 : (arr_29 [i_11]))))));
                    }
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_38 = (min(var_38, (((16355424305070139499 >> (69 - 46))))));
                        var_39 = (arr_20 [i_0] [i_10] [i_0]);
                        var_40 *= (((var_12 % var_6) ? 69 : (arr_26 [i_6 - 1] [22] [i_6] [i_6] [i_6])));
                        var_41 = 2091319768639412134;
                        var_42 = (((~var_15) > (arr_24 [i_0] [7] [i_6] [i_6])));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_43 = (((arr_25 [i_0] [i_0] [i_6 - 1] [i_0]) > (arr_43 [i_0 + 3] [17] [i_0 - 1] [i_6 - 1] [i_6 + 1] [i_13] [i_13])));
                        var_44 = ((!((14136747966064782350 || (arr_10 [i_0] [i_1] [14] [i_1])))));
                        arr_45 [i_0] [i_10] [i_0] = 167;
                        var_45 = (arr_7 [i_0] [i_0 - 1]);
                    }
                    var_46 = (min(var_46, (arr_29 [0])));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_47 += (((arr_44 [i_0] [0] [i_0] [i_0] [i_0] [i_0 + 3] [0]) - (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_15])));
                            var_48 ^= (((arr_7 [i_15] [i_0 + 3]) ? (arr_7 [i_15] [i_0 - 2]) : (arr_7 [i_15] [i_0 - 2])));
                            var_49 = (arr_21 [i_6 + 1]);
                            var_50 += ((2091319768639412139 && (arr_27 [i_0 + 3] [15] [20] [i_0 + 3])));
                        }
                    }
                }
                var_51 = 1;
            }
            var_52 = 0;
            var_53 -= (((arr_17 [i_0 - 2]) ? (arr_17 [i_0 + 2]) : (arr_17 [i_0 + 1])));
        }
        var_54 = (~(arr_48 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1]));
    }
    #pragma endscop
}
