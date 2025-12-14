/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_17 = ((~((var_7 ? (arr_3 [i_1 + 2]) : (arr_3 [i_0])))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_18 = (345424386 >= -690);
                        arr_11 [i_0] [i_1] [9] = ((~((var_15 ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 - 3])))));
                        var_19 = (min(((32384 + (((arr_9 [i_0] [i_1] [i_2] [i_3]) + var_9)))), ((((-32767 - 1) ? ((min((arr_8 [3] [3] [i_2] [5]), (arr_10 [i_1] [i_1 + 2] [0])))) : (min((arr_4 [i_1] [i_2] [i_1]), 3254064329929665074)))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_20 = -8872343694217857023;
                        var_21 = ((((1444108897001752892 ? (arr_10 [i_2] [1] [i_2 - 2]) : (arr_10 [i_0] [i_1] [i_2 - 2]))) >= ((min((arr_10 [i_2] [i_2] [i_2 - 2]), (arr_10 [i_0] [i_1] [i_2 - 1]))))));
                        var_22 &= (max((((((arr_8 [i_0] [i_0] [i_0] [3]) + var_12)))), (((arr_10 [i_1 - 1] [i_1] [i_1 + 1]) * (-32767 - 1)))));
                        var_23 &= 256;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_19 [0] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] = ((max(-var_8, var_0)));
                            var_24 += 8160;
                        }
                        var_25 = var_0;
                        var_26 = ((3908547717 * (min((arr_7 [i_1 + 1] [i_1 + 1]), (max((arr_9 [i_0] [i_0] [i_0] [i_0]), 1065353216))))));
                    }
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_27 = var_0;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_8] [i_7] [i_8] [i_9] [i_9] = (arr_23 [6]);
                                var_28 = (((((arr_26 [i_9 + 2] [i_8] [4] [i_9] [i_9]) >= var_6)) ? (arr_26 [i_9 - 1] [i_8] [i_9] [i_9] [i_9]) : (arr_26 [i_9 + 1] [i_8] [i_9] [i_9 + 2] [i_9])));
                                var_29 = (min(var_29, (arr_14 [i_0] [i_0] [i_0] [i_0])));
                                var_30 = (~var_10);
                                arr_28 [i_0] [i_8] [i_0] [i_0] [i_0] = ((8875735508908874582 ? 6917695474231485200 : (((min((arr_18 [i_9 + 2] [i_7 - 3] [i_1 + 2] [i_1 - 1] [i_0]), (arr_18 [i_9 + 1] [i_7 - 3] [i_1 + 2] [i_1 - 3] [i_0])))))));
                            }
                        }
                    }
                    var_31 *= (((((1065353216 ? (arr_15 [i_7 - 1] [i_1 + 2] [i_1 + 2]) : (arr_15 [i_7 - 1] [i_1 - 1] [i_0])))) ? (((min((min(1, (arr_2 [i_0]))), ((((arr_7 [i_0] [i_7]) <= (arr_22 [i_0] [i_1] [i_7] [6])))))))) : (((((((arr_0 [i_0]) >= (arr_0 [i_7]))))) * -7255732157648526884))));
                }
                var_32 = (((-(arr_9 [i_0] [i_1] [i_1 + 2] [i_0]))));
                var_33 = (!var_3);
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_36 [6] [i_0] [i_10] [i_11] [i_1 - 3] [i_10] [i_12] = var_11;
                                var_34 = (arr_13 [i_0] [2] [i_0] [i_0] [3] [i_0]);
                                var_35 = var_15;
                                var_36 = (min(var_15, (var_12 != 1)));
                                var_37 = (min(var_37, ((((((((min(var_13, var_15))) ? (arr_0 [i_10]) : (arr_5 [2] [2])))) >= (min((min(var_14, (arr_22 [i_0] [i_0] [i_0] [i_0]))), (((1 ? var_6 : var_12))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 += var_14;
    #pragma endscop
}
