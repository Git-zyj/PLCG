/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_18 ^= ((((((((-1086097305 ? 2034119 : 8))) ? ((min(var_2, -1313551182))) : (min(1, 2095124542))))) ? (~1171603641) : (~130)));
                var_19 += (min((arr_0 [i_0] [i_1 - 2]), (min((arr_3 [i_1 - 3] [i_0] [i_0]), (arr_3 [5] [5] [5])))));
                var_20 ^= ((((max((min(125, 0)), 1))) ? ((var_8 ? ((min(509678241, var_17))) : ((var_4 ? var_0 : (arr_1 [12]))))) : var_12));
            }
        }
    }
    var_21 = (min(var_21, (((((min(var_17, (0 % var_5)))) ? var_12 : -var_11)))));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = (min(((16301 ? -17 : ((min(1, 0))))), (((max(113, 1))))));

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_23 = 9223372036854775807;
                var_24 ^= (((52 ? 777717026 : 1)));
            }
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_25 += ((((min((arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1]), var_6))) ? (max((~var_16), 105)) : 1));
            var_26 = ((min((max(var_5, -17)), var_12)));
            arr_12 [i_2] [8] [i_5 + 1] = ((((min((arr_3 [12] [i_5 + 1] [i_5 + 1]), (arr_3 [i_5] [i_5 + 1] [i_5 + 1])))) ? (arr_6 [i_5 + 1] [i_5 + 1]) : (max(-6, 2))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_16 [i_2] = 1;
                var_27 = (max((arr_14 [i_5]), var_3));
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_28 = ((min((((arr_23 [i_2] [i_8] [6]) ? var_0 : var_13)), (!1))));
                            arr_24 [i_2] [i_5 + 1] [i_7] [i_5] [i_9] = (min(0, 40));
                            var_29 = (min(var_29, ((max((((14507 ? var_3 : var_14))), (((!(((var_11 ? var_9 : 0)))))))))));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_30 ^= ((~(~var_14)));
                    var_31 += -var_6;
                    var_32 += var_8;
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    var_33 = max(((-15 ? 56 : 1)), var_6);
                    var_34 = (min(var_34, (arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                }
                arr_31 [i_7] [8] [8] = (max(var_7, var_15));
            }
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_34 [i_2] [i_2] [i_2] = ((73 ? -1122972316 : 1));
            var_35 = 6;
        }
        var_36 ^= (var_13 ? (((var_7 << (((arr_27 [i_2] [i_2] [1] [i_2] [i_2] [i_2]) - 7234))))) : var_4);
    }
    var_37 = ((var_1 ? var_2 : var_6));
    #pragma endscop
}
