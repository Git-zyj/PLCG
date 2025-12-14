/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        var_14 = (min(var_14, (((-(((arr_3 [i_0] [i_0]) - ((((arr_0 [18]) == (arr_3 [i_0] [i_0])))))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 = (((((((min((arr_8 [11]), (arr_7 [9] [i_1])))) | ((((arr_1 [i_1]) || (arr_6 [i_1]))))))) ? ((((min((arr_3 [i_1] [i_1]), (arr_6 [i_1]))) <= (min((arr_6 [i_1]), (arr_0 [i_1])))))) : (((!((max((arr_5 [12]), (arr_7 [18] [i_1])))))))));
        var_16 ^= (max((((((arr_6 [i_1]) || (arr_5 [i_1]))) ? ((min(47793, 21196))) : ((min((arr_7 [i_1] [i_1]), (arr_5 [i_1])))))), (((((max((arr_3 [i_1] [i_1]), (arr_8 [i_1])))) >= (((arr_2 [i_1]) ? (arr_2 [16]) : (arr_5 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_2] [i_4] [i_5] = (((((max((arr_20 [i_5] [3] [i_5] [i_4 - 2]), (arr_20 [i_5] [i_5 + 3] [18] [i_4 - 1]))))) == (((((arr_15 [i_2]) - (arr_5 [i_5]))) - (((-(arr_16 [i_2] [i_5 + 1] [i_2] [i_3]))))))));
                        var_17 = ((((~(max((arr_17 [i_5] [i_4] [i_3]), (arr_5 [i_2]))))) != (max((max((arr_6 [i_2]), (arr_8 [i_4]))), ((((arr_11 [i_5]) || (arr_5 [8]))))))));
                    }
                }
            }
        }
        arr_22 [i_2] = (((arr_6 [i_2]) >= (arr_15 [i_2])));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_32 [i_2] [i_2] [i_2] [i_2] [1] [i_2] = (arr_23 [i_8]);

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_35 [0] [i_6] [i_2] [i_6] [i_6] [i_6] [i_6] = (((arr_26 [i_6] [i_6 - 3] [i_7 + 1] [i_8]) % (arr_26 [i_2] [i_6 + 2] [i_7 + 1] [i_8])));
                            arr_36 [i_2] [19] [i_7] [i_2] [i_9] = ((~((((arr_18 [i_8] [i_7] [i_6] [i_2]) < (arr_28 [11] [i_2] [i_8]))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, (((-21196 >= (21191 / -2804435890661474563))))));
                            var_19 = ((~(((((arr_15 [i_2]) + (arr_8 [i_2]))) & (((max((arr_24 [i_6]), (arr_28 [i_2] [i_2] [i_7 - 4])))))))));
                            arr_39 [i_10] [i_2] [17] [i_2] [i_2] = (max(18446744073709551615, 8));
                        }
                        var_20 = ((~(((arr_16 [i_2] [i_6] [i_2] [19]) | (arr_30 [i_2] [i_6] [i_7 + 3] [i_8] [i_7] [i_8])))));
                        var_21 ^= ((~(((((min((arr_3 [i_2] [i_6]), (arr_27 [i_8] [i_7] [i_2]))))) % (arr_10 [8])))));
                        var_22 = (((arr_25 [i_6 + 1] [i_2]) < ((((arr_25 [i_6 + 1] [1]) ? (arr_20 [i_7 + 1] [i_7 - 4] [i_6 + 1] [i_6]) : (arr_20 [i_7 + 1] [i_7 - 4] [i_6 + 1] [i_2]))))));
                    }
                }
            }
        }
        var_23 = ((((((arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) || (arr_15 [i_2]))) ? (((arr_19 [i_2] [i_2]) / (arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((arr_24 [i_2]) - (arr_19 [i_2] [i_2]))))));
        var_24 = (max((max((arr_28 [i_2] [i_2] [i_2]), (arr_26 [i_2] [i_2] [i_2] [i_2]))), ((((((arr_9 [i_2] [17]) - (arr_10 [i_2]))) == ((min((arr_10 [i_2]), (arr_30 [15] [i_2] [14] [i_2] [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_42 [i_11] [i_11] = (arr_1 [i_11]);
        arr_43 [3] = ((+(((arr_24 [i_11]) ? (arr_28 [i_11] [6] [i_11]) : (arr_9 [i_11] [i_11])))));
        var_25 = ((~(arr_27 [i_11] [i_11] [i_11])));
    }
    var_26 = var_4;
    #pragma endscop
}
