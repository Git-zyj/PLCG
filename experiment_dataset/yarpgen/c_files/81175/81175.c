/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 0;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_17 *= 33;
                            var_18 = (min(var_18, (((!(var_1 | var_13))))));
                            arr_13 [i_0] = ((-var_6 | ((2920910434883952909 ? 42026 : var_12))));
                            arr_14 [i_0] [i_0] [i_0] = var_4;
                            arr_15 [i_0] [i_1] [i_2] [0] = var_12;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2 - 1] [i_0] = (((42019 / var_2) ? ((((arr_16 [i_5] [i_3] [i_2] [i_1 - 1] [i_0]) + 245))) : (var_2 + var_2)));
                            arr_19 [7] [i_1] [i_2 - 1] [7] [i_1] = (((((var_2 ? var_13 : 23529))) ? var_10 : (((23499 ? 1 : 1586982057)))));
                        }
                        var_19 *= (min(-var_7, (((-(arr_11 [5] [i_3] [i_2] [3] [i_1 + 1] [3]))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_20 ^= var_1;
                        arr_23 [i_6] [i_2] [i_0] [i_1] [i_0] [i_0] = ((-67 < ((-(arr_17 [i_2 - 1] [i_1])))));
                        var_21 = ((((((arr_9 [3] [i_2 + 1] [i_2 - 1] [i_2 + 1]) | (arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])))) ? ((((arr_9 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? var_6 : (arr_5 [i_2] [i_2 + 1] [i_2 - 1])))) : ((var_15 ? (arr_5 [i_2] [i_2 + 1] [i_2 - 1]) : var_13))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_22 = 182;
                        var_23 = ((!(((42034 ? (arr_12 [i_7] [i_0] [i_0] [i_1] [i_0]) : -650292604)))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] = 16633822852841650437;
                        var_24 = (max(var_24, ((min(81, (min((arr_26 [i_8] [i_0] [i_1] [i_0]), (max((arr_24 [8] [7] [i_2 + 1] [i_8] [i_0]), (arr_12 [i_0] [i_1] [9] [9] [i_8]))))))))));
                    }
                    var_25 = -2920910434883952886;
                    arr_31 [i_0] [8] [i_2] = ((((((max(5, 59430656))) ? 59430661 : 1))) && ((min(var_8, (max((arr_2 [i_2]), var_5))))));
                }
            }
        }
    }
    var_26 = var_13;
    #pragma endscop
}
