/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((min(1668620227, 124))) ? (2018522999 < var_6) : ((26059 ? 2018523014 : var_6))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_13 = -1188348900;
            var_14 = min(((-(~var_11))), (((-(!4080020948178492146)))));
        }
        var_15 = (-((~(min(-27946, 2018522996)))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_16 = ((-(min((max(7906378047483394145, var_2)), -2018522991))));
        arr_9 [i_2 - 1] = (((~var_0) ? (max(var_0, var_11)) : -2142344072395808858));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_17 = (max(var_17, -27945));

            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_5] [i_3] [i_5] = ((~(!1)));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_5] = (~1);
                        var_18 = ((0 ? 1 : 19928));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [i_2 + 1] [i_3] [i_4] [i_5] [i_5] = (((!1) ? (-324283393 > 4080020948178492139) : -28265));
                        arr_27 [i_2] [i_5] = (!1);
                        arr_28 [i_5] = ((-2018522999 ? (!33506) : -var_6));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_19 ^= 27946;
                        var_20 = (min(var_20, -4080020948178492146));
                    }
                    arr_31 [i_2 + 1] [i_5] [i_3] [i_4] [i_5] [i_5] = (!240);
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_21 = -4080020948178492121;
                    arr_35 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2] |= 28265;
                }
                var_22 = var_2;
                var_23 = (max(var_23, (!var_11)));
                arr_36 [i_2] [i_2] [i_2 - 2] = ((((-4080020948178492107 ? (-9223372036854775807 - 1) : var_0)) == -1380751123));
            }
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_24 = (~var_2);
                var_25 = var_6;
            }
            var_26 = (~var_8);
        }

        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            var_27 = (max(((-940932324310029676 ? var_11 : 28265)), (!var_3)));
            var_28 = (max((min(((max(-9028, -22939))), ((1 ? 1 : -7460880754323771826)))), (((-(!var_6))))));
            var_29 = (max((((!((max(-20082, var_1)))))), -109));
            var_30 = ((~((min(32004, -31999)))));
        }

        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            var_31 = (max(var_31, ((min(((min(((1 ? var_7 : 31)), -32016))), (min(5085919098111137520, 9223372036854775807)))))));
            var_32 = min((((-(~-2018522989)))), ((var_6 ? (max(var_9, 8719)) : (!2753573702093025448))));
        }
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_33 = ((-(min(((0 ? var_3 : var_1)), 33501))));
        var_34 = (~31999);
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        arr_47 [i_14] [i_14] = (-(var_0 || 22314));
        var_35 = (!-24428);
    }
    var_36 = (max(var_7, (min((min(var_7, -27959)), (!16320)))));
    #pragma endscop
}
