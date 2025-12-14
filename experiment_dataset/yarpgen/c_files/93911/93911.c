/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((((var_12 ? var_8 : var_10))) / (max(var_11, var_0)))) >> (((max(5366416278521323030, ((max(var_1, 182))))) - 5366416278521323002)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = ((var_4 > (174 && 2257705176)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = (((((((((var_3 + 9223372036854775807) << (var_10 - 33765))) <= var_16)))) / (((16383 ? 1 : 182)))));
                    var_23 = (max(((var_7 ? (var_2 * var_10) : var_13)), ((((((var_11 << (var_7 - 5044222685088784356)))) ? ((min(var_10, var_8))) : var_18)))));
                    var_24 *= ((14217903018015762789 >> (127 - 81)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_25 = (((((max(var_9, var_3)))) ? var_6 : var_13));
                        arr_11 [i_0] [i_2] [i_1] [i_3] = var_11;
                        arr_12 [i_0] [i_0] [5] [i_1] = ((min(5366416278521323030, 15298)));
                        arr_13 [i_3] [i_1] [i_1] [14] = (var_13 || var_2);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_26 = ((((max(175, ((15298 >> (-26358 + 26363)))))) + ((max(var_7, var_6)))));
                        arr_18 [i_1] [i_1] [i_1] = ((((((var_1 ? var_13 : var_4)) ^ ((max(var_2, var_19))))) ^ ((((var_12 | var_2) ? -118 : var_15)))));
                        var_27 += (min(((((((var_14 ? var_1 : var_8))) || ((max(var_15, var_4)))))), var_17));
                        arr_19 [i_1] = ((((((var_1 / var_14) / (var_19 / var_14)))) - ((127 ? 1 : 14217903018015762789))));
                        var_28 = (max(0, 15291));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_29 = (min(var_29, ((((max(24616, ((1 ? 0 : var_12)))) != ((max(((var_13 ? var_4 : var_4)), (((var_15 + 2147483647) >> (var_15 + 71)))))))))));
                                var_30 = ((max(var_19, -118)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_31 = ((((max(118, 6570942391405592317))) > (var_16 * var_15)));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_37 [7] = (((var_10 * var_17) % (((((max(var_19, var_4))) && (0 + 3286792337))))));
                        arr_38 [i_9] = (min(var_9, (((((min(0, var_2)))) * (min(var_11, var_0))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            var_32 *= var_0;
            arr_43 [i_11] = (((var_18 + var_16) * (var_11 + var_9)));
        }
    }
    #pragma endscop
}
