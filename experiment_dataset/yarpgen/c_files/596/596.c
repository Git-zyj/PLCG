/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (--18318013103646731639);
        arr_3 [i_0] = 1728845673351539351;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_16 = 4095;
        var_17 = 7527738134833827871;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = ((arr_6 [i_2]) ? 3690396487387588659 : (((18446744073709547520 ? 1 : 48))));
        arr_10 [i_2] [i_2] = min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_18 = ((!(~18446744073709547521)));
                                var_19 += (((~(~var_1))));
                            }
                        }
                    }
                    var_20 = ((!(((5036981071117693490 ? 4089 : ((-(arr_6 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_21 = 17592186043392;
                                arr_32 [i_3] [i_3] [i_7] [i_7] [i_3] = arr_25 [i_3] [15] [i_3] [i_3] [i_3] [i_4 - 3] [i_7 + 2];
                                var_22 = (max((min(((var_7 ? var_8 : (arr_16 [i_2] [i_3] [i_7] [i_7 + 1]))), (arr_31 [i_2] [i_2] [i_2] [i_7] [i_8]))), (arr_18 [i_8] [i_3] [i_3] [i_7 + 1])));
                                arr_33 [i_3] [i_3] [i_4] [i_7 - 2] [i_7] = (arr_14 [i_2] [i_7 + 1]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 18;i_10 += 1)
            {
                {
                    var_23 -= (139 ? 10021330152558653901 : 4089);
                    var_24 = ((((arr_18 [i_2] [i_10 - 4] [i_10 + 1] [i_10 - 3]) ? (arr_18 [i_2] [i_10 - 1] [i_9] [i_9]) : 255)));
                    var_25 -= 18446744073709547526;
                }
            }
        }
    }
    var_26 = var_3;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                arr_44 [i_12] = 255;
                arr_45 [i_12] = (((arr_24 [i_12] [i_12] [i_11] [i_11] [i_11]) ? (arr_38 [i_11]) : (arr_17 [i_11] [i_12] [i_11])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_27 = (3567330518669241687 << (min((arr_25 [i_11] [i_11] [i_12] [i_12] [i_13] [i_14] [i_14]), 5)));
                            arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (arr_40 [i_14]);
                            var_28 = var_11;
                            arr_53 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = 55;
                        }
                    }
                }
            }
        }
    }
    var_29 = ((var_8 ? var_8 : ((var_2 ? var_3 : var_6))));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            {
                arr_60 [i_16] = -1696986562132637504;
                arr_61 [11] = max(16043995733994589832, 127);
                arr_62 [i_15] [i_15] [i_15] = (max(((((arr_38 [i_16]) && (arr_38 [i_15])))), (((arr_38 [i_16]) ? (arr_38 [i_15]) : (arr_38 [i_15])))));
            }
        }
    }
    #pragma endscop
}
