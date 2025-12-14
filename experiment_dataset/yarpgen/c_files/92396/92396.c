/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (5966852793403454116 > -14);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(25, (!-30002)));
        var_21 = (35 ^ 5966852793403454120);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_22 = (min(var_22, (arr_3 [i_0] [10] [i_1])));
                            var_23 = 224;
                            arr_14 [6] [i_0] [i_0] [i_0] = 213;
                        }
                    }
                }
            }
            var_24 = (~1);
            var_25 = 25;
            var_26 = ((((arr_4 [i_0]) <= (arr_8 [i_0] [i_0] [i_0] [i_0]))));
            arr_15 [i_0] [i_0] = (14 <= 1);
        }
        var_27 = (213 ^ -8);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_28 += 255;
            var_29 -= 1688849860263936;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_23 [i_7 + 4] = ((70 ? -7366069167635188314 : ((((0 && (arr_4 [14])))))));
            var_30 = (arr_1 [0]);
            var_31 ^= (arr_21 [i_5] [i_5]);

            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                var_32 = (arr_17 [i_5] [i_8]);
                arr_26 [1] |= (!1447978283);
                var_33 = (-5966852793403454121 + 5838656297432836989);
            }
            var_34 = 120;
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_29 [i_5] [i_5] [i_5] = (((-2147483647 - 1) ^ (arr_5 [6])));
            var_35 = (!-95);
            var_36 ^= (arr_27 [1] [1] [i_5]);
        }
        var_37 = (arr_17 [i_5] [i_5]);
        var_38 -= (arr_10 [i_5]);
    }
    #pragma endscop
}
