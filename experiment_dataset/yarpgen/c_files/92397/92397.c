/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 |= (~18446744073709551615);
                    arr_6 [i_0] [i_1] [i_1] [i_1] = (max((arr_5 [i_0] [i_1] [i_0]), (min((~var_11), ((~(arr_4 [i_0])))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = (((((281474976710656 + (arr_7 [i_0] [i_1] [i_1] [i_0] [i_4] [i_1])))) >= ((((min(18446744073709551615, 1819539649)))))));
                            var_16 *= min(1072285881, 1);
                            var_17 = 18446744073709551615;
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = (min(var_12, (max((~var_13), -1927580704))));
                            arr_13 [i_0] [i_0] [i_0] = (((~3623050476) ? (arr_1 [i_1]) : -0));
                        }

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_18 = ((((arr_14 [i_0] [i_1] [i_0] [i_3] [i_5]) && var_4)) ? (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]) & 0)) : 1927580703);
                            var_19 = (var_4 == var_7);
                            var_20 = (max(var_20, ((((((0 / (arr_4 [i_1])))) > 18446744073709551597)))));
                            var_21 = ((var_11 & (-1072285882 / -28759)));
                        }
                        var_22 = (min((arr_4 [i_0]), ((max((((arr_1 [i_1]) ? var_0 : var_4)), (((var_8 >> (1927580703 - 1927580702)))))))));
                        var_23 = 112;
                    }
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
