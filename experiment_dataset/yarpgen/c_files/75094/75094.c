/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((!((var_8 || ((min((arr_6 [i_1] [i_1] [i_1]), 1076)))))));
                        var_14 = -127;
                    }
                    arr_10 [i_2] [i_1] [i_1] [i_0] = (((max((~var_8), ((var_1 ? 1076 : (arr_6 [i_1] [i_1] [i_1]))))) << (var_6 - 48)));
                    var_15 = (((18446744073709551590 * -19350) / -127));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    arr_13 [i_1] = (-19350 ^ -1077);
                    var_16 = (min(var_16, (arr_0 [i_0] [i_4])));
                    var_17 -= (((((arr_4 [6] [6]) && var_11)) || (var_11 && -1082)));
                    arr_14 [i_1] [i_4] [i_1] [i_1] = (!2366232969246645686);
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_18 = (((((arr_1 [i_5]) == var_10)) ? (arr_8 [i_0] [i_1] [i_5]) : (((1446248931 ? (arr_5 [i_0 - 1] [i_1 + 1] [i_5 - 1] [i_5]) : 44)))));
                    var_19 &= max((min(1446248931, -19350)), (!19350));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_20 = (max((max((arr_22 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_6 - 1]), (min(2366232969246645665, 13533)))), var_2));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (-6196 / 6195);
                                var_21 = (min(var_21, -1103));
                                arr_24 [i_1] [i_1] [i_5] [i_6] [i_7] = (min((arr_22 [i_0 + 1] [i_1 + 2] [i_5] [3] [i_1] [i_7]), (44 ^ 31458)));
                                arr_25 [i_7] [i_1] [0] [i_5] [i_1] [i_0] = ((!((!(((var_5 ? var_6 : (arr_19 [i_0] [i_1] [i_1] [i_7]))))))));
                            }
                        }
                    }
                }
                var_22 = (max(((max(((var_9 ? 250 : 12678)), 12678))), ((6189 ? (~74) : ((-1076 ? -56 : 40635794))))));
                var_23 = ((arr_1 [i_0 + 1]) ? (((arr_1 [i_0 - 1]) ^ var_8)) : (max((arr_1 [i_0 + 1]), var_11)));
                var_24 *= ((~((-6216 ? (arr_19 [i_0 - 1] [i_1 - 1] [4] [i_1]) : 254))));
                var_25 = ((!((max(16080511104462905975, ((max(-19351, 19341))))))));
            }
        }
    }
    #pragma endscop
}
