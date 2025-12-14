/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((+(min((arr_2 [i_1] [i_2]), (((var_3 ? (arr_0 [i_2]) : var_0)))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (-659756146 / 659756146);
                        var_17 &= -1;
                    }
                    var_18 = (max((!var_4), (min((arr_7 [i_0] [i_1] [i_2 + 4]), (var_8 || -40)))));
                    var_19 *= ((-17801 ? ((max(10630900234513932784, 0))) : ((((((113 + (arr_6 [i_2 - 1]))) > (arr_6 [i_0])))))));
                }
            }
        }
    }
    var_20 = (min(var_20, var_11));

    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_21 = var_1;

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_22 = var_11;
            var_23 += (!((min((-113 ^ 2165885062749933857), 1))));
            var_24 = (arr_13 [i_4 - 1]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_25 += ((~(((arr_13 [i_4]) ? var_8 : (arr_10 [i_6] [i_4 - 1])))));

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_26 = 659756146;
                var_27 = var_1;
                var_28 = (arr_14 [i_4 + 1] [3] [i_4]);
            }
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_29 += 31;

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_30 = 2669134415;
                            var_31 = (~var_13);
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_32 = ((((max((arr_22 [i_4] [15] [i_9 + 2]), var_12)) & ((-2237446389470200477 ? 1965766317 : (arr_29 [i_4] [i_4] [i_4] [i_4]))))));
                            var_33 = ((((max((arr_21 [i_4] [i_4 + 1] [i_8 - 1]), (arr_23 [i_4] [i_8 + 3] [i_4])))) / (((arr_23 [16] [i_8 + 2] [i_4]) ? (arr_21 [i_4] [i_4 - 1] [i_8 + 3]) : (arr_21 [i_4] [i_4 - 1] [i_8 + 1])))));
                        }
                    }
                }
            }
            var_34 = (max(var_34, -1));
        }
    }
    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {
        var_35 *= 659756152;
        var_36 = (min(var_36, ((((min((arr_24 [i_13 - 1]), (arr_27 [i_13 - 1] [i_13] [i_13])))) ? (!6831792345148735714) : ((((max(118, -80101862))) ? (arr_20 [i_13] [i_13]) : ((var_1 ? (arr_25 [6] [6]) : (arr_11 [i_13] [1])))))))));
        arr_39 [i_13] = var_1;
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 22;i_14 += 1)
    {
        arr_43 [i_14 - 1] = 511;
        arr_44 [i_14] = -4;
    }
    #pragma endscop
}
