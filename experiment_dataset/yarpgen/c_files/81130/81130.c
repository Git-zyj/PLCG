/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((2225698982088537636 < var_8) ? (max(((var_11 ? 313349640 : var_2)), var_11)) : (min((var_7 || var_7), (max(var_2, -64))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = -1148;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = (arr_3 [i_0] [1]);
            var_14 = (((arr_6 [i_0] [1] [i_0]) || 1168));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] = (((arr_0 [i_0] [i_2]) ? 34249 : (arr_0 [i_2] [i_2])));

            for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_15 = (min(var_15, (arr_6 [i_2] [i_2] [i_0])));
                arr_15 [i_3] [i_2] [i_0] = 213;
            }
            for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_16 = (max(var_16, var_0));
                arr_18 [i_4 - 3] [i_4] [i_4 - 3] [i_4 - 1] = ((var_5 ? (((arr_17 [0] [i_2] [i_4 - 3] [i_4 - 2]) + var_10)) : ((59 - (arr_13 [i_0] [i_0] [i_4])))));
            }
            for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_17 = (arr_1 [i_0] [i_5]);
                arr_21 [i_0] [i_0] [i_0] [i_0] = var_3;

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_18 *= (~var_9);
                    var_19 = (((((!(arr_24 [i_0] [i_2] [i_0] [i_6] [i_0] [i_5]))))) <= ((-2762861107280167450 ? var_2 : var_11)));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_20 = (~34557411);
                    var_21 ^= (((((arr_23 [i_7]) ? (arr_19 [3] [i_2] [i_2]) : 34557414)) != (arr_2 [i_5 + 1])));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_22 = ((var_4 << (((arr_31 [15] [15] [i_9] [i_8]) - 44201))));
                        var_23 = (75 <= 17);
                        arr_34 [5] [i_2] [6] [i_8] [i_9] = ((var_0 ? ((((arr_11 [i_0]) != var_9))) : (arr_17 [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5 - 1])));
                    }
                    arr_35 [i_0] [i_0] [i_0] |= ((var_0 ? (156 + 34557400) : ((var_7 - (arr_25 [i_0] [i_0] [i_0] [i_2] [i_5 + 1] [i_8])))));
                }
                arr_36 [i_0] [i_2] [i_5] = (34557414 >= -9086);
            }
            for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
            {
                arr_40 [i_10] = (arr_6 [i_10 + 2] [i_10 + 2] [i_10]);
                var_24 = (max(var_24, (!var_1)));
                var_25 = (min(var_25, ((((arr_30 [i_10 + 1] [i_2] [i_10 + 1] [6] [i_10 + 2]) || ((((arr_14 [9] [16]) ? var_5 : -5))))))));
            }
        }
        var_26 ^= (((arr_12 [i_0] [i_0] [i_0] [16]) <= var_7));
    }
    var_27 *= (((((max(var_1, var_9))) <= ((var_4 >> (var_9 - 115))))));
    var_28 = (max(var_28, var_9));
    #pragma endscop
}
