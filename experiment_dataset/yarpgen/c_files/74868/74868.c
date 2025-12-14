/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (1 | 12629);
        arr_2 [i_0] = ((3 ? (255 * var_4) : (var_4 != var_19)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_0 [i_1]) % (((arr_0 [i_1]) ? (arr_0 [i_1]) : var_9)))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_22 = (min(var_22, 0));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_23 -= ((var_1 != (arr_9 [i_1] [i_1] [i_1] [i_1])));
                            arr_18 [i_1] = (arr_13 [i_1] [i_2] [i_3] [i_1] [i_1]);
                            arr_19 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = (0 % 7);
                        }
                    }
                }
            }
            var_24 = (58 & 45477089);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_25 *= (arr_12 [11] [i_6]);
                    var_26 = (min(var_26, (((((((var_4 ? (arr_24 [i_1] [i_1] [i_6] [i_7]) : var_5)) != (1392 % var_11))) ? (arr_13 [i_1] [i_1] [i_7] [i_7] [i_7]) : (((((arr_8 [i_1] [i_6] [i_7] [i_1]) | var_5)) >> (var_0 != var_10))))))));
                }
            }
        }
        arr_28 [i_1] = ((1 ? -128 : (((((-11 ? 255 : 27245))) ? (54336 != 6770953472697174781) : ((min(var_13, 173)))))));
    }
    var_27 = var_19;
    var_28 = var_4;
    var_29 = var_9;
    var_30 *= (max(((~(((var_12 + 2147483647) >> (var_5 - 1400903331781148612))))), (~var_4)));
    #pragma endscop
}
