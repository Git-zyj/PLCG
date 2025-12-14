/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 ^= 1;

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] = (arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]);
            var_21 = (min(var_21, 1498719161));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_2] [i_1 + 1] [i_2] = (arr_3 [i_1]);

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_13 [i_2] [i_2] = (((arr_5 [i_0]) ? (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2]) : (arr_1 [i_0])));
                    arr_14 [i_2] [i_2] [i_1 + 1] [i_2] = (arr_1 [i_2]);
                    arr_15 [i_3] [i_2] [i_2] [i_2] [i_0] = 1993789611391734123;
                    var_22 += (arr_5 [i_0]);
                }
            }
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_19 [i_4] [i_0 - 2] [i_4] = (arr_16 [i_0]);
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_23 |= (arr_25 [i_6] [i_6] [i_5] [i_6]);
                            arr_29 [i_4] [i_6] [i_5] [i_5] [i_4 + 1] [i_4] = (arr_17 [i_0]);
                            var_24 *= 1389;
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_8 [i_5 - 4] [i_5] [i_7] [i_7 + 1]);
                        }
                    }
                }
            }
        }
        arr_31 [i_0 + 1] [i_0 - 2] &= (arr_7 [i_0] [i_0] [i_0] [18]);
        var_25 = ((!(arr_18 [i_0] [i_0 - 3] [i_0 + 2])));
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        var_26 = (min(var_26, (arr_33 [4] [i_8])));
        var_27 = (min(var_27, ((!((!(arr_32 [i_8 - 1])))))));
        var_28 ^= 1498719161;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        arr_36 [i_9] = ((~(arr_33 [22] [i_9 - 1])));
        arr_37 [i_9] = (((arr_1 [i_9 - 1]) ? (arr_1 [i_9 + 1]) : (arr_1 [i_9 + 1])));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            {
                var_29 *= ((-15 ? 1993789611391734123 : 245));
                arr_44 [i_11] [i_11] = (arr_27 [i_10]);
            }
        }
    }
    var_30 = -1067669607;
    #pragma endscop
}
