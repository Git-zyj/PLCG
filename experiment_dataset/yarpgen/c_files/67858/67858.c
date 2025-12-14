/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_14;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        arr_3 [i_0] [i_0] = ((var_6 ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (min((-9223372036854775807 - 1), -4032966122907752862));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (min((((arr_7 [i_1] [i_0]) ? (max(3840, var_3)) : (((arr_5 [i_0] [i_0]) ? var_8 : var_2)))), (arr_0 [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [2] [i_1] [i_1] [2] |= (arr_8 [6]);
                        arr_13 [i_0] [i_0] = ((!((((((9223372036854775796 ? (arr_5 [i_0] [i_0]) : var_7))) ? ((var_3 ? 857031659 : (-9223372036854775807 - 1))) : (arr_6 [i_0]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 1] = 9223372036854775796;
                        var_18 = (max(var_18, var_4));
                    }
                }
            }
        }
        arr_15 [12] &= ((2997545104 ? 70 : (!268402688)));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_18 [i_4] [i_4 + 1] = -4549;

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_21 [i_5] = max((min(9223372036854775807, -32750)), (((((min((arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4]), var_14))) != (min((arr_16 [i_4]), -7949389083804161070))))));
            var_19 = ((min((arr_19 [i_4] [i_5] [i_5]), (var_12 - 4548))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_20 *= (((max(-2083451870, 0))) ? (max((arr_20 [i_4 + 1]), 5078472351787214933)) : -9223372036854775804);
                        arr_29 [i_7] [i_6] [i_5] [i_5] [i_7] = var_13;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_21 = 9223372036854775807;
                    var_22 = (--9223372036854775804);
                    var_23 ^= (3132312201309758062 ? 857031659 : -92);
                    var_24 = var_14;
                }
            }
        }
        var_25 += (arr_32 [i_4] [i_4]);
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        var_26 = (min((min(2341482724981493202, (arr_39 [i_10 + 1] [i_10 + 1]))), (arr_39 [i_10 + 1] [i_10 + 1])));
        arr_40 [i_10] = (min((min(9223372036854775804, -1)), (-4428 && var_0)));
    }
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        var_27 = -var_9;
        arr_44 [i_11 + 1] = (-var_1 + -345323712652319161);
    }

    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        arr_47 [i_12] = ((((min(((var_1 * (arr_38 [i_12] [i_12]))), 314317237))) ? (min(5, 6324054765652819275)) : -5850));
        var_28 -= max((((arr_38 [i_12] [i_12]) ? (arr_46 [i_12]) : 17623)), (((86 ? (-25447 * var_1) : (arr_38 [i_12] [i_12])))));
        arr_48 [i_12] |= 8690968002328106834;
    }
    #pragma endscop
}
