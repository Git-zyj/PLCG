/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 != (((((var_16 ? var_5 : -4125540509262501965))) ? 1006632960 : (min(var_1, var_6))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (-(arr_0 [i_0 + 1]));
        var_20 = (arr_1 [i_0] [16]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 7;i_5 += 1)
                        {
                            {
                                var_21 = (arr_12 [i_5 + 1] [i_2] [i_2] [i_5 + 3] [i_5 + 1] [6]);
                                arr_18 [i_1] [i_1] [i_1] [i_3] [i_4] [i_5] = (((((~(~3288334336)))) ? 30990 : ((max((!var_7), 1006632956)))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_2] |= (min((arr_0 [i_2 + 1]), ((((min((arr_8 [i_1] [i_2]), 7150589354797154736))) ? (arr_8 [i_1] [i_2 + 3]) : ((~(arr_14 [i_1])))))));

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_22 = ((215 << ((((((var_8 % (arr_13 [i_6]))) * (arr_7 [i_6] [i_6]))) - 7867))));
                    var_23 = (max((((arr_11 [i_2 - 1] [5] [5]) < (arr_11 [i_2 - 1] [i_2] [i_2]))), ((((var_8 ? 40 : var_13)) >= (((-(arr_22 [5] [i_1]))))))));
                    var_24 = var_14;
                    var_25 = ((((4035225266123964416 | (arr_6 [i_1] [3])))) ? (arr_1 [i_1] [i_1]) : (arr_8 [i_1] [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
