/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((((arr_2 [i_0 - 1] [i_1 + 1]) ? ((min((arr_0 [i_0]), (arr_2 [i_0] [i_1])))) : (((arr_1 [i_0] [i_1]) + (arr_1 [i_0] [i_1])))))) ? (arr_3 [i_0] [12]) : (min((((arr_3 [1] [12]) ? (arr_3 [i_1] [i_1]) : (arr_0 [i_0]))), (max(1, 3939927145))))));
                var_19 = var_14;
                var_20 = (((arr_1 [i_0] [i_0]) != ((~(max((arr_3 [i_0] [1]), var_15))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((arr_8 [i_6]) - ((((((arr_5 [i_2]) ? (arr_15 [i_2] [i_3] [i_6] [i_5] [16]) : (arr_16 [i_2] [1] [i_3] [i_4] [i_4] [i_4] [i_6]))) >= (arr_15 [i_2] [i_2] [i_6] [i_2] [2])))))))));
                                arr_19 [0] [i_3] [i_5] [i_6] |= (min(var_15, (((arr_6 [i_6]) ? (arr_17 [i_2] [2] [i_4] [i_5] [i_6]) : (!var_5)))));
                                var_22 = (max(var_22, -var_9));
                                arr_20 [i_2] [i_3] [i_3] [i_4] [i_3] = (min((!1), (min(355040151, 3939927162))));
                                var_23 = (max(var_23, (((max((arr_18 [i_5] [i_5 - 1] [1] [i_5 - 1] [i_5 - 1] [i_5]), var_9))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_26 [i_2] [i_3] [i_3] [8] [0] = ((((arr_9 [i_2]) && (arr_10 [i_8] [i_7]))) ? ((var_4 * (((arr_11 [i_3] [i_3] [i_3]) & (arr_1 [i_3] [i_7]))))) : (var_12 >= 1));
                            var_24 = var_10;
                            var_25 |= (((~(arr_23 [i_8]))));
                            var_26 = (max(0, 1819762459));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_35 [i_2] [i_10] [i_3] [i_10] [i_10] [i_3] [15] = (594130140 % 1);
                                var_27 += arr_33 [i_9];
                                var_28 |= (arr_29 [i_2] [1] [i_9] [13] [4]);
                                var_29 = (min(var_29, ((var_3 ? 1 : ((((((arr_24 [i_10]) ? var_8 : 1)) != 1348936883)))))));
                                var_30 = (arr_29 [i_2] [i_3] [i_9] [i_10] [i_9]);
                            }
                        }
                    }
                }
                var_31 = (arr_30 [i_3] [i_3] [i_2] [i_3]);
            }
        }
    }
    var_32 |= (var_15 != var_15);
    #pragma endscop
}
