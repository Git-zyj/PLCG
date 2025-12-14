/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((max(var_7, 1071644672)), (max((264 ^ -1071644691), 26))));
                arr_5 [i_0] [i_1 - 1] = ((((max(19, 4))) * (((max(32, 85))))));
                var_11 = (max(var_11, 24805));
                arr_6 [i_0] [i_0] = arr_0 [i_0];
                var_12 = 32;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_13 = (min(var_13, (((((((((0 ? 254 : 141))) && (arr_10 [i_2 - 2] [3])))) <= (arr_7 [i_2 + 2]))))));
                var_14 ^= (150 % -1323540871);
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_15 = var_3;
            var_16 = var_10;
            arr_17 [i_4] [i_4] [i_4] = (min((arr_10 [i_4] [i_4]), (arr_14 [i_5] [i_5] [i_4])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_17 = arr_15 [i_4] [i_4];
            arr_21 [i_4] = 1769477245;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_18 = (((((arr_16 [i_4]) > (arr_16 [i_9]))) ? (((arr_16 [i_9]) ? 7600 : 127)) : ((max((arr_16 [i_4]), (arr_16 [i_4]))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_10] [i_4] [i_4] = ((20781 ? (arr_7 [i_10]) : 1040187392));
                            var_19 = 1071644674;
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_20 = (max(252625106765064300, (~var_5)));
                            arr_38 [i_4] [16] [i_4] [16] [i_9] [i_9] [i_11] = ((65517 > (((((65534 >> (var_10 - 8845351349041753553)))) ? (-16 == 9) : 47))));
                            var_21 += 54;
                            arr_39 [i_4] [i_7] [i_7] [12] [i_8] [i_4] [i_11] = (min(-1, (max(46, 41394))));
                            var_22 = -512574532;
                        }
                        for (int i_12 = 4; i_12 < 17;i_12 += 1)
                        {
                            var_23 = 11605;
                            var_24 = (((((((arr_9 [i_12 - 1] [i_12 + 1]) | (arr_9 [i_12 - 4] [i_12 - 4]))) + 2147483647)) >> (((arr_9 [i_12 - 3] [i_12 - 2]) - (arr_9 [i_12 - 4] [i_12 - 2])))));
                        }
                        var_25 = (((arr_11 [i_4] [i_9]) ? (min(3, (max(3594454398, 0)))) : (~-512574527)));
                    }
                }
            }
            var_26 = ((((((!115) ? var_10 : 870756647))) || ((!((max(54, 202)))))));
            var_27 = var_1;
            arr_42 [i_4] = (-(((-2147483647 - 1) + 202)));
        }
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    {
                        arr_52 [i_15] [i_15] [i_4] [i_15] = (((min(53931, 0))));
                        var_28 = 11605;
                        arr_53 [i_4] [i_4] = (((5 * -13) && 0));
                    }
                }
            }
        }
        var_29 *= (max(((-13 ? (arr_27 [i_4] [16] [i_4] [i_4] [i_4]) : (arr_27 [i_4] [16] [i_4] [i_4] [i_4]))), 53937));
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            {
                arr_58 [i_17] [i_16 - 2] [i_17] = ((((arr_44 [i_16 - 2] [i_16 - 2]) ? 12627 : (arr_7 [i_17]))));
                var_30 -= (((arr_36 [i_17] [i_17] [i_17] [i_17] [i_16] [i_16]) ? -146 : (arr_48 [i_16 + 1] [i_16] [i_16] [i_16])));
            }
        }
    }
    var_31 = (min(var_9, ((-((var_0 ? var_4 : var_4))))));
    #pragma endscop
}
