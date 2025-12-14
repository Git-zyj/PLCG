/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_0])));
        var_18 = (max(var_18, var_11));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = (min(var_19, (((((!(arr_4 [i_1]))) ? (arr_3 [i_1 - 1]) : (((arr_2 [i_1]) * (arr_5 [i_1]))))))));
        arr_6 [i_1] = ((~(arr_2 [i_1 + 3])));
        arr_7 [i_1] = (arr_3 [18]);
        arr_8 [i_1] = (((arr_2 [i_1 + 3]) ^ (arr_2 [i_1 + 1])));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2 + 1] = (arr_9 [i_2]);
        var_20 = (arr_2 [i_2]);
        arr_12 [3] [16] = (min(var_5, (arr_2 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, ((max((((arr_17 [i_3 - 1] [i_3 + 1] [0]) % (arr_15 [i_3 - 1] [0] [i_3 - 1]))), ((((arr_13 [i_2 - 1]) || (arr_13 [i_2 - 1])))))))));
                            var_22 = (arr_16 [i_6]);
                        }
                        for (int i_7 = 4; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_2 - 1] [i_3 - 1] [i_2 - 1] [9] [i_4] [i_7 - 4] = ((~(((var_7 * (arr_19 [i_7 + 2] [10]))))));
                            arr_26 [0] [8] [i_4 + 1] [i_4] [i_4] &= (arr_2 [i_7 - 4]);
                        }

                        for (int i_8 = 4; i_8 < 17;i_8 += 1)
                        {
                            var_23 += (((arr_17 [13] [i_4] [i_4]) ? (arr_15 [i_2 - 1] [10] [i_8 - 1]) : (arr_19 [i_5 + 2] [i_2 + 1])));
                            var_24 = (max(var_24, (arr_2 [i_5 - 1])));
                            var_25 = (min(var_10, (((!(arr_19 [i_2 + 1] [i_2 + 1]))))));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_4] [i_5] [13] = (arr_17 [i_9] [i_5 + 4] [12]);
                            var_26 = (arr_24 [i_2 + 1] [i_2] [i_3] [i_3] [i_3 + 1] [i_3] [i_9]);
                            arr_32 [i_2] [i_3] [1] [i_4] [i_3] = (arr_20 [i_4] [i_2] [i_2 - 1] [i_4]);
                            var_27 = (min(var_27, (((+(((arr_20 [1] [i_3] [16] [0]) ? (arr_14 [i_5 + 4]) : (min((arr_17 [i_2 + 1] [7] [i_2 + 1]), (arr_30 [16] [16] [i_4] [0]))))))))));
                        }
                    }
                    var_28 *= var_15;
                }
            }
        }
    }
    var_29 = (((min(var_6, var_14)) != (var_7 <= var_1)));
    var_30 = ((!(var_3 >= var_10)));
    #pragma endscop
}
