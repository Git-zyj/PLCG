/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = ((arr_1 [i_0] [i_0]) || 0);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 += ((27180 | (~var_4)));
                    arr_8 [i_0] [i_1] [i_2] = (((var_1 && 128) ? (arr_7 [i_2] [i_1] [i_1] [i_0]) : ((((((min(var_2, (arr_5 [i_0] [i_1] [i_0])))) || (arr_1 [i_0] [i_1 + 1])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_14 [i_3] = (((~var_5) ^ (arr_10 [i_0])));
                    var_12 ^= (((-var_7 > -var_1) || 1));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 += (arr_11 [i_0] [i_0] [i_0]);
                                var_14 *= (min((((-(~1)))), var_1));
                                arr_21 [i_0] [6] [i_3] [i_3] [i_3] = ((!(~27180)));
                                var_15 = ((var_1 ? (((((arr_2 [16]) ? var_0 : var_5)))) : -7886344986018458194));
                                var_16 = ((-var_3 || (arr_15 [i_0] [i_5 - 2] [i_0] [i_5] [i_5] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_17 *= (arr_20 [0] [0] [0] [18] [12] [i_7] [i_7]);
        var_18 = ((arr_3 [i_7] [i_7]) ? -var_2 : ((((~32767) / 1))));
        var_19 = (((var_8 ? (arr_11 [i_7] [i_7] [i_7]) : (arr_3 [i_7] [i_7]))));
        arr_25 [0] &= (max((((arr_6 [i_7]) ^ var_7)), ((27180 ? -27162 : -1834587923))));
    }

    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_20 = var_2;
        arr_28 [i_8] = (((max(var_2, 21))) ? (((-2147483640 ^ (((-9223372036854775807 - 1) ? 55450 : -1264330659))))) : (min(1834587937, 3846164324396076257)));
        var_21 = (((268435455 == 1970560362405706516) ? (max((((-8828404425250053718 + 9223372036854775807) << (233 - 233))), 1)) : ((((((arr_27 [i_8]) ? var_7 : 7986428998185371846)))))));
        var_22 = (max(var_22, ((+(((((9223372036854775807 ? (arr_27 [i_8]) : 1887638604))) ? var_6 : 1))))));
        var_23 *= var_0;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_24 = ((!(((var_0 ? var_9 : var_4)))));
        var_25 = (((!1970560362405706524) ? var_4 : (arr_27 [i_9])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_26 = ((((((arr_29 [i_9]) ? (arr_31 [i_9]) : (-9223372036854775807 - 1)))) ? var_2 : (arr_33 [14] [14] [i_10])));
                    var_27 = (arr_32 [i_9] [i_9] [i_9]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
    {
        var_28 = ((-15015 ? 55039 : (arr_37 [i_12])));
        var_29 ^= var_2;
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_30 = var_1;
                    arr_43 [i_13] = 243;
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_31 = ((1 == ((min(var_7, 1)))));
        var_32 = (min(((((((-9223372036854775807 - 1) / -27162))) || var_8)), ((var_0 || (arr_36 [i_15] [i_15])))));
    }
    var_33 = (1 <= 4071977978051214518);
    var_34 = (max(var_34, var_4));
    var_35 -= var_1;
    #pragma endscop
}
