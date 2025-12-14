/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_10 = (max(var_10, -1));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_11 = (max(var_11, 511));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_12 = (max(var_12, ((((arr_8 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0]) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) : 1)))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = 8191;
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_0] = (arr_15 [i_0]);
                        arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = (arr_0 [i_0]);
                        arr_19 [8] [i_1] [i_2] [i_0] [i_0] [i_2] = (arr_1 [i_0]);
                    }
                    var_13 = (max(var_13, (arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [8])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_6] [i_6] = (((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]) >= (arr_12 [i_0] [i_1] [i_1] [i_6] [i_1])));
                    arr_23 [i_0] [i_0] = (((arr_0 [i_0]) && (arr_4 [i_0] [i_0])));
                    var_14 = ((((((arr_21 [i_0] [i_1] [i_6] [i_0]) ? (arr_5 [i_0]) : var_7))) ? var_0 : ((8211 ? (arr_4 [i_1] [i_1]) : var_6))));
                }

                /* vectorizable */
                for (int i_7 = 4; i_7 < 14;i_7 += 1)
                {
                    var_15 = var_6;
                    var_16 = -2015246257;

                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_17 = (max(var_17, 2015246257));
                            var_18 = var_8;
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_1] [i_0] [i_8] [i_10] [1] = (((arr_11 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_10]) ^ (arr_11 [i_0] [i_0] [i_8 + 2] [i_0] [10] [i_10] [i_10])));
                            var_19 = (((((arr_16 [i_0] [i_0] [i_0] [i_0]) == (arr_4 [i_7] [i_8]))) ? -11409 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_20 = (((2015246240 != 127) ? (((var_0 << (((-13780 + 13806) - 12))))) : (arr_29 [i_0] [i_0] [i_0] [i_1] [1] [i_8 - 1] [i_8 - 1])));
                        var_21 *= 4289185760;
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_22 = (arr_16 [i_0] [i_0] [i_0] [6]);
                        var_23 += (arr_34 [i_7 - 3] [i_1] [i_7 - 3] [i_1] [i_1]);
                        var_24 = (((var_9 >= var_1) | var_7));

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_25 = (arr_3 [i_0] [i_7 - 4]);
                            var_26 = ((127 >> (((arr_28 [i_1] [i_7 - 2] [2] [i_7 + 1] [i_1] [i_7 - 4]) - 815750161))));
                            arr_38 [i_0] [i_11] [i_0] = arr_24 [i_12] [i_0];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_27 = 21476;
                                var_28 = (max(var_28, (-7662493609536949765 - 45537)));
                                arr_48 [i_0] [i_0] [4] [i_0] = ((-2015246257 * (211 >> 15)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (4294967295 - 3946306693);
    var_30 -= ((((max(3946306693, -1))) ? -1 : ((14308 ? 8191 : var_5))));
    #pragma endscop
}
