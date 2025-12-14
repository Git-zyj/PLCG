/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_13 = -4348;
                            var_14 = (min(var_14, (((((((arr_4 [i_3] [i_3]) ? (arr_15 [12] [i_2] [i_1] [2]) : 4075670413875725254))) ? var_2 : (arr_1 [i_4 + 3] [i_1]))))));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_15 = (arr_17 [i_5 + 3] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1]);
                            arr_18 [i_0] = (max(((((~(arr_16 [i_0] [15] [i_2] [i_2] [i_3] [i_5]))) - (!0))), (((((arr_4 [i_3] [i_5]) && (arr_0 [i_3] [i_0]))) ? ((((arr_16 [i_2] [i_1] [i_2] [i_2] [i_5 + 1] [i_0]) >= (arr_11 [9] [i_1] [9] [9])))) : 1))));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_6] = ((!(arr_9 [i_0] [i_1] [i_2])));
                            var_16 -= (((arr_17 [i_1] [i_1] [13] [i_6 + 3] [i_6 + 3] [i_6 + 2] [i_6]) ? (((arr_17 [i_0] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_0]) ? (arr_2 [i_6 + 2]) : (arr_17 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6] [i_6]))) : (arr_2 [i_6 + 1])));
                        }
                        var_17 = (max(var_17, ((((((~((-9223372036854775804 ? var_3 : 1))))) ? (arr_13 [i_3] [i_3]) : var_10)))));
                        arr_22 [i_0] [i_1] [i_1] [i_3] = ((~(max(((-(arr_2 [i_1]))), ((min(var_0, var_9)))))));

                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_18 = ((((-var_3 ^ ((((arr_17 [i_0] [i_2] [i_2] [13] [i_7] [i_0] [13]) ? var_10 : 1))))) != 2834203726));
                            var_19 = -1;
                            var_20 = (max((((arr_20 [i_1] [i_7 - 2] [i_7 + 1] [i_7] [i_7 - 2]) ? (arr_20 [i_2] [i_3] [i_7 + 1] [i_7] [i_7 + 1]) : 1)), ((((arr_12 [1] [i_0]) ? (arr_23 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7] [i_7]) : ((464775102 ? 1 : 8191)))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_21 |= (((arr_3 [i_8 - 2]) ? ((((!(arr_14 [i_3]))))) : (((arr_1 [i_0] [i_1]) ? 171 : (arr_20 [i_8] [i_8] [i_8 - 2] [i_8 + 3] [i_8 + 3])))));
                            var_22 = (((((arr_2 [i_0]) ? (arr_11 [i_2] [i_2] [i_2] [i_3]) : var_7)) < 15985));
                        }
                        arr_27 [3] [3] [i_0] [i_0] [3] = (8191 && 1);
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_30 [i_0] = 2890728511;
            var_23 = (min(var_23, (((8693629203426319623 ? (max(((min((arr_7 [i_0] [10] [i_9]), 6607))), 274877906943)) : -4360)))));
            var_24 = max((((arr_12 [i_0] [i_0]) > (((min(-4370, (arr_10 [i_0] [i_0] [i_0] [i_9] [i_0]))))))), (arr_11 [11] [9] [11] [i_9]));
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] = (arr_3 [i_10]);
        var_25 &= (!var_2);
        var_26 = (1 ^ ((((max((arr_19 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_15 [i_10] [i_10] [i_10] [i_10])))) ? (arr_12 [i_10] [i_10]) : ((9011820702367107616 ? 8619431259567200196 : 18446744073709551599)))));
        var_27 = (arr_3 [i_10]);
        var_28 = var_12;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = var_7;
        var_29 = -108;
        var_30 = ((1 ? (arr_31 [10] [14]) : (((((arr_14 [i_11]) < (arr_14 [i_11])))))));
    }
    var_31 = (var_8 > 2834203726);
    #pragma endscop
}
