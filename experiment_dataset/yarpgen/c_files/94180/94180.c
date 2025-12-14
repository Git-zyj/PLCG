/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? ((((min(2477, var_5))) ? -2503 : var_4)) : var_4));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 ^= (max(-1479749057, 98));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] = (arr_8 [i_2] [i_1]);
                                var_21 = (max(4192256, 12));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_22 = ((!((min(((min(-2487, var_13))), ((var_16 ? var_15 : (arr_10 [i_5] [i_1] [i_1] [i_5] [i_1]))))))));
                            var_23 = (((arr_16 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_5] [i_5] [i_6]) ? (~-1501) : ((1 ? var_14 : ((4182060882 ? var_5 : var_13))))));
                        }
                        var_24 += var_5;
                        arr_18 [i_5] [i_5] [i_2] [i_1] [17] [i_5] = (~((249 ? 2498 : -2488)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_25 *= ((((-53 ? -25167 : var_7)) <= (~var_0)));
                        arr_21 [i_0] = 229;

                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_26 = (((((var_1 ? var_15 : 13474))) ? (arr_1 [i_8 + 1]) : 15096452153763911459));
                            var_27 = ((!(arr_4 [i_0 - 3] [i_1] [i_2])));
                            arr_25 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = (((!var_2) ? var_17 : ((var_0 ? 3 : -13512))));
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_1] = 1;
                    }
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        var_28 = (-24360 || var_11);
                        arr_30 [i_0 + 1] [i_9] [i_2] [i_9 - 2] = var_1;
                    }

                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_29 = var_17;
                        var_30 *= var_17;

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_31 = (max(var_31, (((!((min((arr_8 [i_11 - 1] [i_11]), 1))))))));
                            var_32 = 3876795446686293588;
                        }
                    }
                }
            }
        }
        var_33 = ((!((!(~var_17)))));
        var_34 = (min(var_34, ((((var_18 <= 4294967295) >> (((min(var_8, var_7)) + 6703140854902189277)))))));
    }
    #pragma endscop
}
