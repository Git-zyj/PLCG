/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 16861;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (((arr_2 [i_0]) ? 9489 : (arr_2 [i_0])));
        arr_3 [i_0] = (max(((max(-1487902882, 35022))), (((!((max(var_8, var_4))))))));
        var_21 = 5616325913093989087;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 = (min(var_22, (+-9885)));
                    arr_12 [i_1] [i_2] [i_1] = (~-5680960244964731836);
                }
            }
        }
        arr_13 [i_1] = ((-(((var_3 <= (arr_4 [i_1]))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_5] = (((!var_17) == (((min(var_14, (arr_14 [i_4])))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_27 [i_5] [i_4] [i_5] [i_4] = (((!(((~(arr_0 [5])))))));
                        arr_28 [i_5] [i_6] [i_5] [i_5] = var_0;
                    }
                }
            }
            arr_29 [i_5] [i_5] = (min(4449764054053151355, (max((max((arr_20 [i_5] [i_5] [3] [i_4]), var_11)), ((((arr_24 [i_4] [i_5]) ? var_17 : var_18)))))));
            var_23 = (min(var_23, (arr_15 [12])));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            arr_32 [i_4] [i_8] = -9463;
            arr_33 [i_4] [i_4] [i_4] = ((var_0 == (arr_20 [i_8 - 2] [i_4] [i_4] [i_8 - 1])));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_24 = (((((44712 ? -1487902869 : 41556))) ? 62444 : 1487902895));
            var_25 = (((((((arr_22 [i_4] [i_4] [i_9] [14]) <= 255)) ? (((var_1 ? (arr_36 [i_4]) : -1))) : ((var_2 ? (arr_5 [i_9]) : var_5))))) ? (((~(65532 == 51338)))) : ((8495092514943896843 ? var_15 : var_1)));
            var_26 = (arr_22 [i_4] [10] [i_4] [i_9]);
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_27 &= (min(-1, (46030 & -3833)));

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_43 [i_4] [10] [i_4] [i_4] = ((7319921490051166297 ? 467016153096819909 : (arr_10 [i_4] [i_4] [i_4] [i_4])));
                arr_44 [13] [i_11] [i_10] [13] = ((!((min(387, var_18)))));
                var_28 = var_14;
                arr_45 [i_4] [i_4] [i_4] = (max((((805306368 ? 1020 : 5616325913093989067))), (var_12 == var_9)));
                arr_46 [14] [i_10] [7] = (((((min(var_3, var_18)) ? (((arr_36 [i_4]) ? var_1 : (arr_20 [i_4] [i_4] [i_4] [i_4]))) : (((3184909121 ? 3 : (arr_18 [i_4]))))))));
            }
        }
        var_29 = (((((min((arr_23 [i_4] [i_4] [i_4]), var_9)))) ? (((min(var_16, (arr_24 [i_4] [i_4]))))) : (max((arr_42 [i_4] [i_4] [i_4] [i_4]), (arr_15 [i_4])))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_30 = ((((((var_5 ? var_0 : (arr_0 [i_14]))) ? var_10 : var_8))));
                        arr_54 [i_4] [i_4] [i_4] [i_4] [i_4] [i_13] = ((((max(-0, 1))) <= (((!(arr_17 [i_13] [12]))))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_15 = 2; i_15 < 13;i_15 += 1) /* same iter space */
    {
        var_31 = (arr_55 [i_15] [14]);
        var_32 &= (((arr_55 [i_15 + 4] [3]) ? (13392 == 1) : -var_14));
        var_33 = (!var_6);
        arr_57 [i_15 + 1] = (var_11 - -var_17);
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
    {
        var_34 = (arr_55 [i_16 - 2] [i_16]);
        var_35 = ((((((arr_59 [i_16]) ^ (arr_56 [i_16] [6])))) ? ((0 ? var_15 : var_7)) : ((~(arr_58 [i_16] [i_16])))));
        var_36 += (!-522667075);
        var_37 = ((((((arr_59 [i_16]) ? (arr_55 [i_16 + 2] [9]) : var_18))) ? ((-(arr_56 [i_16] [i_16]))) : ((((var_12 == (arr_59 [i_16])))))));
        arr_60 [i_16 + 1] = ((((((arr_56 [i_16] [i_16 + 1]) ? -5616325913093989076 : var_7))) ? (arr_58 [10] [i_16]) : var_8));
    }
    var_38 -= ((-((((min(var_3, var_13))) ? 2252919212 : (var_11 <= var_4)))));
    #pragma endscop
}
