/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((var_2 % ((((max(var_12, (arr_8 [i_0] [i_0] [i_3])))) ? (((16997449479081447071 ? (-2147483647 - 1) : (-2147483647 - 1)))) : ((var_11 ? (arr_10 [6] [21] [21] [i_3] [i_0] [i_0 + 1]) : 55917))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_1 - 1] [i_3] [i_0] = (!var_9);
                            var_17 |= 47;
                            var_18 = (~var_12);
                        }
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_0] = ((~((-var_1 ? var_7 : var_9))));
                            arr_20 [i_0] = (~var_9);
                            arr_21 [i_0] [i_3] [i_2] [i_3] [i_5] |= (!25);
                        }
                        var_19 = ((var_10 + 2147483647) << ((((((min((arr_18 [i_0 - 2] [i_1 - 1]), var_15))) + 4899)) - 29)));
                        var_20 = (min((((var_5 - var_0) ? (arr_14 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2]) : var_12)), ((min(((var_2 ? 972920157 : (arr_1 [i_0] [i_0 + 1]))), ((65535 ? -90 : var_6)))))));
                    }
                }
            }
        }
        arr_22 [i_0] [20] |= ((((min((arr_14 [i_0 - 1] [2] [14] [i_0] [i_0] [i_0 - 2] [i_0 - 1]), -2211110631375726142)))) % ((min(972920157, var_9))));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = ((!((min((arr_4 [i_6]), (arr_4 [i_6]))))));
        var_21 &= (min((~-9709), (-2147483647 - 1)));
        var_22 += ((((min(-972920158, var_3))) | (((var_13 ? 53 : var_16)))));
    }
    var_23 = (max((-127 - 1), ((((!9) ^ 972920158)))));
    var_24 = max((max(var_11, 1340450104)), (((-13421 - var_16) + (min(-65, var_7)))));
    #pragma endscop
}
