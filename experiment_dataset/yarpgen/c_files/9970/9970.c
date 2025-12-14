/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((+(((arr_8 [i_1] [i_2] [i_2 - 1]) ? var_12 : var_11))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (+-82);
                            arr_16 [i_0] [i_3] [i_0] [i_1] [i_0] = ((((((((arr_0 [i_4] [i_3]) + (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4])))) && var_15)) && (arr_2 [i_3] [i_3] [i_0])));
                            var_20 -= ((((min((arr_5 [i_0] [i_0]), (!var_10)))) ? (~72) : -82));
                        }
                        var_21 = (!(((~(((arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3]) ? var_10 : 83))))));
                        var_22 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 &= -1839589897;
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((-((((min(88, 1930643205))) ? 29275 : -29276))));
                        var_24 -= (min(12007, 4294967264));
                    }
                    arr_21 [i_0] [i_0] [i_0] = var_6;
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_25 += (max(52727, 18187));
                                var_26 = var_18;
                                var_27 = (max(var_27, (arr_18 [i_7] [i_7 + 1] [i_7] [i_7] [i_7])));
                            }
                        }
                    }
                }
                arr_29 [i_1] [i_0] = (min((max(((var_1 ? (arr_3 [i_0] [i_0]) : var_16)), var_12)), ((((min(var_6, var_16)) >= (arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_28 = var_2;
    var_29 = ((2147483647 ? 12015 : 122));
    #pragma endscop
}
