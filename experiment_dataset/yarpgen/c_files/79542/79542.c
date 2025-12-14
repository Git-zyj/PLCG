/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(4294967281, 255));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = 2097151;
        var_19 = var_15;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (max(4292870175, (~var_3)));
        var_20 = (arr_4 [12]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2 - 2] |= ((-(arr_8 [i_2 + 1])));
        arr_11 [12] &= ((((1 << (var_6 + 61)))) ^ 2097120);
        arr_12 [i_2 + 3] [i_2] = ((~(arr_8 [i_2 + 1])));
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                var_21 = max((((arr_15 [i_5 - 1]) ? (arr_15 [i_5 + 1]) : var_11)), -7930);
                arr_19 [i_3] [i_4] [i_4] [i_4] |= (((arr_14 [i_3]) ? (min(((~(arr_8 [i_4]))), ((((arr_14 [i_4]) > (arr_13 [i_3] [i_5])))))) : (((arr_7 [i_3 + 1]) ? (arr_4 [i_3]) : var_5))));
                arr_20 [i_5] [1] = (~4292870189);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_22 = ((var_6 | (-117 > var_16)));
                            var_23 = ((~(arr_26 [i_3] [i_6] [i_6] [7] [i_8] [i_8])));
                            arr_31 [i_6] [i_6] [i_8 + 3] = (((arr_18 [i_6]) ? 4292870163 : 0));
                            var_24 = (((arr_7 [i_3 + 3]) > (arr_9 [i_8 + 3])));
                        }
                    }
                }
                arr_32 [i_3] [i_4] [i_6] = ((4434726936708772053 ? 4294967282 : 2089152316));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_37 [i_6] [i_4] = ((((((arr_24 [1] [i_9] [i_6] [7] [7]) ^ (arr_27 [i_6] [i_10])))) ? var_7 : (arr_18 [i_6])));
                            var_25 = (min(var_25, ((((arr_22 [i_4] [i_4]) ? (arr_22 [i_3] [i_3]) : (arr_22 [i_3] [i_3]))))));
                            var_26 = (var_5 | 3619152058);
                        }
                    }
                }
            }
            var_27 += (min(((-(arr_2 [i_3 + 2]))), ((((~8796093022207) != (arr_9 [i_3 + 1]))))));
        }
        arr_38 [i_3] = (((((-((-(arr_2 [0])))))) ? (arr_25 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3]) : ((-(arr_6 [i_3 + 2] [i_3 + 2])))));
    }
    #pragma endscop
}
