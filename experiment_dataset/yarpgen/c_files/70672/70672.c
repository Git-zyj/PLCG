/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(var_6, var_8))) | 0))) ? (((~((var_6 ? 34185 : var_4))))) : (((((0 ? 1861474923 : var_4))) ? (max(13510798882111488, 17452)) : (((max(var_11, var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 += ((var_12 ? ((65515 ? (arr_3 [i_1]) : 48083)) : ((0 ? 9223372036854775801 : (arr_0 [i_1])))));
                var_18 = ((0 && (((9223372036854775801 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_19 *= (min(((~(max(var_8, 1861474933)))), -0));
        var_20 &= var_7;
        var_21 *= (max((((!-1) ? 1 : ((~(arr_3 [i_2]))))), ((~(min(var_11, (arr_6 [i_2])))))));
        var_22 = var_14;
        arr_8 [i_2] [i_2] = (~-8954125649704776026);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 ^= (max(((((min(-3805, 17481))) ? (min(3999437910, 799180508)) : (((max((arr_10 [i_3]), var_1)))))), 62989));
        var_24 *= 17455;
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 6;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_22 [i_6] [i_5] [i_7 - 1] = (((arr_1 [i_6 + 3] [i_4 + 1]) / 48084));
                        var_25 += (arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1]);
                        var_26 += -1;

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_27 = 1713752912;
                            var_28 = -8562612730397599434;
                        }
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            var_29 |= ((1 ? (arr_25 [i_4]) : (((arr_3 [i_4]) ? var_3 : (arr_26 [i_4] [i_4] [9])))));

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_30 = ((arr_25 [i_4 - 1]) ? ((80 ? -13 : (arr_15 [i_4] [6]))) : -1);
                var_31 = (((arr_6 [i_4 - 1]) ? 57486 : (arr_28 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1])));
                var_32 ^= ((-(arr_19 [i_10] [i_9 - 1] [i_4 + 1] [i_10])));
                var_33 = var_9;
            }
        }
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            var_34 += (((arr_30 [i_4 + 1] [i_11]) | 1));
            var_35 = (((arr_27 [i_11] [i_11]) ? (arr_30 [i_4 + 1] [i_4]) : 18));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_36 = var_3;
            var_37 = 176331787;
        }
        var_38 = -1431241760;
    }
    #pragma endscop
}
