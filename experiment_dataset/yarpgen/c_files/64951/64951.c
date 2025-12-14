/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_8);
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [2] [i_1] [i_0] [8] = ((~((min(1, (arr_5 [i_0 - 1] [i_1] [i_2]))))));
                    var_14 ^= ((((min(-0, (arr_2 [i_2])))) ? (((((arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 1]) != 17)))) : (arr_3 [i_0] [7] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        arr_9 [i_0] = ((~((41 ? 1 : var_2))));
                        arr_10 [i_3 - 1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((~(arr_1 [i_0 + 1])));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_4] = var_8;
                            arr_15 [i_0] [i_0] [i_0 - 1] = (!19130);
                        }
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 6;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_0] = ((799809498 ? (arr_7 [i_0] [i_1] [i_2] [i_5]) : ((min((arr_3 [i_0] [i_6 + 1] [i_6]), -17)))));
                            arr_22 [i_0] [i_0] [i_2] [i_5] [i_2] [i_1] [i_5] = ((~(arr_8 [i_0] [i_6 + 4] [i_2] [i_0 - 1])));
                            var_15 = 499002092;
                            var_16 = (((-(arr_8 [i_0 + 1] [1] [i_2] [i_6 + 2]))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_0] [0] [i_2] [i_2] [i_0] = ((~(arr_18 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [3])));
                            var_17 = (max(var_17, (((-(arr_16 [4] [5] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                            arr_26 [i_1] [i_2] [i_5] [i_0] = (arr_16 [i_0] [6] [i_2] [i_5] [i_0 + 2] [5]);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [6] [i_5] [i_8] |= ((((0 ? ((947426866776274532 ? var_0 : -43)) : 65535)) & (min(((240 / (arr_17 [i_0] [i_1] [i_2] [i_5]))), 2149861227))));
                            arr_32 [i_0] [i_1] [i_2] [i_5] [i_0] [i_5] [i_8] = (((arr_5 [i_1] [i_2] [i_5]) <= (arr_5 [i_0] [5] [1])));
                            var_18 = (max(var_18, 8570769995616710516));
                        }
                        arr_33 [i_0] [i_1] [i_2] [8] [i_0] [i_0] = 1;
                        arr_34 [i_0] = (max(((-((~(arr_2 [i_0]))))), (arr_13 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_0])));
                    }
                    for (int i_9 = 4; i_9 < 8;i_9 += 1)
                    {
                        arr_39 [i_0] = (arr_12 [i_0 - 1] [5] [2] [5] [5]);
                        var_19 = (min(var_19, (((max(-65520, 16))))));
                        arr_40 [i_0] [i_9 - 1] = (arr_29 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_9]);
                    }
                    arr_41 [i_0] [i_1] [i_2] [i_2] = ((((~(((arr_35 [i_2] [i_1] [i_1] [0] [i_0] [0]) >> (((arr_16 [i_0] [i_0] [i_0] [i_0] [8] [1]) - 31140897)))))) <= (min(((min((arr_2 [i_0]), 0))), ((62303 ? 4294967295 : (arr_0 [i_0 + 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
