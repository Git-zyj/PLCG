/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((max(112, (var_7 || var_6))) + ((min(1, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0 + 3] [i_0 + 3] [i_2] = (min(-26548, (((arr_8 [i_0 + 1] [i_1 - 1]) / (arr_8 [i_0 - 1] [i_1 + 1])))));
                    var_15 = (min((arr_4 [i_0]), (!var_2)));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_1] = (((~(arr_11 [i_0 + 3] [i_3 + 1] [i_1 + 1]))));
                    var_16 ^= (arr_3 [i_0] [i_1] [i_3]);
                    var_17 ^= ((var_6 ? ((var_10 ? (arr_11 [i_3] [i_0] [i_0]) : -6272666839369385424)) : (arr_3 [i_1 + 1] [i_0 + 2] [i_3 + 1])));
                }

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_4] = (max((6272666839369385423 & var_1), 1));
                    arr_16 [i_1] [11] [i_4] = 2951137122;
                    var_18 = var_12;
                    arr_17 [i_0] [i_4] [i_0] [i_0] = (((((((65535 >= (-2147483647 - 1))) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) % var_1)) : (arr_14 [i_4] [i_0] [6] [i_4])))) || ((min(((-(arr_5 [i_0] [i_0] [i_4]))), (var_4 << 1))))));
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_19 ^= ((min(((-(arr_1 [i_1] [i_1]))), (((var_8 + 2147483647) << (((var_8 + 9013) - 6)))))));
                        var_20 *= (((((-(arr_2 [i_0 + 1])))) ? ((((min(var_6, (arr_14 [10] [10] [i_5] [i_6])))) ? ((((arr_0 [i_0] [i_1]) ? (arr_19 [i_0 - 1] [i_6]) : var_6))) : (arr_10 [i_6] [i_1 - 1] [i_1 - 1]))) : -253055398));
                        arr_22 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] &= ((((arr_20 [i_0 + 1]) ^ (arr_20 [i_0 + 3]))));
                        arr_23 [i_0] [9] [9] [i_1] [i_5] &= (arr_7 [i_0 + 1]);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_21 = (min((arr_21 [i_0 + 1] [i_1] [i_1 + 1] [i_7]), (((!((min((arr_25 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]), (arr_21 [i_0] [i_1] [i_5] [i_7])))))))));
                        arr_28 [i_0] [i_0] [i_5 - 2] [i_7] [i_7] = ((-(arr_13 [i_7] [4])));
                    }
                    arr_29 [i_0 - 1] [i_1] [i_1] = (max((min((min((arr_7 [i_5]), var_10)), (var_7 < 1))), (((var_11 ? var_8 : (arr_13 [1] [i_5 - 2]))))));
                    var_22 = max((min(var_3, (arr_6 [i_1] [i_1 - 1] [i_1 + 1] [i_1]))), (((!(arr_6 [i_1] [i_1] [i_1 + 1] [i_1])))));
                    arr_30 [i_0] [i_1] [i_1] = ((-(arr_27 [i_0 + 3] [8])));
                    var_23 = 1;
                }
                var_24 = ((var_7 ? (min(((max((arr_7 [i_0]), 40651))), (min(var_11, (arr_20 [i_1]))))) : (arr_26 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1])));
                var_25 = max(((((min(-837203464, (arr_18 [i_0] [i_0] [i_1 + 1] [i_0]))) != (arr_11 [i_0 - 1] [i_0 + 1] [i_1 + 1])))), -837203464);
                arr_31 [i_0] [i_0] [i_0] = var_12;
            }
        }
    }
    #pragma endscop
}
