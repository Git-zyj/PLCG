/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (((arr_3 [i_0] [16] [i_0 + 1]) == (min(var_5, 65532))));
                    var_13 = ((-(((!(var_4 - 4457283414689564441))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 &= ((-(((arr_8 [i_3 + 1] [i_1 - 1]) & (arr_8 [i_0] [i_2 - 2])))));
                                var_15 = (min(var_15, ((min((arr_9 [i_4] [13]), ((~(-9223372036854775807 - 1))))))));
                            }
                        }
                    }
                    var_16 = ((((-9223372036854775807 - 1) > (-9223372036854775807 - 1))) ? (min((-9223372036854775807 - 1), -2821454033901873045)) : (((min(56607, (arr_5 [17] [i_0 - 1]))))));
                }
            }
        }
        arr_11 [i_0] = arr_2 [i_0] [i_0] [i_0];
    }
    var_17 = ((-var_2 % (var_4 & 2147483647)));

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_18 = (max((6295504346773124913 ^ 18646), ((((arr_13 [13] [i_5]) ? 8156 : 44706)))));
        arr_16 [i_5] = ((((max((!-801673899), 57373))) ? (((min(2251799796908032, (arr_14 [i_5]))) << (((max(var_4, -798196034)) - 8509550902222642273)))) : (9223372036854775807 ^ var_8)));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_19 = var_7;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_20 = (((~6670) && ((min((arr_22 [i_7 - 2] [i_7 + 1] [i_7 - 1]), 20299)))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_6] = ((max(var_3, (min(33546240, (arr_26 [i_10] [i_9] [i_7]))))));
                                arr_32 [i_6] [i_6] [0] = 3543;
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_6] [i_6] = -58866;
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_21 = var_1;
        var_22 *= ((-932393907 == (max(-4665208735446200874, var_1))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_23 = (max(var_23, 0));
        var_24 = (8191 ^ 3483);
        var_25 = (max(var_25, 53336));
        arr_40 [i_12] [i_12] = 534814943;
    }
    var_26 = (min(var_26, ((-(~932393918)))));
    var_27 = var_9;
    #pragma endscop
}
