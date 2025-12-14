/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_13 <= var_9) ? ((1 ? 0 : var_0)) : var_0)) > ((max(1, 1)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_18 ^= (((((-4231 ? (arr_4 [i_0] [8]) : 0))) ? ((var_8 ? 0 : (arr_5 [i_0] [i_0]))) : (~222)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (max(var_19, (((var_5 ? ((1 ? -60 : 36)) : (!45182))))));
                            var_20 = ((~(arr_10 [i_4] [i_2] [i_2] [i_1])));
                        }
                        var_21 *= ((var_7 ? (arr_10 [i_1 - 1] [i_1 + 1] [i_3 - 1] [1]) : ((var_12 - (arr_3 [i_0])))));
                        var_22 = ((var_5 ? ((var_9 ? 199 : var_6)) : ((var_14 ? (arr_2 [i_3]) : -26))));

                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_20 [i_0] [10] [i_0] [i_3] [i_5] &= ((var_12 ? -1562466459 : var_14));
                            var_23 -= -1048129338;
                            arr_21 [1] [i_1] [i_1 - 1] [i_2] [i_5] [i_5] = ((((var_10 ? 44 : var_0)) % (~219)));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_24 = (max(var_24, (((((var_9 ? var_12 : var_4)) * ((((!(arr_5 [i_2] [i_2]))))))))));
                            var_25 = ((1 ? 1 : (-9223372036854775807 - 1)));
                            var_26 = (max(var_26, (((var_6 ^ (arr_10 [i_0] [i_3 + 1] [i_1 - 1] [i_6 - 1]))))));
                            var_27 -= ((((0 ? 9223372036854775807 : 223)) ^ ((((arr_15 [i_6] [i_1] [i_6] [i_6] [i_6] [5] [i_3]) ? var_3 : var_16)))));
                        }
                        arr_24 [i_0] = (((arr_8 [i_1 - 1] [i_3 + 2]) ? var_7 : ((30 ? var_0 : (arr_1 [8])))));
                    }
                }
            }
            arr_25 [i_0] [i_1] [i_1] = (15 != 106);
            var_28 = ((((((arr_12 [i_0] [8] [i_0] [i_0] [i_0]) ? var_14 : (-127 - 1)))) || (var_11 & var_11)));
            var_29 ^= (var_12 % (arr_22 [i_1 - 3] [i_1] [i_0] [i_0]));
        }
        arr_26 [i_0] = 16984;
    }
    #pragma endscop
}
