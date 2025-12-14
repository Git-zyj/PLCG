/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_18 = (((((((arr_1 [i_0 - 1] [i_1]) ? 4294967295 : var_12)))) ? (((arr_5 [i_2]) ? (((arr_6 [i_0]) + var_7)) : var_14)) : 5));
                                var_19 = ((-((-(arr_1 [i_2 + 1] [i_0 + 3])))));
                                var_20 ^= (((((-(arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] [i_2])))) ? ((-var_14 ? (arr_8 [i_0 + 4] [i_2] [i_3] [i_4 - 1] [i_4]) : -var_9)) : (((-(arr_0 [i_4 + 2]))))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_21 |= (min(((-(arr_10 [i_0] [i_1] [i_0 + 3] [i_2 - 1]))), (((!(arr_10 [i_2] [i_1] [i_0 + 2] [i_2 - 1]))))));
                                var_22 |= (((-65531 * ((-(arr_2 [i_1] [12] [0]))))));
                                arr_15 [i_0] [i_0 + 4] [i_1] [4] [i_0] &= (min(((var_11 >> (((((arr_14 [i_0 + 3] [i_1] [i_1] [i_2] [1] [i_5]) ? (arr_5 [i_1]) : var_7)) + 8574172396112830082)))), var_2));
                                var_23 = (max(var_23, var_10));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_1] [18] [i_3] |= -var_7;
                                var_24 = var_11;
                                var_25 &= (((((-(arr_13 [i_0] [i_0] [4] [4] [i_0])))) ? (arr_12 [14] [i_1] [i_1] [0] [i_2 - 2] [i_6]) : (arr_7 [i_0 - 1] [i_1])));
                                arr_20 [i_2] [i_2] [i_2] [i_3] [i_0] [i_1] = var_9;
                            }
                            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                            {
                                var_26 ^= var_13;
                                var_27 ^= (((-(arr_6 [i_0 + 3]))));
                                var_28 &= -var_10;
                            }
                            var_29 = (min(var_29, (((-(((arr_0 [i_2 + 1]) ? var_5 : ((max(var_15, var_9))))))))));
                            var_30 = var_15;
                            arr_24 [i_3] [8] [i_3] [i_3] &= (-(arr_13 [i_0 + 2] [i_0 + 2] [i_2 - 1] [i_3] [i_2]));
                        }
                    }
                }
                var_31 = ((-((-(arr_12 [i_0] [i_0 + 4] [i_1] [i_1] [i_1] [i_0 + 4])))));
                var_32 = ((((min((((arr_10 [i_0] [8] [i_1] [i_0]) ? var_15 : var_2)), ((min(var_15, 24576)))))) / (arr_21 [i_1] [i_1])));
            }
        }
    }
    var_33 |= ((11660474241505056123 ? -238 : -107));
    var_34 = (min(var_34, var_6));
    var_35 = (min(var_35, ((var_15 ? ((((var_15 ? var_9 : 918156275)))) : -var_9))));
    #pragma endscop
}
