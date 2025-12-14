/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 = (max((((min((arr_1 [i_0]), var_2)))), var_16));
        var_20 = var_3;
        var_21 |= (((arr_0 [i_0]) < var_1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 = (((-436067592 + 2147483647) >> (((~var_8) - 9276))));
                        var_23 = (-2147483647 - 1);
                        var_24 = (arr_9 [i_0] [i_3 + 1] [i_2] [i_3]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_25 = var_10;
                        var_26 = (arr_9 [i_0] [i_4] [i_4] [16]);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_27 &= ((((((var_8 ? var_16 : var_11)))) ? (((-((var_16 ? (-32767 - 1) : var_17))))) : (((arr_1 [i_7]) ? var_17 : (arr_5 [i_7] [i_7])))));
        var_28 = (-32767 - 1);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    {
                        var_29 = (max(var_29, ((max(((min((220 - 29609), (arr_27 [i_7])))), (((arr_28 [i_7] [2]) % (((arr_10 [i_7] [i_7] [i_7]) | var_13)))))))));
                        var_30 = (max(var_12, (((arr_3 [i_10 + 1] [i_8 + 4]) & (arr_19 [i_7] [i_7])))));
                        var_31 = (((((var_14 ? (166 - 23287) : (-32767 - 1)))) ? -32 : var_8));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_32 = (min(var_32, (((((min(var_16, 58))) > var_10)))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_33 = var_9;
                                var_34 |= ((~(arr_16 [i_12 + 1] [i_12 + 1])));
                                var_35 = (((-(arr_37 [i_12 + 1] [i_12] [i_15 + 2]))));
                            }
                        }
                    }
                    var_36 = ((((((arr_10 [i_11] [i_12 - 1] [i_13]) >> (((arr_10 [i_11] [i_12 + 3] [i_13]) - 115))))) ? 23287 : (arr_15 [i_13] [i_13] [i_11] [i_12] [i_11] [i_11])));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_37 = ((-(var_8 / var_3)));
                                var_38 = ((((-5790746715602910110 % (~var_3))) < (arr_20 [i_12 - 1])));
                                var_39 = (arr_17 [i_11]);
                                var_40 = var_1;
                                var_41 = (min((((max(1778220824, 29599)))), (max((~42249), (-9223372036854775807 - 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
    {
        var_42 *= ((~((-var_10 & ((((!(arr_36 [i_18] [19])))))))));
        var_43 = (-32767 - 1);
        var_44 = (((arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) >= (((arr_29 [i_18] [i_18]) ? var_16 : 115))));
    }
    /* LoopNest 3 */
    for (int i_19 = 3; i_19 < 8;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 7;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 8;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            {
                                var_45 = 7901772123337182021;
                                var_46 = ((+(((~var_4) & 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 10;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 10;i_25 += 1)
                        {
                            {
                                var_47 = (398988827 || 1);
                                var_48 -= (((((var_9 / ((var_0 ? var_13 : 42248))))) ? (((max((arr_39 [i_19] [i_20] [i_21 + 2]), (arr_37 [i_19] [i_20] [i_21 + 2]))))) : (((arr_53 [i_21 + 2]) ? ((((arr_1 [i_20]) + (arr_11 [i_25])))) : ((147 ? 174 : 16597009099746543299))))));
                            }
                        }
                    }
                    var_49 = (max(var_49, (((-686307629 <= (~var_8))))));
                }
            }
        }
    }
    #pragma endscop
}
