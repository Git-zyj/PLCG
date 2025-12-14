/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_16 = (-(~131071));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_17 = ((!((!(!var_15)))));
                        var_18 = ((!(((-((-(arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                        var_19 &= ((!(((~(~var_2))))));
                        var_20 = (!-2722358080226300051);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            var_21 = ((-(((!(~var_12))))));
                            var_22 = ((!(((-(((!(arr_18 [i_5] [i_4] [i_0] [17] [i_0] [17])))))))));
                        }
                        var_23 = ((~((~(!208759124)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_24 = ((!(((~(~var_4))))));
                                var_25 &= (~((~(~var_8))));
                                var_26 ^= ((-((~(~-9676)))));
                                var_27 &= ((~(((!(~-2722358080226300063))))));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        var_28 = ((!(~var_12)));

                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            var_29 = (((-(~159))));
                            var_30 = (((~(((!(arr_20 [i_9] [i_1] [i_1] [i_8] [i_9])))))));
                        }
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_31 += (~-var_0);
            var_32 = ((!(((~(~34585))))));
            var_33 = (--var_4);
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_34 ^= ((!(((~(~var_7))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    {
                        var_35 = (~var_6);
                        var_36 = ((~((~(~-707443172)))));
                        var_37 = (arr_33 [i_0 - 1] [19] [i_12]);
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_38 = ((-(((!(((~(arr_3 [i_0] [i_0])))))))));
            var_39 = ((-((~((~(arr_3 [22] [i_14])))))));
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    {
                        var_40 *= ((-((~(~var_2)))));
                        var_41 *= ((!(~-var_5)));
                        var_42 += ((!(!2722358080226300037)));
                        var_43 = ((((-(arr_17 [i_0] [i_0])))));
                    }
                }
            }
        }
        var_44 &= ((-(!1)));
        var_45 += ((~(((!(((-(arr_32 [19])))))))));
    }
    var_46 = ((-((~(~var_9)))));
    var_47 = ((~((-(~var_6)))));
    #pragma endscop
}
