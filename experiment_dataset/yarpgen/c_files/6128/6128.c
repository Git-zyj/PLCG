/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = ((((var_12 + (arr_2 [i_0] [i_0])))) ^ var_1);
        var_19 = (min(var_19, var_17));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_0 [i_1]);
        var_21 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_22 = (arr_4 [i_2]);
        arr_8 [i_2] = (min((17885 - -3751619570817659192), (arr_6 [i_2] [i_2])));
        var_23 = ((~((-(arr_6 [i_2] [13])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = (((~var_13) ^ ((17885 ^ ((((arr_10 [i_3] [14]) != var_10)))))));

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        var_25 = (arr_3 [i_5 - 3]);

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_26 = ((var_15 ? (arr_1 [i_5 - 2]) : (arr_20 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 - 3])));
                            var_27 &= (arr_21 [i_2] [i_3] [i_5 - 3] [14] [i_6] [1]);
                            var_28 += var_4;
                            var_29 = (((arr_2 [i_5 - 2] [i_3]) < var_9));
                            var_30 = (~17885);
                        }
                        var_31 = (((arr_19 [5] [i_3] [i_4] [i_5 + 2]) ? (arr_16 [i_2] [i_3] [2] [i_5]) : 3257237124));
                        var_32 = (((arr_14 [i_2] [i_2]) + (arr_7 [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_33 = (arr_4 [i_3]);
                        var_34 ^= (max(3751619570817659191, var_8));
                        var_35 ^= var_12;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            arr_29 [5] [5] [i_4] [i_8] [i_9] = min((min((min(458816571, (arr_19 [i_2] [i_4] [i_8] [i_9 - 1]))), -3751619570817659192)), (((min((arr_6 [i_8] [i_9]), var_9)))));
                            var_36 = (arr_4 [i_2]);
                            var_37 |= (arr_13 [i_9] [1] [1]);
                            var_38 += max((min(772555382481737998, (arr_26 [i_9 + 1]))), (arr_18 [i_2] [i_3] [i_2] [i_4] [i_8] [i_9]));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_39 = ((((max((arr_6 [i_2] [i_8]), var_7))) ? (((max((arr_6 [i_4] [i_8]), (arr_6 [i_4] [i_3]))))) : var_5));
                            arr_33 [i_2] = (((((((((-32767 - 1) + 2147483647)) << (((arr_32 [i_4]) - 613965464))))) ? (arr_24 [i_3] [i_4] [i_8] [1]) : (((arr_32 [i_10]) ? 803276621 : var_0)))));
                            var_40 = -0;
                            var_41 = (var_15 / 3491690675);
                        }
                        var_42 = max((max((min(var_1, var_16)), ((max((arr_9 [i_8] [i_8]), var_15))))), ((max((arr_23 [i_2] [i_3] [10] [i_8] [i_2]), var_17))));
                    }
                    var_43 = (((((arr_0 [i_3]) ? (((32767 <= (arr_19 [i_3] [i_3] [i_3] [i_3])))) : var_8)) == -3751619570817659187));
                }
            }
        }
    }
    var_44 = (min(95, (max((!9358453475330047221), var_16))));
    #pragma endscop
}
