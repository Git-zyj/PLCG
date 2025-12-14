/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (min(var_11, ((max(var_3, -3013969046607003479)))));
    var_12 |= (var_5 >= var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_13 = (arr_2 [i_0] [i_2]);
                    var_14 = ((((arr_0 [i_2 + 1]) / (arr_4 [i_2 + 1]))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_15 = (((arr_12 [2] [i_5 + 1] [1] [3] [i_3]) / (arr_12 [i_3] [i_5 + 1] [i_1] [i_3] [i_1])));
                                var_16 = ((-(arr_2 [i_0] [i_0])));
                                var_17 = (max(var_17, (arr_10 [i_5 + 1])));
                                var_18 = (arr_13 [i_0] [i_1] [7] [i_0] [i_0] [i_3]);
                            }
                        }
                    }
                    var_19 = (arr_0 [i_3]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_19 [i_0] [i_1] [i_1] [i_6] = (arr_10 [13]);
                    arr_20 [i_0] = (arr_10 [i_0]);
                    var_20 = (((arr_7 [i_0] [i_1] [i_6] [i_1]) ? (arr_7 [i_0] [i_0] [i_1] [i_6]) : (arr_7 [i_0] [i_1] [i_6] [i_6])));
                    var_21 = (!6252284686129075718);
                    var_22 = (arr_18 [i_6] [i_0]);
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (arr_8 [i_7] [i_1] [i_0])));
                    var_24 = (arr_15 [i_7] [i_1] [i_0]);
                    arr_24 [7] [i_1] [i_1] [i_7] = -104;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_25 = (max(((((arr_25 [i_0] [i_0] [i_0] [i_0]) / 16383))), ((((arr_13 [i_0] [8] [i_1] [2] [2] [i_1]) / (arr_7 [i_8] [i_1] [i_0] [i_0]))))));
                    var_26 = 52225;
                    arr_29 [i_8] = (arr_27 [i_1] [i_0]);
                    var_27 = (((var_3 >> (((min(404640573, 3394768339094559568)) - 404640572)))));
                    arr_30 [i_0] [i_0] [i_0] [i_8] = ((((((!((max((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_1] [i_8] [i_8])))))))) >= -3641930757936280243));
                }
                arr_31 [5] [i_1] [i_0] = 0;
            }
        }
    }
    #pragma endscop
}
