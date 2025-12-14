/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = (arr_0 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_13 = (55702 && 3934447095);
                            var_14 = (3934447103 || var_8);
                            var_15 = (((arr_11 [i_2] [i_3] [i_4 + 1] [i_0] [i_4] [i_4 + 1]) >= 4294967289));
                        }
                    }
                }
            }
            var_16 = (((var_6 + var_3) * (arr_6 [i_0] [i_0] [i_1])));
        }
        var_17 = ((arr_2 [i_0]) ? 7 : 55698);
    }

    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_18 = max(var_5, (arr_13 [i_5]));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                var_19 = (((max(((var_1 ? 360520215 : var_2)), (min(var_2, 360520223)))) + (max(var_1, ((471468792 ? 3934447095 : 360520224))))));
                var_20 = (arr_17 [i_6] [i_7]);
            }
            var_21 = (arr_15 [i_5] [i_6]);
            var_22 = ((((min((5583742194715473547 & 0), (0 != 62375)))) ? (min((arr_16 [i_5 - 1] [i_6] [i_6]), (((arr_15 [i_5] [i_6]) ? var_4 : (arr_14 [i_5]))))) : (((360520223 << (140737488355327 - 140737488355307))))));
            var_23 = (arr_14 [i_5]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_24 = (arr_19 [i_5 + 2] [i_5 + 2] [22]);
            var_25 = 9826;
            var_26 = (arr_17 [i_5 + 1] [i_5 + 1]);
            var_27 = var_0;
            var_28 = (arr_20 [11] [i_5]);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                {
                    var_29 = ((((((arr_14 [i_5]) ? (arr_13 [i_5]) : var_0))) || (arr_21 [i_5])));
                    var_30 &= ((1 ? ((3934447091 ? (arr_24 [i_10 + 1] [16]) : 255)) : (max(32148, 360520234))));
                }
            }
        }
        var_31 = ((((((arr_16 [i_5 + 2] [i_5] [i_5]) ? (arr_16 [i_5 - 1] [i_5] [i_5]) : var_8))) ? 1492338672 : (((arr_28 [i_5] [i_5] [i_5] [i_5]) % (16383 | 7148305774802757771)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                {
                    var_32 = ((0 ? var_6 : ((65535 ? 4094629679 : 3934447109))));
                    var_33 = (((-29808 | var_8) == ((((14 != ((-1 ? 1962241266 : 70368744177663))))))));
                    var_34 = ((((max(var_6, (arr_18 [i_5])))) ^ var_6));
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 15;i_13 += 1)
    {
        var_35 |= (((((~0) ? ((((arr_29 [4] [i_13] [i_13 - 3]) || 1885659391))) : (~var_9))) == 0));
        var_36 = (max(var_8, -var_7));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_37 = (((5494881643813110887 + 0) / (arr_30 [i_14] [i_14])));
        var_38 = var_0;
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        var_39 *= 27953;
        var_40 = ((7 >> (56350 - 56338)));
    }
    var_41 |= ((var_9 ? 1 : var_2));
    var_42 = var_0;
    #pragma endscop
}
