/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((!(0 != var_0))) ? var_10 : ((var_6 ? ((0 ? var_9 : var_8)) : var_11))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 &= (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_18 = (arr_1 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [5] [i_3] = ((((0 << (var_3 + 1496144797)))));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_19 = 9330544059702645916;
                            var_20 = (max(var_20, ((((!(arr_8 [i_0] [14] [i_1] [i_1] [i_2])))))));
                            var_21 = ((var_13 * (!var_1)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [i_3] [i_3] [i_3] [11] [11] [i_0] [i_3] = ((arr_13 [i_0] [15] [i_1] [i_0] [i_3 + 1] [11] [i_5]) - ((var_13 ? var_15 : var_13)));
                            arr_19 [i_3] [i_1] [i_2] [2] = var_4;
                            var_22 = (arr_2 [i_1]);
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_23 = var_5;
        arr_24 [11] = (~var_15);
        var_24 ^= ((-((1 ? (var_5 && 1) : (arr_23 [i_6])))));
    }
    var_25 = ((var_8 ? (((~(!var_12)))) : (((((var_11 ? var_14 : 1))) ? var_1 : var_0))));
    var_26 = var_11;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_37 [i_7] [i_7] [i_10] [4] [i_8] [i_7] = 2177481952182908942;
                                var_27 &= (arr_27 [i_10]);
                                arr_38 [i_7] [i_7] [i_9] [i_10] [i_11] [i_7] = var_6;
                                var_28 = ((-(!15719147748508528667)));
                            }
                        }
                    }
                    var_29 = (!-var_2);
                }
                var_30 = var_10;
                arr_39 [i_7] [i_8] [i_8] = var_13;
            }
        }
    }
    #pragma endscop
}
