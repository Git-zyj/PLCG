/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 4176794796;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 &= (((((8 ? 106 : 4176794778))) & (arr_0 [i_0] [i_0])));
        var_15 = (2021530101 / 248);
        var_16 *= (((arr_1 [i_0] [i_0]) - -42));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_0] [i_0]) ? (var_2 < 832905182) : (arr_4 [i_0] [i_0])));
                    arr_8 [i_1] [i_2] [i_2] |= -4075157602952929489;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_18 = ((!(arr_9 [i_3])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((arr_3 [6] [i_6] [i_5]) || (arr_6 [i_3] [i_4] [9] [9]))))));
                            var_20 = (168 > 49615);
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_25 [i_3] [20] [i_8] [i_8] = var_8;
                var_21 = ((arr_12 [i_8] [i_4]) ? (((!(arr_9 [i_4])))) : var_10);
                arr_26 [i_4] [1] [i_8] [i_8] = ((-0 ? (-42 && 4176794789) : (var_12 && 24451)));
            }
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_30 [i_9] = (((((var_12 ? 3351047057313932933 : 25))) ? 1 : (~var_7)));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_22 = (arr_27 [i_3] [i_3] [1]);

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_23 = (min(var_23, (536870784 > 0)));
                            var_24 = (max(var_24, ((((-14454 ^ 1795996678) ? (-14454 | 2438475647) : (((-69 ? 0 : 40630))))))));
                            var_25 = ((((var_11 ? (arr_22 [i_3] [i_9] [i_10] [i_9]) : (arr_13 [i_3]))) >= var_7));
                            var_26 = ((-18330 | (~var_1)));
                            var_27 = var_11;
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_28 = (arr_6 [i_3] [i_9] [i_10] [i_10]);
                            arr_41 [i_13] [i_13] [i_3] = (((arr_23 [i_3] [i_9] [i_10]) ? (!18446744073709551604) : (((arr_39 [i_3]) ? 11435 : var_3))));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_29 = (max(var_29, (((14454 ? 26373 : (arr_33 [i_3]))))));
                            arr_45 [i_9] [i_9] [i_14] [i_9] [i_9] = (((var_9 >= var_6) ? var_11 : (arr_28 [i_3])));
                        }
                        var_30 = (((((arr_36 [1] [i_9] [i_10] [i_10] [14] [1]) && 3351047057313932933)) || (((-127 - 1) && 32762))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                {
                    arr_51 [i_16] [i_15] [17] |= ((((((arr_16 [i_3] [i_3] [i_16]) ? 175 : 1))) ? ((var_2 ? (arr_29 [i_3]) : 18)) : (arr_14 [i_3] [i_15])));
                    var_31 = -14463;
                    arr_52 [i_15] [i_16] = (~var_3);
                }
            }
        }
        arr_53 [i_3] = (arr_38 [i_3] [i_3] [13] [i_3] [i_3] [i_3] [i_3]);
    }
    #pragma endscop
}
