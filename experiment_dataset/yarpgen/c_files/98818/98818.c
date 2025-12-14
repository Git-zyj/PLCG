/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((!((!(((11 ? 54536 : (arr_4 [i_1] [i_1])))))))))));
                    var_15 = (min(var_15, ((((((17 ? ((((arr_1 [i_2]) || 26))) : (-1465492825 & 220)))) ? (min(36, 511)) : -1465492847)))));
                    var_16 += ((-(arr_0 [i_2])));
                }
            }
        }
        var_17 = max((((((var_11 ? var_11 : var_10)) == ((12 ? (arr_2 [i_0]) : 145))))), ((max(26, 1))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 = (((((((arr_0 [i_4]) ? 2163173777487576958 : -127)))) ? ((11002 ? -69 : -5939103798242919859)) : (((-(arr_0 [i_0]))))));
                    var_19 = (((((var_5 ? var_3 : (arr_0 [i_0])))) ? (arr_3 [i_0]) : ((min((669703059 / 14982), 215)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    {
                        var_20 = (max(var_20, ((26 ? 11005 : 6221))));
                        var_21 = 57;
                        var_22 -= ((((max(var_2, (arr_10 [i_7 + 4] [i_7 + 4] [i_7 + 2])))) | (((min(1, 85))))));
                        var_23 = (max(var_23, (((((((arr_4 [i_5 + 3] [i_7 + 4]) ? (arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1]) : (arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1])))) ? (((arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1]) ? (arr_10 [i_5 + 3] [i_7 + 4] [i_7 + 1]) : var_11)) : 67)))));
                        var_24 ^= 39;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_25 = ((((arr_20 [i_8]) ? (arr_20 [i_8]) : -1)));
        var_26 &= var_9;
        var_27 |= ((-101 ? 1 : -1239163930991157687));
        var_28 = (max(var_28, (arr_20 [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_29 = ((((((arr_22 [i_9]) ? (arr_22 [1]) : (arr_19 [i_9])))) ? ((var_2 ? 57 : (arr_19 [i_9]))) : 708900459019697839));
        var_30 = (((arr_22 [i_9]) <= -467029308));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                {

                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        var_31 ^= (((arr_30 [i_11 - 1] [i_11 - 1] [i_11 + 2] [2] [i_12 + 1] [i_12 + 1]) >= (arr_30 [i_11 - 1] [i_11 - 1] [i_11 + 2] [12] [i_12 + 1] [i_12 + 1])));
                        var_32 = (((((var_13 ? (arr_19 [i_11 + 1]) : 65507))) ? 1 : var_11));
                    }
                    var_33 += ((18446744073709551615 ? (arr_20 [i_9]) : (arr_22 [i_9])));
                    var_34 &= -642314847;
                }
            }
        }

        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            var_35 = (max(var_35, var_5));
            var_36 = var_11;
            var_37 = (arr_33 [i_13]);
        }
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            var_38 = ((-1 ? 5 : -69));
            var_39 = ((var_9 ? (arr_23 [i_14 - 1]) : var_7));
            var_40 ^= (!67);
        }
        for (int i_15 = 1; i_15 < 14;i_15 += 1)
        {
            var_41 = ((~(arr_23 [i_15 - 1])));

            for (int i_16 = 2; i_16 < 16;i_16 += 1)
            {
                var_42 *= ((271453832399278780 ? (arr_19 [i_15 - 1]) : 53215));
                var_43 = (max(var_43, ((((~var_4) ? (arr_36 [i_9] [i_15 + 2] [16]) : ((1 ? -2124436630 : var_2)))))));
                var_44 = (((((99 ? (arr_31 [i_9] [1] [i_16] [i_16]) : 6252887065046194269))) ? 12 : (((0 > (arr_27 [i_9] [i_9]))))));
            }
        }
    }
    var_45 = (max(var_45, (max(var_10, 9))));
    #pragma endscop
}
