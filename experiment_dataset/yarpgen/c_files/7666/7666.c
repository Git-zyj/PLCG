/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((max((arr_3 [i_0] [i_0]), (arr_2 [i_0])))) && ((((min(var_10, var_12))) || -0)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = 1788786973;
                            var_20 |= (((arr_6 [i_1 + 3]) << (var_7 - 699436250277317024)));
                            var_21 = var_18;
                            arr_14 [i_3] = (((-32767 - 1) ? (arr_6 [i_3 + 2]) : (arr_6 [i_3 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_2 + 1] [i_3 + 1] [i_5] [i_3] = ((-(arr_3 [i_5] [i_5])));
                            arr_18 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] |= arr_7 [i_3 + 1] [i_0];
                            var_22 *= 9223372036854775801;
                        }
                        var_23 = (max(var_23, (((-var_9 ? (arr_2 [i_1 + 2]) : (arr_7 [i_2 + 2] [i_1 - 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_24 *= ((var_7 ? ((((((var_0 ? -1 : 19))) ? var_4 : 64592))) : 3));
                        var_25 |= ((((((-(arr_0 [i_1 + 1] [i_1 - 1]))) + 2147483647)) >> (943 > 0)));
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_26 ^= 2251799813685248;
                        arr_25 [12] [i_1 + 3] [i_7] [i_7] = var_8;
                        arr_26 [i_0] [i_1] [i_2] [i_7] [i_7] = ((((min(9223372036854775807, 3932160))) ? (arr_3 [i_0] [6]) : ((-(arr_16 [i_2 + 1] [13] [i_2] [3] [i_2])))));
                    }
                    var_27 = (max(var_27, 9223372036854775807));
                    var_28 -= var_13;
                }
            }
        }
        var_29 = 4703090373136785680;
    }
    var_30 -= (max((((var_0 ? var_14 : var_0))), var_18));
    var_31 = var_17;
    #pragma endscop
}
