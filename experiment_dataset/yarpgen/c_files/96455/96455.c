/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = ((-(~var_4)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((min((2017612633061982208 <= 6293), 138))) ? ((~(-6294 ^ 16070385097969040478))) : -6301));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [14] = (1023 % 2147483647);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [4] |= var_5;
                        arr_17 [i_2] = (((((((min(var_1, var_3))) ? -6294 : var_7))) ? (arr_3 [i_0] [17]) : (max((var_4 % 65535), (min(var_5, (arr_0 [i_3])))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_21 [i_0] [i_2] [i_4] = (max(((max(46, -32761))), (((((var_2 ? var_9 : var_0))) ? -6289 : (arr_9 [i_0] [i_2] [i_2] [i_2])))));
                        arr_22 [i_2] [i_2] [i_2] = var_8;
                        arr_23 [i_2] [i_1] [i_2] [i_2] = ((!((min(var_8, ((min(-6301, 127))))))));
                        arr_24 [i_2] = ((127 ? 65535 : -6282));
                    }
                }
            }
        }
        arr_25 [i_0] = ((((((max(6293, -6301)))) + (arr_15 [i_0] [i_0] [i_0]))));
        arr_26 [i_0] = 36;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_29 [i_5] = ((-(((-191072916266681878 ? 16883082796166954990 : var_2)))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_37 [i_5] [1] [i_7] = (((min((arr_3 [i_6 + 2] [i_6 + 1]), (arr_30 [i_6 - 1]))) >> (var_3 > var_11)));
                    arr_38 [i_6] [i_7] = (min(((((min(var_4, (arr_13 [i_6])))) ? (arr_5 [i_5] [i_5]) : (((arr_20 [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_7] [i_7]) ? (arr_10 [i_7]) : 0)))), ((max((min((arr_12 [i_5] [i_5] [i_6] [i_5] [i_5]), var_11)), var_2)))));
                    arr_39 [i_7] [i_6] [i_5] = ((((min(50880, -106))) ? (~64957) : ((((((arr_9 [i_5] [i_6] [i_6] [i_7]) ? (arr_14 [i_5] [i_5] [13] [i_7]) : 51))) ? ((16884 ? 16152296881158542543 : var_11)) : ((min(var_5, var_4)))))));
                    arr_40 [i_7] = var_7;
                    arr_41 [i_5] [i_6] [1] [8] = (max((arr_1 [i_6]), (arr_20 [21] [i_5] [i_5] [i_5] [i_6] [i_5])));
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            arr_44 [i_5] |= (!(arr_0 [i_8 + 1]));
            arr_45 [7] [7] [7] = (2147483647 & 53723);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_55 [2] [i_9] [i_9] [2] [2] [i_5] |= var_5;
                            arr_56 [i_5] [i_10] [13] [i_5] [0] = (arr_15 [i_10 + 3] [i_8 + 1] [i_8 - 1]);
                        }
                    }
                }
            }
            arr_57 [1] [i_5] [i_8] = (((~-6293) >= (arr_2 [i_8])));
            arr_58 [i_8] = (arr_43 [i_8 - 1] [i_8 - 1] [i_8]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_63 [i_5] [12] [i_5] = ((10 ? 9 : 1));
            arr_64 [3] [i_5] [i_5] = (arr_0 [i_12]);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_69 [i_13] = (((arr_59 [i_13]) >= (~var_11)));
            arr_70 [i_5] [i_13] [i_13] = 2147483647;
            arr_71 [i_13] = (--2147483630);
        }
        arr_72 [i_5] [i_5] = (arr_48 [i_5] [i_5] [i_5] [10]);
        arr_73 [i_5] [7] |= (((arr_15 [1] [i_5] [i_5]) || (arr_68 [i_5])));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            {
                arr_80 [16] = (min(((((18014398507384832 ? -22280 : (arr_77 [i_14]))) + ((127 ? 42 : 0)))), -22));
                arr_81 [i_14] [i_15] = ((~(((arr_2 [i_15 - 1]) - 1))));
            }
        }
    }
    #pragma endscop
}
