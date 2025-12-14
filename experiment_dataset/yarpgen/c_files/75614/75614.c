/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? var_1 : -var_10));
    var_13 = (max(var_13, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= ((((281466386776064 || (arr_1 [i_0] [i_0])))));
        var_14 = ((!(arr_2 [i_0 - 1] [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (arr_1 [i_0] [i_2]);
                    arr_10 [i_2] [i_1 - 2] [i_1] [i_2] = (254897691 >= 2809598425);
                    arr_11 [i_2] [i_2] = (arr_5 [i_0 - 1]);
                    arr_12 [i_2] [i_1 + 2] [i_2] = ((+(((arr_5 [i_0]) ? var_2 : (arr_7 [i_2])))));
                    var_16 -= (((arr_6 [0] [i_1] [i_2]) ? (arr_9 [2] [i_1 + 2] [i_1 - 1]) : ((var_3 ? (arr_8 [i_2] [i_1] [i_0]) : 9223372036854775808))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        var_17 *= (arr_18 [i_4]);
                        var_18 = var_11;
                        arr_22 [i_3] [i_3] [i_5] [i_5] [i_5] [i_6] = ((+(min((arr_14 [i_6 + 2]), (((arr_14 [i_3 - 1]) ? var_1 : (arr_19 [i_5] [i_6 + 1])))))));

                        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_3] [i_4] [i_5] [11] [i_5] = (arr_26 [i_3] [i_5] [i_4] [i_5] [i_5] [15] [i_7]);
                            var_19 = (((((var_6 ? var_10 : (arr_16 [i_3 + 1])))) ? (arr_16 [i_3 - 1]) : (arr_16 [i_3 - 1])));
                        }
                        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, ((((((((arr_14 [16]) ? (arr_24 [i_3] [i_4] [i_5] [i_4] [i_8 + 1]) : (arr_25 [i_3 - 1] [i_3] [i_4] [i_3] [i_3] [i_3])))) ? (min(var_2, (arr_24 [i_3 - 1] [i_4] [i_5] [i_4] [i_8]))) : ((var_1 ? var_9 : -106))))))));
                            arr_30 [i_3] [i_3] [i_5] [i_6] = var_2;
                        }
                        for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_21 = (max((((max(var_1, (arr_26 [i_3] [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_9] [i_5]))))), (arr_16 [i_5])));
                            var_22 |= ((-(min(var_1, (arr_17 [9] [20])))));
                            var_23 ^= (min((min((arr_33 [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 2] [i_9 - 1]), (arr_26 [i_9] [i_4] [i_9] [i_9 - 2] [i_9 - 2] [i_9] [i_9 + 1]))), ((((arr_21 [i_9 + 3] [i_9 + 3] [18] [i_9 - 1] [i_9 - 1] [i_9 - 3]) <= var_3)))));
                            var_24 = ((9591598230594701645 ? ((((var_10 <= (((arr_26 [2] [i_5] [14] [4] [i_5] [i_3] [i_3]) ? (arr_13 [i_3]) : var_8)))))) : ((((min((arr_23 [19] [i_4] [8] [8] [i_9]), (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? ((((!(arr_24 [i_3 + 1] [i_4] [i_5] [i_5] [i_9]))))) : var_5))));
                        }
                        for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_3] [i_3 + 1] [i_3 + 1] [i_5] [i_3] [i_3] = (((min(var_3, var_7))));
                            arr_37 [i_10 + 3] [i_6] [i_5] [i_4] [i_5] [i_3] [i_3] = (min((!var_10), var_11));
                            var_25 = ((-((~(arr_21 [i_3 - 1] [i_4] [i_5] [i_4] [i_6 + 2] [i_10 + 1])))));
                        }
                    }
                }
            }
        }
        var_26 = ((((!(arr_23 [i_3] [i_3] [i_3 + 1] [i_3] [i_3]))) ? var_4 : ((min(116, (arr_13 [5]))))));
        arr_38 [i_3] [i_3] = (var_2 + 460634064);
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    arr_45 [i_13] = ((!(arr_42 [i_11])));
                    arr_46 [i_11] [i_12] [i_12] |= var_0;
                }
            }
        }
        var_27 = (max(var_27, ((((((!var_1) ? (arr_24 [i_11] [i_11] [i_11] [2] [i_11]) : var_4))) ? (arr_15 [i_11]) : ((((min((arr_41 [i_11]), var_0))) ? (((arr_17 [i_11] [i_11]) ? var_6 : (arr_24 [i_11] [4] [i_11] [4] [i_11]))) : (arr_17 [i_11] [i_11])))))));
        arr_47 [i_11] [i_11] = (arr_42 [i_11]);
    }
    var_28 = ((((var_3 ? var_2 : (!var_11))) - (min(((var_2 ? var_0 : var_7)), var_1))));
    var_29 = ((max((9223372036854775810 || var_4), (var_2 || 9223372036854775809))));
    #pragma endscop
}
