/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (arr_1 [i_0 + 1] [7]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_18 = min(((((arr_6 [i_2] [i_2 + 2] [i_0 - 1] [i_0]) && (arr_6 [i_2] [i_2 + 2] [i_0 + 2] [i_0])))), (((arr_6 [i_2] [i_2 - 1] [i_0 + 1] [i_0]) ? (arr_6 [i_2 - 1] [i_2 + 2] [i_0 - 1] [i_0]) : 64)));
                            var_19 = (((((-(0 < 64)))) ? (arr_0 [i_3]) : 125829120));
                            arr_11 [i_1] = ((((min((((arr_5 [i_0] [i_0] [i_2 + 1] [i_3]) ? 27222 : var_5)), ((~(arr_8 [i_1] [1])))))) ? ((((!15598231340687986414) < var_3))) : ((var_7 ? var_7 : (arr_6 [i_0] [1] [i_2 + 1] [i_3 + 1])))));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_20 = (max(var_20, ((min(1, (((arr_10 [i_0 + 2] [i_2 + 1]) ? (max(var_6, (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (arr_12 [13] [i_2 + 2] [i_3 + 1] [i_3 + 1] [i_4]))))))));
                                var_21 ^= ((~(((((arr_1 [i_0] [3]) & (arr_1 [i_3] [i_1]))) | (min((arr_13 [i_0] [20]), (arr_4 [7] [7] [15])))))));
                                var_22 = (arr_7 [i_0 - 1] [i_3 + 1] [i_3 + 1]);
                                var_23 = (arr_14 [i_0]);
                                var_24 = (((arr_5 [i_2 + 1] [i_0 + 2] [17] [i_0]) ? (((arr_3 [i_0 + 1] [i_3 + 1]) ? 57600 : (arr_3 [i_0 + 1] [i_3 + 1]))) : ((~(arr_0 [i_0 - 1])))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_25 = ((((((min(32758, (arr_14 [i_1]))) & (arr_0 [i_2])))) ^ ((((32739 ? var_6 : (arr_17 [i_5] [2] [2] [i_0] [i_0] [i_0]))) ^ (~67)))));
                                var_26 = (((arr_4 [i_0 - 1] [i_1] [i_3]) ? ((((~var_11) ? (min((arr_4 [i_0] [5] [i_2]), (arr_6 [i_0] [15] [15] [15]))) : ((var_12 ? (arr_16 [i_5] [i_5] [10] [i_5] [i_5] [i_5] [10]) : 88))))) : (((arr_13 [i_3 + 1] [i_0 + 2]) - 0))));
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                var_27 = (arr_10 [i_0] [i_0]);
                                arr_22 [i_0] [4] [i_2 + 2] [i_3] [i_6] = (((((min((arr_10 [i_0] [i_0]), 65535))) ? (((arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] [i_2]) ? (arr_12 [i_3] [i_3] [i_1] [i_1] [18]) : var_12)) : 3178906617)));
                                var_28 = min((!var_14), var_5);
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                arr_26 [2] [i_1] [i_2] [2] [i_7] [20] [i_7] = 1706172674;
                                arr_27 [21] [21] = (min((~4294967295), (!2199019061248)));
                                arr_28 [11] [i_1] [i_2] [i_2] [i_2] [i_7] = (arr_25 [i_0] [i_2] [i_0]);
                            }
                            var_29 = (min(var_29, ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : 14358)))));
                        }
                    }
                }
            }
        }
    }
    var_30 *= var_15;

    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        arr_32 [i_8] [20] = (arr_15 [i_8] [i_8] [19] [i_8] [i_8] [i_8] [19]);
        var_31 &= ((~(max((arr_13 [i_8 - 1] [i_8]), (3065485673702947165 | var_8)))));
        var_32 = (max(var_32, (((((~(arr_10 [i_8] [i_8 - 1]))) < (arr_10 [i_8 + 1] [i_8 - 1]))))));
        var_33 = (arr_2 [i_8] [i_8]);

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_37 [18] [17] [i_8] = 0;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_42 [i_8] [i_9] [i_10] [i_8] = ((((min((arr_35 [i_9]), 0))) && (~var_3)));
                        var_34 = (arr_9 [i_8] [0] [i_10] [i_11]);
                    }
                }
            }
            arr_43 [i_8] [i_9] = 2216960300;
        }
    }
    var_35 = var_6;
    var_36 = 65535;
    #pragma endscop
}
