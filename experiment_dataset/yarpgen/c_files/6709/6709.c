/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_1] = (~var_5);
            var_12 = ((arr_4 [i_0] [i_0]) ? (981823517251167604 - 4538936281757835231) : (min((arr_3 [i_1 - 1] [i_1]), (arr_5 [i_1 + 1] [9]))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_2] [i_1] [12] [i_1] = (((((min(304657494, (arr_2 [i_0]))))) ? var_3 : (~42)));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((((var_11 ? (arr_10 [i_3] [i_1] [i_3 + 1]) : (arr_10 [i_3] [i_1] [i_3 - 1]))) != (4538936281757835231 > var_1)));
                            var_13 = (max((((((29 ? 3238517961 : 34))) ? (var_8 - var_6) : -1823551776)), var_4));
                            var_14 = ((~(min(-1823551776, 53829))));
                            arr_15 [i_1] [i_1] [i_3] [i_4] = var_10;
                        }
                        var_15 = ((((((arr_4 [i_1] [i_0]) ? (((arr_1 [3] [i_1]) | 32583)) : 86))) ? (((4043095575 ? 18446744073709551605 : 1))) : ((((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (((((arr_2 [i_0]) + 9223372036854775807)) << (9728571855258195035 - 9728571855258195035))) : (((var_6 ? var_5 : (arr_10 [i_1] [i_1] [i_0])))))))));
                    }
                }
            }
        }
        var_16 ^= (min(53820, var_1));
        var_17 = (3238517961 / -5769624215610405692);
        var_18 = (max((arr_8 [i_0]), 18016));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = 2116622403;
        arr_21 [i_5] [i_5] = ((-(arr_8 [i_5])));
        arr_22 [i_5] [i_5] = (arr_8 [7]);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = var_8;
        var_19 *= (((-(~var_2))));
        var_20 = (arr_16 [11] [11]);
        var_21 -= -var_3;
        arr_27 [i_6] = -15564;
    }
    var_22 = (~var_9);
    #pragma endscop
}
