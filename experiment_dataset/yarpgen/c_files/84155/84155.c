/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] |= (((((18446744073709551602 ? 4294967295 : 192))) ? (((min((arr_0 [i_0] [i_1]), 49)))) : (max((arr_1 [i_0]), -2))));
                var_15 -= (max((max(((max(76, 96))), (arr_2 [i_0]))), -23));
                var_16 ^= (((((max((arr_3 [i_1]), (arr_3 [i_1]))))) | ((var_1 ? (min(var_2, 4294967295)) : ((max(var_0, (arr_4 [i_1] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = (((arr_3 [i_3]) <= var_11));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_14 [i_2] [i_1] [i_2 + 2] [i_2] [i_4] = ((-9 ? 274875809792 : -2097152));
                                var_18 = (max(var_18, var_6));
                                var_19 = (max(var_19, (((((-12 ? 65504 : 65483)) % ((((max(1, 65535))) - ((-17 ? 54 : 1006632960)))))))));
                            }
                            for (int i_5 = 2; i_5 < 11;i_5 += 1)
                            {
                                var_20 = ((((max((arr_3 [i_0]), var_13))) ? (((((max(32512, var_1)) != (min(17, (arr_9 [i_2] [i_5]))))))) : ((max(var_4, (arr_11 [i_2] [11]))))));
                                var_21 = (max(var_21, (((((max((arr_7 [i_2 + 1] [i_3 + 1] [i_0] [i_5 + 3]), 18446743798833741802))) ? (arr_16 [i_5] [i_5 - 2] [i_5 - 2]) : (((max(8, var_7)))))))));
                            }

                            for (int i_6 = 2; i_6 < 11;i_6 += 1)
                            {
                                var_22 = (((((arr_19 [i_2 - 1] [i_3 - 2] [i_2] [i_6 + 2]) || (arr_19 [i_2 - 1] [i_3 + 1] [i_2] [i_6 + 3]))) ? var_0 : (!18446744073709551615)));
                                var_23 = -63;
                                var_24 = max(var_8, ((min(-1, (-2147483640 / 24)))));
                                var_25 = (max(var_25, (((274875809772 ? (arr_3 [i_3 - 3]) : 18446743798833741852)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, ((((((var_12 ? (28 * 18446744073709551608) : ((6 ? var_6 : var_3))))) ? var_0 : 16376)))));
    var_27 = min((max(var_8, var_13)), ((max(var_14, var_1))));
    #pragma endscop
}
