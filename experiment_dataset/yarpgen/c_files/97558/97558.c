/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!var_2) < var_0);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (((var_10 ? (arr_2 [13]) : -115)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = 1;
                    arr_9 [0] [i_1] [i_2] = var_12;
                }
            }
        }
        var_19 |= var_9;
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] &= arr_0 [i_3 - 1];
        arr_13 [i_3] = (((var_8 ? (min((arr_6 [11] [i_3 + 1] [15] [i_3 + 2]), 6332164177320534759)) : (arr_1 [i_3 + 2]))));
        arr_14 [13] = (((((8696100449240842694 < ((max(355221090, 3259554135))))))) ^ 1072711468);
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_20 = ((~(arr_5 [i_8] [3] [i_6])));
                                var_21 = (!((((arr_26 [i_8 - 2] [i_5 - 1] [15] [i_4 + 1] [15]) ? (~var_15) : (max((arr_7 [10] [i_5] [i_6]), var_7))))));
                            }
                        }
                    }
                    arr_28 [i_4] [9] [i_4] = (((((-(arr_7 [i_6] [i_4] [i_4])))) ? (max((arr_24 [12] [i_4 + 1] [i_5 - 2] [i_5 + 1] [11]), (arr_24 [i_4] [i_4 + 1] [i_5 - 2] [i_5 + 1] [i_5]))) : ((((!(arr_0 [i_4])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_22 = (arr_15 [i_4]);
                        arr_38 [10] [i_4] [i_4] [11] [11] [9] = (arr_2 [22]);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_23 = (max((((arr_35 [i_13 - 1] [i_9 - 1] [i_10] [i_9] [i_4 - 1]) * (arr_35 [i_13 + 1] [i_9 - 3] [i_9 - 3] [i_12] [i_4 - 1]))), (!var_11)));
                                var_24 = (min(var_24, (~var_4)));
                                arr_43 [i_4] [i_4] [i_4] [i_4] [i_13 + 1] = (arr_3 [1] [i_10] [i_4]);
                                var_25 *= (arr_5 [i_10] [20] [i_13]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_26 = (~var_6);
                                arr_49 [i_4] [i_4] = (((((((9061450633647765684 ? var_8 : 1208618541)) + (arr_40 [5] [i_4] [i_4] [i_4])))) ? ((((var_4 == var_15) > ((-(arr_1 [i_4 + 1])))))) : (((((max((arr_40 [0] [i_9] [0] [15]), var_6))) == (min(var_9, (arr_4 [i_10] [i_9 - 2]))))))));
                                var_27 = (max(4294967272, 2289328063));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
