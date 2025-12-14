/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(5917691372547387295, (55869 <= 12529052701162164320)))) ? (~var_8) : 147));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 ^= (max((((var_9 + ((4150068027 ? (arr_0 [3]) : 236))))), 5917691372547387295));
        var_12 ^= (min((max(316941039, (806816958 & var_4))), ((min((max(var_6, 0)), ((min(236, 0))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_6));
        arr_5 [i_1] [i_1] = (316941039 ? 1 : (((!(((255 ? 118 : 3850240383)))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_14 = (arr_7 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [i_3] [i_5] [i_2] [11] = (((arr_8 [i_5 - 2] [i_5 - 1]) / (arr_12 [i_4] [21])));
                        var_15 = ((!(~816354937)));
                        var_16 = 3478612359;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_17 = (max(var_17, var_3));
        var_18 = ((((144899269 - 6) >> ((((min(var_0, -554))) + 582)))));
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_19 = (min(var_19, ((((~816354934) | (((min((arr_18 [i_7]), 1)) >> (((arr_3 [i_7 + 2] [i_7 + 2]) - 543594421)))))))));
        var_20 |= var_4;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_21 &= var_5;
            var_22 = 185;
            var_23 &= var_6;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_36 [i_7 - 1] [i_9] [i_10] [6] [i_12] = ((((1565753546520447281 ? 816354917 : 3557355158)) / (((308197712 / (arr_30 [i_9] [i_7]))))));
                            var_24 = (min(var_24, (((3557355156 ? 3478612370 : 0)))));
                            var_25 = var_6;
                            arr_37 [i_7] [i_7] [2] [2] [i_7] [i_7] [i_7] &= (((arr_18 [i_9]) ? 0 : ((var_2 ? 53421 : var_2))));
                        }
                    }
                }
            }
            var_26 = 61;
            var_27 = var_1;
        }
    }
    var_28 = (max(var_28, (((((max(-316941040, var_6)))) ? ((var_7 ? (0 % var_3) : (var_6 + var_6))) : ((((((55869 ? 2597087219 : var_8))) ? (-6123525520015608195 || var_2) : -1793975844)))))));
    var_29 = (min(var_29, ((max((((!((max(var_2, var_3)))))), ((316941033 ? (-9223372036854775807 - 1) : 17)))))));
    #pragma endscop
}
