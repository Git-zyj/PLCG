/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-2742611814 && var_10) == var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((((((-15 != 2674416451) > ((min(var_2, (arr_0 [i_0])))))))) - (max(14494003334746655892, (arr_1 [i_0] [i_0])))));
        var_17 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (-1811861060 != 2674416462);
        var_19 = ((-3952740738962895738 ? (46753 | 15) : (((((var_9 ? 23 : -23514)) == 32765)))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 -= (arr_2 [i_1]);
                        var_21 &= (max((arr_9 [i_4] [i_1] [i_1] [i_4 - 2]), 14494003334746655892));
                        var_22 = (max(var_22, (arr_9 [i_1] [i_1] [i_1] [i_4])));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_23 = (max(((max(73, 73))), (max(((var_13 ? 3952740738962895718 : 44)), ((((arr_1 [i_5] [i_5]) | (arr_7 [i_5] [i_5 + 1]))))))));
        var_24 = ((((min(var_8, 0)) / -var_13)) <= (max((max((arr_13 [i_5] [i_5] [i_5] [i_5]), -5)), (((24233 ? 12 : (arr_15 [i_5])))))));
    }
    var_25 = var_6;
    var_26 = -var_2;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_27 = (((arr_2 [i_6]) ? (arr_2 [i_6]) : (arr_2 [i_6])));

        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            var_28 = (((arr_1 [i_7 - 3] [i_7 - 3]) ? (arr_1 [i_7 - 1] [i_7 - 2]) : (arr_1 [i_7 - 3] [i_7 - 3])));
            var_29 &= (((arr_2 [i_7 - 3]) ? (arr_11 [i_7 - 3] [i_7 - 2] [i_7 - 1]) : (arr_11 [i_7 - 2] [i_7 + 1] [i_7 - 1])));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_30 = (max(var_30, ((((arr_8 [i_6] [i_8] [i_8]) ? -5 : var_14)))));

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_31 = (max(var_31, ((((arr_11 [i_9 + 1] [i_9 + 1] [i_9 + 1]) ? (arr_11 [i_9 + 2] [i_9 + 2] [i_9 + 2]) : (arr_9 [i_9 - 1] [i_9 - 1] [6] [i_9 - 1]))))));
                var_32 = (min(var_32, (arr_7 [8] [i_8])));
                var_33 ^= ((-(arr_13 [i_9] [i_9] [i_9 - 1] [0])));
            }
            var_34 = var_2;
            var_35 = 440302471;
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_36 = var_1;
            var_37 = (((((var_4 ? 65535 : 2728657990))) ? 1 : (arr_1 [i_10] [i_6])));
            var_38 = (var_14 ? (arr_23 [i_6]) : (arr_23 [i_6]));
        }
    }
    #pragma endscop
}
