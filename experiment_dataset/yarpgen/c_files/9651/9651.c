/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = max((~2077826537), ((((0 << (-10838 + 10854))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0 + 2] = 1;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_17 = ((1 ? -8324594805802674025 : -2658475521703099991));
                            var_18 = -1;
                            var_19 = ((!(1 & 2147483635)));
                            var_20 |= (22542 - 1362000719);
                        }
                        for (int i_5 = 4; i_5 < 24;i_5 += 1)
                        {
                            var_21 = (38854573 & 9007199254740991);
                            var_22 = (min(var_22, (38854588 > 67)));
                            var_23 = (~-16);
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_24 = -38854585;
                            var_25 |= -134;
                        }
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            var_26 = (~1);
                            arr_24 [i_0] [16] [16] [16] [12] [i_7 - 2] [i_3] = (4034081391 ^ 1673033520);
                            var_27 -= (~1);
                            arr_25 [1] [i_1] [i_3] [i_3] [i_7] [i_2] [i_3] = ((1 ? 125 : 1));
                            var_28 = (2800152263 || 32448);
                        }
                    }
                }
            }
            var_29 = 1;
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            var_30 = 260885904;
            arr_28 [i_0] [i_8] [i_0 + 2] = (7025414521185414365 << (260885917 - 260885885));

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_31 = -1;
                arr_33 [23] [i_0] [i_8 - 1] [i_8] = -1;
            }
        }
        var_32 = 119;
        var_33 = (max((max(2932966577, -124)), ((((!-6828) != ((max(49, 14395))))))));
        var_34 = ((1 << (((min(260885905, 9770)) - 9744))));
    }
    var_35 = (~1);
    #pragma endscop
}
