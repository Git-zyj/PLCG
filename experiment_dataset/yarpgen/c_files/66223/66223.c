/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_0] = ((-(((((!(arr_1 [i_0 - 1] [i_1])))) * ((47 >> (30226 - 30224)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [1] = (min((max(((((arr_1 [i_0] [i_0]) && (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])))), (max((arr_10 [i_3] [i_1] [i_2] [15] [i_4]), (arr_9 [i_0] [i_1] [i_0] [i_3 + 1] [i_3 - 1] [i_4]))))), ((((((~(arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2])))) && (arr_3 [i_0] [i_2] [i_4]))))));
                                arr_15 [i_0] = (arr_3 [i_2] [i_1] [i_2]);
                                arr_16 [i_0] [11] = (17 ^ (arr_4 [i_0] [0] [i_0]));
                                arr_17 [i_0] [i_0] = (((arr_4 [i_0] [i_2] [i_2]) && ((min((max(-1, -1)), ((((arr_11 [i_4]) >= 208))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] [i_5] = (~31738);
                    arr_21 [i_1] [16] = (max(((((51871 & (arr_3 [i_0] [i_1] [i_5]))) * ((((-2147483647 - 1) != 2147483647))))), ((((((!(arr_2 [i_0] [i_5])))) > ((((arr_0 [i_0] [i_5]) > (arr_1 [i_0] [i_5])))))))));
                    arr_22 [i_0] [i_0] [i_0] [i_5] = (((((-1 + 2147483647) << (((arr_5 [i_0] [i_1] [i_1] [i_5]) - 16359)))) >> ((((arr_6 [i_0] [i_0] [i_0]) <= (arr_13 [i_0] [3] [i_5] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_27 [i_6] = (-127 - 1);
                                arr_28 [i_0] = (arr_3 [i_0] [i_1] [i_5]);
                            }
                        }
                    }
                    arr_29 [i_5] [i_1] [i_0 - 3] = (((min((arr_2 [i_0] [i_1]), (arr_18 [i_0] [i_1] [i_1] [15]))) < (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_33 [i_1] [i_1] [i_0] = ((-(arr_12 [i_0] [i_0] [i_0] [i_1] [i_8])));
                    arr_34 [i_0] [i_1] [i_1] [i_8] = ((((arr_13 [i_0] [i_0] [i_1] [i_8]) | 18446744073709551615)) << (127 - 95));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_9] [i_10] = (arr_23 [i_0] [i_1] [i_10]);
                            arr_41 [3] [i_1] [i_0] = (-127 - 1);
                            arr_42 [i_0] [i_0] = ((((min(10468102368402303430, -1)) / ((min((arr_25 [10] [i_1] [i_0]), 1109821616))))) / (((((arr_36 [i_10] [i_0] [i_0]) / (arr_38 [i_0 + 1] [i_1] [i_9] [i_9] [i_0]))) - (arr_37 [i_0] [i_9]))));
                            arr_43 [i_9] [i_10] |= (min(127, (arr_13 [i_0] [i_0] [i_9] [i_10])));
                        }
                    }
                }
                arr_44 [i_0] [i_1] = -28;
            }
        }
    }
    var_15 = (~var_0);
    var_16 &= ((((((-2147483647 - 1) > 3274444889)))) < var_10);
    #pragma endscop
}
