/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(var_11, -var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (max((((arr_0 [i_0]) >> ((((~(arr_3 [i_0] [15] [15]))) + 29353)))), (((((((!(arr_1 [i_0] [i_0]))))) >= (((arr_0 [i_0]) - (arr_6 [i_1] [i_1] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3]);
                        arr_10 [i_0] [i_1] [i_3] [i_0] = ((~(((arr_9 [i_0] [9] [i_0] [i_2] [i_2] [9]) & (arr_5 [i_3] [i_0] [12])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_15 = ((-(((arr_4 [i_0]) % (arr_5 [i_0] [i_0] [i_2])))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_5] [i_0] [i_0] [i_1] = (((((arr_13 [i_0] [23] [i_2] [i_2] [i_4] [i_5]) << (arr_12 [i_4] [i_0] [i_0] [i_0]))) << (((!(arr_6 [i_0] [i_1] [i_5]))))));
                            var_16 = (min(var_16, (arr_14 [i_4] [8] [i_2] [2])));
                            arr_16 [i_0] [i_0] [i_1] [15] [i_4] [i_5] = (-((~(arr_8 [i_0] [i_1] [i_2] [i_4]))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [19] [i_2] [13] [i_6] = ((-(arr_6 [6] [6] [6])));
                            arr_21 [i_0] [i_1] [14] [i_1] [i_4] [i_0] = (~((((arr_1 [i_0] [20]) || (arr_19 [i_0] [i_0] [i_2] [12] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_1] [i_0] = ((!(((-(arr_12 [i_0] [i_0] [i_2] [i_4]))))));
                            arr_26 [5] [i_2] [i_2] [i_0] [i_2] = ((~(arr_6 [i_0] [i_0] [i_0])));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(32767 | 2798122603860223824)));
                            var_17 = (max(var_17, (~-114)));
                            var_18 = (min(var_18, ((((((arr_22 [i_0] [i_0] [9] [23] [13]) != (arr_22 [i_0] [i_4] [i_2] [i_0] [i_0])))) << ((((~(arr_4 [i_0]))) - 30))))));
                        }
                        arr_28 [i_0] [i_1] [i_0] [i_4] = ((!(((~(arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]))))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [14] = (max((((((-(arr_5 [i_2] [i_0] [i_2]))) ^ (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [20])))), (((((min((arr_14 [i_0] [i_8] [i_0] [i_0]), (arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [18] [18]))))) & (max((arr_30 [i_0] [i_0] [i_2]), (arr_17 [i_1] [i_1] [i_2] [i_8] [4] [i_0] [i_8])))))));
                            var_19 = (max(var_19, (((~(~32765))))));
                        }
                        arr_36 [i_0] [i_1] [22] [i_0] = ((!(arr_24 [20] [4] [i_2] [i_2] [4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
