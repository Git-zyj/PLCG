/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (min(((var_10 + (arr_2 [i_0]))), ((0 << (65535 - 65531)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 |= (min((max(var_7, (arr_3 [i_1]))), 78));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (((((min(16, (arr_3 [i_0])))) ? (1016754335 == 4611686018427387904) : (((arr_6 [i_0]) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : 15775386830338399488)))))));

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            var_15 = ((((((arr_1 [i_4 + 1]) ? (!117) : (var_8 || var_2)))) || 3049166328));
                            arr_15 [i_2] [i_2] [i_1] [i_2] = (((83 ? 3779852429971654241 : (((var_11 - (arr_3 [i_1])))))));
                            arr_16 [2] [2] [i_2] [i_3] [i_4] = ((((((arr_13 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]) ? (arr_11 [i_0] [i_0] [1] [i_2]) : (arr_11 [11] [6] [i_3] [i_2])))) ? (arr_0 [i_0]) : (arr_2 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_16 = (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_17 = (min(((min(-2, (max(18, 31))))), (((arr_7 [i_0] [i_1] [i_3]) ? (arr_3 [i_1]) : ((min((arr_17 [i_0] [1] [i_2]), (arr_17 [i_0] [i_0] [i_0]))))))));
                            var_18 = (max(var_18, var_8));
                        }
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            arr_23 [i_6] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = (((min((arr_18 [i_6 + 2] [i_2] [i_6 - 2] [i_6 + 2] [i_6 - 1] [i_6 - 2]), 234)) + var_4));
                            var_19 = (max((((arr_20 [i_0] [i_6 + 1] [i_2] [i_3] [i_2] [i_1] [i_2]) * var_8)), (arr_13 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 - 1] [i_6])));
                            arr_24 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2] [i_6 - 1] = ((min(var_10, ((72057559678189568 ? (arr_0 [i_0]) : (arr_19 [i_0] [i_1] [i_2] [i_2]))))));
                        }
                        var_20 |= ((((max((arr_12 [i_0] [i_1] [18] [i_3]), (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? ((0 ? (~8192) : 1150669704793161728)) : ((((~var_5) ? (~0) : ((var_11 ? var_3 : (arr_6 [i_1]))))))));
                        arr_25 [i_2] [i_1] [i_2] [i_1] = (min((((-(arr_17 [i_1] [i_2] [i_3])))), (arr_5 [i_3] [i_1] [i_2])));
                        arr_26 [i_2] = (((((arr_17 [i_0] [i_0] [2]) ? -32 : ((var_9 ? -8216364081592976145 : -28287)))) % 38));
                    }
                }
            }
            var_21 = (((((var_0 / var_0) - ((((arr_21 [i_0] [i_0] [8] [i_1] [i_1]) % (arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0] [i_1]))))))) ? ((((arr_3 [i_0]) % (arr_3 [i_0])))) : (18993 * 18446744073709551615));
            var_22 = ((-((-((max((arr_1 [0]), (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]))))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_23 *= (arr_5 [i_0] [i_1] [i_7]);
                arr_30 [i_0] [i_0] [i_0] [i_7] = (((((-(arr_7 [i_7] [i_1] [i_0])))) ? (((arr_5 [i_7] [i_1] [i_0]) + (arr_8 [i_0] [i_1] [i_7]))) : var_3));
            }
        }
    }
    var_24 ^= max(-5889758266254427713, 51);
    var_25 |= 1;
    var_26 = (max(var_26, var_8));
    #pragma endscop
}
