/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(((((arr_1 [i_2]) || ((max(var_3, (arr_1 [i_2]))))))), ((var_13 ? (arr_3 [i_0 + 1]) : 61))));
                    var_16 = (max(var_16, 127));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (((arr_0 [i_3 - 1]) ? (((var_9 + 2147483647) << (((arr_2 [i_0]) - 32)))) : -113));
                        var_18 = -11;
                    }
                    var_19 = 221;
                    var_20 = ((((min((arr_0 [i_0 + 1]), ((max(255, var_9)))))) ? ((101 ? ((-122 ? (arr_7 [i_1]) : var_12)) : var_14)) : (((((min(155, 3))) || (arr_10 [i_1] [i_0] [i_0] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_21 = (((((~104) + 2147483647)) << ((((max((arr_12 [i_4]), var_11))) - 39591))));
                                var_22 *= (((((178 << (-98 + 119)))) ? ((((min(-125, var_5))) + ((253 ? var_12 : -85)))) : 1));
                                var_23 = (arr_19 [i_5 - 1] [i_7 + 3] [i_7 + 2] [i_7 + 3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_24 = -123;
                            var_25 = -1;
                            var_26 = (((arr_14 [i_4] [i_4] [i_4]) ? (((arr_24 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] [i_9 + 2] [i_9 + 1]) ? (arr_21 [i_4] [i_5 + 1] [i_4] [i_10 + 2]) : (-127 - 1))) : ((((max(-65, 65414))) ? (~var_3) : ((var_13 ? (arr_13 [2] [i_5]) : var_2))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
