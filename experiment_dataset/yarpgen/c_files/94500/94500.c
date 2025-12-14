/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 = (!94);

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = ((((!(arr_9 [i_3] [i_3] [21] [18] [i_1] [i_0]))) ? var_11 : ((var_17 ? 5 : 1))));
                        arr_12 [18] [18] [19] [i_0] = ((0 && (arr_1 [i_0] [i_0])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = (i_0 % 2 == zero) ? (((var_5 >> (((arr_5 [i_0] [i_1]) - 12064087282088936016))))) : (((var_5 >> (((((arr_5 [i_0] [i_1]) - 12064087282088936016)) - 14126758075416705864)))));
                        arr_17 [i_0] [i_0] [i_1] [i_0] [i_5] = -0;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_27 [i_0] [12] [i_8] [i_0] = (((arr_24 [i_0] [i_6] [i_7]) ? 1 : (arr_24 [i_0] [i_6] [i_8])));
                        var_22 = (min(var_22, (((((5063771341280930899 ? 0 : -3697695941157153165))) ? (arr_26 [20] [i_6] [i_7] [i_8]) : 0))));
                        var_23 -= ((0 ? (~0) : 2147483647));
                    }
                }
            }
            var_24 = (var_6 >= (arr_25 [i_6]));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_10] [i_0] = (2147483647 >= 0);
                        var_25 ^= (arr_1 [i_0] [20]);
                        var_26 |= -865283222;
                        arr_35 [i_9] [i_0] = (arr_1 [i_0] [i_0]);
                        var_27 = 19689;
                    }
                }
            }
            var_28 = (arr_6 [i_6] [i_6] [i_6] [i_0]);
        }
        var_29 ^= (arr_32 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = 1;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                {
                    var_30 = ((~(!var_18)));
                    var_31 ^= (arr_19 [i_11] [1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            {
                arr_54 [i_14] [i_14] [i_15] = (((min((max(13, 19)), -3697695941157153165)) * 3697695941157153189));
                var_32 = (max(var_32, ((min((max(4773, ((9750 ? 0 : 865283220)))), 1)))));
                arr_55 [1] [i_14] [i_15] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            arr_65 [i_17] [i_17] [i_18] [5] [i_19] [i_19] = ((((-8255627433900260424 ? (arr_56 [i_16] [i_17]) : (arr_56 [i_16] [i_19]))) | (min(0, (arr_56 [i_19] [i_18])))));
                            var_33 = ((((max((~0), (arr_51 [i_18] [8])))) ? (((~(~1)))) : (min((arr_6 [5] [i_17] [i_18] [i_19]), var_18))));
                            var_34 &= (min((~1), (arr_1 [i_17] [i_16])));
                            arr_66 [i_16] [i_17] [i_17] [i_16] = ((~((1 ^ (arr_16 [i_17] [i_17] [i_17])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_35 = (arr_41 [17] [i_17]);
                            var_36 = (min(var_36, (min(((!((max(71, 13382972732428620717))))), 1))));
                        }
                    }
                }
                var_37 = (arr_64 [1] [i_17] [i_17] [i_17] [i_17] [7]);
            }
        }
    }
    var_38 = (max(19689, 1));
    #pragma endscop
}
