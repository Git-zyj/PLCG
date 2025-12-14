/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_10 = 17073846989440465190;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_11 |= 6462706919171252577;
                        var_12 = 2411615180;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_13 = 17073846989440465190;

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_14 = 22;
                            arr_15 [i_0] [i_0] [i_0] [i_0] = 1490592883;
                            var_15 = (max(var_15, 17073846989440465190));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_16 = -6713877645944956256;
                            var_17 += 1798932267;
                        }
                        var_18 = 1798932267;
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_19 = (max(var_19, 1));
                            arr_24 [i_0] = 18446744073709551615;
                            var_20 = -94;
                        }
                        var_21 = 23;
                        var_22 = 1;

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_27 [i_0] = -24;
                            var_23 = 18446744073709551615;
                        }
                    }
                }
                var_24 = (max(var_24, 14249430359575235632));
                arr_28 [i_0] [i_1 - 2] [i_0] = 18;
                var_25 = 70;
            }
        }
    }
    var_26 = 18446744073709551601;
    #pragma endscop
}
