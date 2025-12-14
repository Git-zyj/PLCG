/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -2017735694;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((var_14 ? (((min((arr_1 [i_1]), 1)) ^ ((min(25, 590222979))))) : (arr_2 [i_0] [i_1 - 1] [i_1 + 1]))))));
                var_21 ^= (0 & 2017735702);

                for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = (((0 % var_15) || -2002760990746880149));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 *= (((((-4 ? 11 : var_8))) > 4535743977429366889));
                                arr_13 [3] [3] [i_1 - 1] [3] [3] [i_3] = var_16;
                            }
                        }
                    }
                    var_23 = ((var_18 ? ((min(0, (~0)))) : ((((max(2147483647, var_1))) + -var_12))));
                    var_24 = (min((25 && 2717), (((((4535743977429366893 ? 1898499250 : 20))) || var_14))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_25 = ((arr_9 [i_5 + 2]) ? 13911000096280184715 : 4535743977429366900);

                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_26 = (487570519 != -1463601125);
                        arr_20 [i_1] [i_6] = (~((((arr_2 [i_1] [i_1] [i_1]) >= 65535))));
                        arr_21 [i_0] [3] [3] [i_0] = (arr_18 [i_0] [i_1] [i_5 + 3] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_27 |= 12;
                            arr_27 [i_0] [i_0] [i_5] [i_7] [i_8] = ((((((1252703935810057324 >= (arr_11 [i_0] [i_1 - 1] [i_5] [i_1 - 1] [i_0]))))) == (((var_7 + 9223372036854775807) << (3 - 3)))));
                            var_28 *= (~-1);
                            arr_28 [1] [i_7] &= ((((7 ? 15360 : var_12)) <= 11493));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_29 = 0;
                            var_30 = ((4294967263 != (var_6 | -1898499250)));
                            var_31 = var_11;
                        }
                        var_32 = var_8;
                    }
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_33 = 12;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_34 = (arr_3 [i_1]);
                                arr_40 [i_0] [i_1] [i_11] [i_12 + 1] = 1;
                                var_35 = (min(var_35, 0));
                            }
                        }
                    }
                    arr_41 [i_0] [i_0] [i_0] = -var_5;

                    for (int i_13 = 4; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_45 [i_0] [i_1] [i_10 - 2] [i_13 + 1] = ((-(~127)));
                        var_36 = 1898499250;
                        var_37 = (max(var_37, var_12));
                    }
                    for (int i_14 = 4; i_14 < 13;i_14 += 1) /* same iter space */
                    {
                        var_38 = -118;
                        var_39 = (max(((((min(var_0, var_17))) ? var_2 : ((max(0, var_8))))), ((((~5689) ? (max(var_6, var_14)) : (((var_16 > (arr_1 [10])))))))));
                    }
                }
                for (int i_15 = 2; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    var_40 ^= (((((1463601124 ? -7251809224797720368 : 11))) && (arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] [i_15])));
                    arr_51 [i_1 - 1] [i_1] [i_1] = var_17;
                    arr_52 [i_0] [i_0] [i_0] = ((!(((((max(378269043, var_13))) ? (((0 ? (arr_2 [i_0] [i_0] [i_0]) : 16))) : (max(116, -5329629334317153272)))))));
                }
            }
        }
    }
    var_41 = ((min((!var_0), 20)));
    #pragma endscop
}
