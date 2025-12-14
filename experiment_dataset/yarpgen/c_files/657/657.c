/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 *= var_6;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 = (max(var_17, ((((((-711057525 ? 1 : 15090))) ? 1 : 2097151)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [1] [i_2 + 2] |= (~1);
                    var_18 = (((((782352182 << (var_4 - 499205380902842018)))) ? (arr_1 [i_1]) : (arr_7 [i_0 - 3])));
                    var_19 = (max(var_19, (((var_13 ? (arr_9 [1] [i_1]) : (((arr_6 [i_0] [i_0]) / 4134027854)))))));
                    var_20 -= 75;
                }
            }
        }
        var_21 = ((var_0 ? ((var_7 ? (arr_3 [i_0]) : var_8)) : ((var_10 ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : 1))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_20 [i_3 + 1] [i_3 - 1] [i_3] = (((((var_13 + (((var_4 ? var_0 : var_12)))))) ? (4294836224 || -1) : var_11));
                        var_22 = (min(-126, ((((min(var_1, var_12))) ? (arr_16 [i_3] [i_3] [i_3 + 1]) : (~var_1)))));
                    }
                }
            }
        }
        arr_21 [i_3] = ((min(((var_2 ? -1297736384 : -93)), 19)));
        arr_22 [10] &= ((((((-44 ? (arr_16 [16] [i_3 - 1] [i_3 - 1]) : var_0))) ? var_7 : (((arr_11 [i_3]) ? var_6 : var_13)))));
    }
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_23 = ((((min(0, (max(var_4, 53))))) ? ((((max(16246845141994432542, var_0))) ? (arr_7 [i_7 + 3]) : -var_9)) : (max((min(997854230520802611, var_6)), (~249)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_24 = (max(var_24, (!var_5)));
                                arr_36 [i_7 + 3] [i_7] = 18446744073709551599;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        arr_39 [i_7] = ((!(arr_35 [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9 + 1])));
                        arr_40 [i_7] [i_7] [i_7 + 1] [i_7] = var_12;
                        var_25 -= (((((26488 ? 21681 : 749090755))) ? -18 : (~911679982353858054)));
                    }
                    arr_41 [i_7] [i_7] |= 191;
                }
            }
        }
        arr_42 [i_7] = (min(((var_11 < (var_9 ^ 217713321))), var_10));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {
                    {
                        arr_52 [i_7 - 1] [i_7] [i_7] [i_7] = (((arr_19 [i_15] [i_15 + 1] [i_15 + 1] [i_13]) ? ((var_3 | (arr_19 [i_15] [i_15 + 1] [1] [i_13]))) : ((((!(arr_19 [i_15] [i_15 + 1] [i_15] [i_13])))))));
                        var_26 = (max(var_26, ((((((arr_30 [i_7 - 1] [i_7 - 1]) ? (max(-217713298, 4294967295)) : (arr_2 [i_7] [i_7]))) & (arr_43 [12] [12] [i_14]))))));
                    }
                }
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
