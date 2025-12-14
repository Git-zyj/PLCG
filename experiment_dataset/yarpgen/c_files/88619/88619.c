/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = max(((((arr_3 [i_2] [i_2]) ? (!-8) : (arr_4 [i_0] [i_0])))), ((13 ? (arr_2 [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1 + 2] [i_1 + 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [9] [i_0] [13] [i_2] [i_3] [i_4] = (((9223372036854775798 - 32) ? (arr_5 [i_0]) : ((-(arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = arr_12 [i_0];
                                var_18 |= 65517;
                                var_19 = ((!((min((arr_4 [i_1 + 2] [i_0]), (arr_4 [i_1 - 1] [i_3]))))));
                            }
                        }
                    }
                    var_20 = (8191 == 7);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = (arr_18 [i_0] [i_1] [13] [i_5] [i_5] [i_6] [i_5]);
                                var_22 = (arr_9 [i_0] [i_0] [1]);
                            }
                        }
                    }
                    var_23 = ((((min(4294967295, 65508))) ? -var_10 : (((-((max((arr_5 [i_2]), var_11))))))));
                }
            }
        }
    }
    var_24 = (!var_11);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                arr_34 [i_9] [i_8] [i_8] [i_10] [i_11] = var_3;
                                arr_35 [i_9] [i_8] [i_9] [i_10] [i_11] [i_11] = (!15);
                            }
                        }
                    }
                }
                var_25 -= (min(-1187682383, (-9223372036854775807 - 1)));

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_26 = ((-118 ? 18446744073709551608 : 8471725603593417541));
                                var_27 = (arr_21 [i_7] [i_8]);
                                arr_44 [3] [i_8] [i_12] [i_12] [9] [i_7] = (((arr_7 [i_8 - 3] [i_13 + 1]) ^ ((-(arr_3 [i_7] [i_8 - 2])))));
                                var_28 = var_2;
                            }
                        }
                    }
                    var_29 = ((65520 ? 753803171229332254 : 44));
                    arr_45 [6] [i_8 - 4] [6] [4] |= ((!(arr_32 [i_7] [8] [i_7] [i_7] [i_7] [4] [6])));
                    arr_46 [i_7] [10] [i_8 - 1] [i_12] &= (((((var_14 ? (arr_10 [i_8 - 2] [10]) : (arr_6 [i_7] [i_8] [i_12])))) ? ((var_4 ? (arr_10 [i_8] [10]) : (arr_10 [i_7] [i_8 - 1]))) : (((arr_12 [i_7]) ? (arr_10 [i_7] [i_8 - 2]) : var_11))));
                }
            }
        }
    }
    var_30 = (!0);
    #pragma endscop
}
