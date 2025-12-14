/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_1 [i_0] [1]) == var_16)))) <= ((0 ? (arr_1 [i_0] [i_0]) : var_1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 -= ((var_2 ? (arr_0 [i_0]) : ((var_9 ? var_3 : var_1))));
                    arr_8 [1] [i_0] = ((1 ? (((arr_4 [i_0] [i_2 + 1] [i_2]) ? var_16 : (arr_4 [i_0] [i_2 + 1] [i_2]))) : ((max((arr_1 [i_0] [i_2 - 1]), var_6)))));
                }
            }
        }
        arr_9 [i_0] = ((((arr_0 [i_0]) > var_1)));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_16 [i_0] [i_0] [6] [i_0] = ((((max((max((arr_0 [i_0]), (arr_15 [i_0] [i_3 - 1] [i_3 + 3] [i_3 + 3]))), var_5))) ? ((min((arr_13 [i_0]), 4162291719))) : ((~(~var_8)))));
                    var_18 = (min(var_18, (((((((arr_11 [i_4] [i_3 + 2] [i_3 + 1]) ? (arr_4 [i_4] [i_3 + 3] [1]) : (arr_4 [i_4] [i_3 - 1] [4])))) ? (arr_10 [i_3 + 2] [i_3 + 2] [i_3 - 1]) : (arr_6 [i_4] [i_3 + 1] [i_3 + 2] [i_3 + 2]))))));
                    arr_17 [i_4] [1] [i_0] = (-((var_10 ? var_1 : var_1)));
                }
            }
        }
        var_19 = -6530456154074865831;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 = (max(var_20, ((!(arr_20 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_29 [i_7] = (5336 ? 2147483629 : 5325);
                    arr_30 [i_6] [i_7] [i_7] = ((var_3 != ((5336 ? var_16 : (arr_28 [i_5] [i_6] [i_6] [i_6])))));
                }
            }
        }
        arr_31 [i_5] = (!(((32755 ? 0 : 349880020))));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        arr_35 [i_8] = ((143 ? (((-5326 ? -349880028 : ((13098 ? var_15 : -5336))))) : 5932107187595637028));
        arr_36 [i_8] = max((arr_32 [i_8]), ((((max(var_12, (arr_32 [i_8])))) ? (var_10 * 1025265846) : (~6))));
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        arr_40 [i_9 + 1] = (((((var_5 ? (arr_23 [i_9 + 1]) : var_3))) ? ((((arr_37 [i_9]) ? (arr_18 [i_9] [i_9 + 1]) : var_2))) : (((~var_14) ? ((var_16 ? var_2 : (arr_37 [i_9 + 1]))) : 41948526063135348))));
        var_21 &= (min(((-((var_11 ? (arr_27 [i_9 + 1]) : (arr_27 [i_9 + 1]))))), ((((arr_27 [i_9 + 1]) ? ((-1266265510958231753 ? 1 : -29451)) : (arr_39 [i_9 + 1] [i_9]))))));
        arr_41 [i_9 + 1] = (((((!(arr_24 [i_9] [i_9] [8]))) ? (((1 ? 1 : (arr_34 [i_9])))) : (~var_12))));
    }

    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        arr_45 [i_10 - 1] [i_10 - 1] = (((((~1008) + 2147483647)) << (((arr_12 [i_10 - 2]) ? var_13 : (arr_12 [i_10 + 2])))));
        var_22 *= ((var_9 ? 69 : -730643492));
        var_23 = ((-(((arr_34 [i_10 - 2]) ? (arr_34 [i_10 - 1]) : (arr_34 [i_10 - 2])))));
        arr_46 [1] = (((((arr_44 [i_10]) ? (arr_44 [i_10]) : var_3)) << (arr_44 [i_10 + 1])));
        var_24 -= var_4;
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_25 = min(var_9, 0);
        var_26 = (((((arr_33 [9]) ? 1 : 4294967295))));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_27 ^= (32101 ? 0 : (!3224957965));
        var_28 = (max(var_28, -5326));
        var_29 = (max(var_29, ((((8403745951152952579 ? 2147475456 : -10))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            {
                arr_57 [i_13] = var_11;
                arr_58 [i_13] = ((+(((arr_53 [i_13] [i_14]) ? (arr_51 [i_13] [i_14]) : (arr_52 [i_13] [i_13])))));
                var_30 = var_1;
                var_31 &= (arr_50 [i_13] [i_14]);
            }
        }
    }
    #pragma endscop
}
