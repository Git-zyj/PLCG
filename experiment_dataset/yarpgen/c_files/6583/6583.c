/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_0] [i_3] [i_3] [i_2] = (((((arr_4 [i_0 + 2]) + 2147483647)) << (((((arr_6 [18]) ? 4098984710 : (arr_10 [i_4] [i_3] [i_2] [i_1] [i_3] [i_0]))) - 4098984710))));
                            var_14 = ((!(arr_0 [i_3])));
                        }
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            var_15 -= (min((((arr_16 [i_1]) ? (arr_14 [6] [i_1] [i_1]) : (min((arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 - 3]), var_10)))), (((!(!0))))));
                            var_16 = (i_3 % 2 == zero) ? (((248 << (((((((arr_10 [1] [i_3] [i_3] [i_2 + 1] [i_3] [i_0]) ? (arr_2 [i_0] [i_5]) : 3448670988)))) + 65))))) : (((248 << (((((((((arr_10 [1] [i_3] [i_3] [i_2 + 1] [i_3] [i_0]) ? (arr_2 [i_0] [i_5]) : 3448670988)))) + 65)) - 56)))));
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_2 + 1] [i_3] [i_6] &= ((min(3448670960, 1)));
                            arr_20 [i_0 + 1] [i_1] [22] [i_3] [i_3] = (((arr_18 [i_3] [i_6 - 1] [i_0 + 2]) ? ((1 ? ((max(var_1, var_1))) : 846296291)) : (((((min((arr_3 [i_0] [i_2 + 1] [i_2]), (arr_8 [19] [i_1] [i_2 + 1] [1] [20])))) * (var_7 * 1))))));
                            var_17 |= (max((((((-(arr_18 [i_1] [i_1] [i_1]))) < 3448670988))), (((arr_0 [i_3]) << (((~var_9) + 51))))));
                        }
                        arr_21 [1] [i_1] &= 0;
                    }
                    var_18 = (min(((((max((arr_3 [i_0] [i_1] [i_2 - 1]), var_2))) ? (arr_1 [i_2]) : (arr_8 [6] [i_2] [i_2 + 1] [i_2 - 1] [i_0 + 3]))), ((((3448671004 >= (arr_10 [20] [i_1] [i_1] [i_1] [i_1] [8])))))));
                    var_19 &= (~3448670979);
                    arr_22 [i_0 + 3] [i_1] [i_2] [1] = (~(((7532953968660854078 / (arr_11 [i_0] [8] [i_2] [i_0] [22] [1])))));
                }
            }
        }
    }
    var_20 = (((((var_11 ? 0 : var_6))) ? ((min((var_2 == var_1), 3448670974))) : ((((min(var_0, var_11))) ? var_9 : (~var_7)))));
    var_21 = 1;
    var_22 |= (((1 ? (1 < 0) : ((-1919801506 ? 169 : var_1)))));
    var_23 = (min(((((var_5 & var_7) != (!9252792312858927602)))), 846296308));
    #pragma endscop
}
