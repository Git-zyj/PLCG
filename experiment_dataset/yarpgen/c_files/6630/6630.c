/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_15, (~147)));
        var_16 ^= (0 * 4294967295);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 *= (max((arr_2 [i_2 + 2]), ((min(var_15, (arr_2 [i_2 + 1]))))));
                        arr_14 [i_1] = (min((max(((min((arr_8 [i_1] [i_2] [1]), var_3))), (arr_0 [1]))), -1));
                        var_18 = ((-(((220 == (arr_5 [i_1] [1]))))));
                        var_19 = var_4;
                        var_20 = (1 * 1293750125);
                    }
                }
            }
        }
        var_21 *= ((((((2147483647 != 2603) ? (((arr_7 [12] [3]) ? var_10 : (arr_11 [i_1] [i_1] [i_1] [14]))) : (1 && 41583)))) ? ((max(var_4, (!var_4)))) : ((((arr_11 [i_1] [i_1] [i_1] [16]) && var_5)))));
        var_22 ^= ((+(min(var_1, (((arr_0 [i_1]) / (arr_10 [i_1] [i_1])))))));
        var_23 = (min((((!(((584235413 ? 9223372036854775807 : 7361645354168349574)))))), (min((min(var_13, 4)), (((126172661 ? (arr_4 [i_1]) : -26293)))))));
        var_24 *= (((((!-1535514813) && var_1)) ? (((~(var_15 - var_5)))) : (max((max((arr_6 [i_1] [1]), var_9)), 229))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 *= 1;
        var_26 = (~32767);

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_27 |= (((((((max(2983858626, 274))) ? (((var_10 ? 45489 : 1))) : var_3))) ? ((((-32767 - 1) * 0))) : 24));
            arr_21 [i_5] = (arr_13 [i_6]);
        }
        arr_22 [i_5] = (arr_1 [i_5]);
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 15;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_7 + 1] [i_7] = min((((~16210840698146733532) ? 11796451414601216258 : (((arr_10 [i_7] [i_7]) % 1)))), ((((arr_23 [i_7]) ? (((arr_5 [i_7] [7]) ? 4294967295 : (arr_25 [i_9]))) : (var_15 < 7175786870403635153)))));
                    arr_32 [4] [10] [1] [6] = ((-(max(2155514346, 1))));
                    arr_33 [1] = (max(((((arr_4 [i_8]) >> ((((min(var_11, (arr_29 [i_7] [i_8 + 3] [i_8 + 3])))) + 122))))), (((arr_10 [i_7 + 1] [i_7 - 1]) >> (((arr_10 [i_7 + 1] [i_7 + 3]) - 17511447436660907852))))));
                }
            }
        }
        var_28 ^= (max((arr_29 [i_7] [i_7] [i_7]), ((((min(63, 0))) ? (((arr_15 [i_7]) ? var_9 : var_6)) : (((!(arr_25 [i_7]))))))));
        arr_34 [1] [i_7] = (!-14317678958255927729);
        var_29 *= (((arr_4 [8]) ? (0 && 119) : ((((arr_4 [6]) || 1259682100)))));
        var_30 = (((max(((((arr_4 [6]) && -1152921504606846976))), (min((arr_0 [i_7]), var_7)))) == (((-(arr_1 [1]))))));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    var_31 = (min((((arr_2 [i_10]) ? var_7 : (arr_36 [i_10]))), ((1 ? var_3 : (arr_36 [i_12])))));
                    arr_44 [i_12] [4] [4] = ((((var_12 && 10801916592255532256) ? (((var_11 && (arr_37 [i_10] [14] [i_12])))) : (!2040))));
                }
            }
        }
    }
    var_32 = (min((max((min(var_8, var_5)), var_15)), 241));
    var_33 = (min((max(((min(var_10, var_6))), ((var_3 ? var_10 : var_5)))), var_9));
    #pragma endscop
}
