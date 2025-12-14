/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ^ (~-112)));
        var_13 *= ((~(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        arr_4 [1] = (((((((arr_2 [i_0]) ? -110 : var_10)) <= 24012)) ? (arr_1 [i_0] [i_0]) : ((40 ? -110 : (((arr_1 [i_0] [i_0]) ^ 4))))));
        arr_5 [i_0] = 17846;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_14 = ((1073741792 ? 1 : 204));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, 0));
                        arr_17 [2] [2] [i_3] [i_3] [12] = (((1 ? (((((arr_9 [i_1 + 1] [i_1 + 1]) + 9223372036854775807)) >> (-1 + 28))) : var_12)));
                        var_16 = (((((~((((arr_9 [i_1] [i_1]) == (arr_15 [i_3]))))))) ? (arr_10 [i_4] [i_4]) : -2919127959));
                    }
                }
            }
        }
        var_17 = ((((max((arr_12 [i_1]), 26454))) + ((((min(6257083661935851961, 1))) ? (~-112) : (((arr_12 [i_1]) ? 1 : -2073055763333580695))))));
        arr_18 [i_1] = 1;
        arr_19 [i_1 - 1] = (((((-(arr_7 [15] [15])))) || ((((arr_15 [i_1 + 1]) * 12016679469654932936)))));
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = ((((((1 ^ var_8) ? (~17852) : (((-113 + 2147483647) << (204 - 204)))))) ? (((max(0, 1)))) : (arr_9 [i_5] [i_5])));
        arr_24 [i_5] = (min(1, (~1)));
        var_18 = (max(107, 12796082957640082964));
        var_19 -= var_5;
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] [2] = var_5;

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_20 = ((var_10 & (arr_9 [i_7] [i_6 - 1])));
            var_21 = ((((arr_22 [i_6]) + 216)));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_22 = ((14301 < 10) ? 110 : 12796082957640082964);
            var_23 = ((-(~23818)));
            arr_33 [i_6] [i_6] [i_8] = 9223372036854775807;
        }
        var_24 = 110;
        arr_34 [i_6] = (-103 || 216);
    }
    var_25 = 622989938;
    var_26 = (((((-(~1)))) ? ((((3379673456960546074 ? var_3 : 598449399)) + (1 & 1))) : ((((var_1 & -17838) / -7574)))));
    var_27 = (max((max(var_4, (~var_6))), var_5));
    #pragma endscop
}
