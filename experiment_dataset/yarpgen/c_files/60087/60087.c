/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= max((((var_7 & ((var_3 >> (var_11 - 144)))))), ((1 << (var_0 - 3857178722))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (((((-9223372036854775807 - 1) + var_0))) ? (arr_0 [i_0]) : (arr_3 [i_1 - 2] [i_1] [i_1 - 2]));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] = (arr_1 [i_0] [i_1]);
                    var_16 = (min(((((max((arr_0 [i_0]), (arr_4 [4] [2]))) != (arr_0 [i_0])))), (max(((var_0 ? 224 : var_2)), (arr_1 [i_0] [6])))));
                    var_17 = ((~((1 ? (((arr_3 [i_0] [i_1] [i_2]) * var_8)) : (((max((arr_0 [i_0]), 224))))))));
                    var_18 = (min(var_18, ((((((-(arr_3 [i_0 + 2] [i_0] [i_0])))) ? ((((max(4, var_0))) ? (arr_1 [1] [1]) : (var_1 | var_2))) : (arr_1 [2] [i_1]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_19 -= 1;
                        var_20 *= (arr_10 [i_0] [i_4]);
                        arr_16 [i_0] [i_0] [i_3] [0] [i_1] &= (arr_5 [i_0 + 1] [i_0] [i_0] [i_1 - 2]);
                        var_21 += (arr_11 [i_4] [i_0 + 1] [i_0 + 1]);
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = (min(var_22, ((((182 | var_4) ? (arr_19 [i_5] [i_1] [i_1] [i_0 + 1]) : (arr_10 [i_0 + 1] [i_0 - 1]))))));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_23 = (min(var_23, -1905697548));
                            arr_23 [i_6] [i_0] [6] [i_1] [i_0] [i_0] = 1;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 = (((arr_3 [i_0] [i_0 + 2] [i_1 - 1]) && (arr_3 [5] [i_0 + 3] [i_1 + 1])));
                            var_25 = (min(var_25, var_2));
                            var_26 ^= ((((var_2 || (arr_0 [8]))) || (arr_3 [i_0 - 1] [i_5] [0])));
                            var_27 = ((-(arr_14 [i_0] [i_0 + 3] [i_0 + 3] [i_0])));
                            var_28 &= ((224 ? 4 : 224));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_29 = (((arr_1 [i_0] [i_1 - 1]) ? (arr_1 [i_0] [i_1 - 1]) : (arr_1 [i_0] [i_1 - 2])));
                            var_30 += 120;
                            var_31 = 1905697533;
                        }
                    }
                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        var_32 = (max(var_32, var_9));
                        var_33 &= (arr_25 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_1 + 1] [i_1]);
                        arr_30 [i_0] [5] [i_0] = 402653184;
                        var_34 = (min(var_34, (arr_18 [0])));
                    }
                }
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    var_35 = (min((((~((~(arr_3 [i_0] [i_1] [i_10])))))), ((max(47189, (arr_12 [i_0] [i_1] [i_10]))))));
                    arr_34 [i_1] [i_0] [6] [i_1 - 1] &= (arr_28 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_10]);
                    arr_35 [6] [6] [6] [6] &= (240 ^ 1);
                    arr_36 [8] [8] &= ((((((min(1406383769, 535124272))))) == (arr_28 [i_0] [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_10 - 1])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_36 = (max(((var_6 << (4165287484355667975 - 4165287484355667961))), 1));
                                var_37 = (max(var_37, ((((((arr_1 [i_11] [i_10]) ? 65406 : (((arr_18 [i_11]) + (arr_25 [i_0 + 2] [i_1] [i_0 + 2] [i_11] [i_12]))))) & (((1 ? -33 : 36861))))))));
                                arr_42 [i_0] [i_0] [i_10 - 1] [i_11] [i_12] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
