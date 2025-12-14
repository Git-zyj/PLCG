/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_11 = (min((min((~1205601695158357885), (min(var_2, 17241142378551193731)))), -1973676971));
                        var_12 = (min(var_12, ((((var_3 ? (min((arr_11 [8] [4] [i_2]), var_1)) : var_7))))));
                        arr_13 [i_0] [i_1] [i_3] = min(((-(arr_8 [3] [i_1] [9]))), 1973676970);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_1] = (max(var_6, (((arr_8 [i_4] [i_2] [1]) ? (arr_8 [i_0] [i_0] [1]) : (arr_7 [8])))));
                        var_13 ^= (!((max(((max(863463682, -863463682))), ((-(arr_0 [i_1] [i_4])))))));
                        var_14 = (((((((max(18446744073709551615, 49651))) ? (var_3 <= var_9) : ((((arr_0 [5] [5]) < var_4)))))) ? 0 : ((((arr_6 [i_1]) && var_2)))));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_15 += (max(((-(max(-4096, -1)))), 15884));
                            var_16 ^= (arr_12 [2] [i_0] [i_0] [2]);
                            var_17 |= var_9;
                            var_18 = ((~(-31864 || var_7)));
                            arr_20 [i_1] [i_5] = ((17241142378551193730 ? -1 : 863463682));
                        }
                    }
                    var_19 *= ((((!(((1205601695158357885 ? var_4 : (arr_11 [15] [15] [6])))))) && (arr_10 [i_2] [8] [8] [8])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = (((arr_10 [15] [i_6 + 1] [i_1] [i_1]) ? (15885 < 255) : ((var_3 ? (((var_9 ? -1 : (arr_12 [i_0] [i_0] [i_2] [i_1])))) : (arr_21 [11])))));
                                var_21 = (-1 ? 49651 : 1205601695158357885);
                                var_22 = (var_6 || var_1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((var_6 < var_2) ? var_2 : -65535)));
    var_24 = var_8;
    #pragma endscop
}
