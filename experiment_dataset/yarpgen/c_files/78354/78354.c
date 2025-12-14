/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((85 ^ ((((min(2005462360, 120))) ? 248 : (arr_3 [i_0] [i_0])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_12 = (max(var_12, -13162));
                            var_13 = 3;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_14 = (18446744073709551596 ^ (arr_2 [i_0] [i_1] [i_0 + 1]));
                            var_15 = (min(var_15, (((var_0 | (arr_11 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [14]))))));
                            arr_14 [i_2] [i_1] [11] [i_3] [i_5] = (((((~(arr_11 [i_5] [i_1] [i_2] [i_1] [5])))) ? (((2110939827 ? (arr_10 [i_0] [i_0] [i_0] [i_1] [1] [i_3] [i_5]) : 2147483648))) : var_2));
                        }
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            var_16 = (min(var_16, (var_2 > -224)));
                            var_17 = (((arr_15 [i_1] [i_2] [i_6 - 1]) < (41002 & 66846720)));
                            arr_19 [i_0] [i_2] = (!-609995794);
                            var_18 = (max(var_18, (((arr_10 [i_1] [i_1] [i_6 - 3] [i_3] [5] [i_3] [i_0 - 1]) ? (arr_7 [2] [i_3] [i_6 - 3] [i_3]) : 5718218781922846995))));
                            arr_20 [3] [i_1] [i_2] [i_2] [i_6 + 1] [i_2] [i_2] = (arr_2 [i_6 - 4] [i_3] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_19 = (max(var_19, -var_2));
                            var_20 = (min(var_20, (arr_3 [i_0 - 1] [i_2])));
                            var_21 = (max(var_21, 1421806840));
                            var_22 = (min(var_22, (81 / 671145746967711197)));
                        }
                        var_23 = (min(var_23, ((((arr_6 [5] [i_0] [i_0]) > var_4)))));
                        arr_23 [i_0] [i_2] [i_3] = ((var_3 / (arr_4 [i_0] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [5] [i_9] [5] [i_2] = (((min((max(var_8, 8)), ((max((arr_7 [i_0] [i_0] [i_2] [i_8]), 110))))) - (((~(arr_1 [i_0] [i_2]))))));
                                var_24 = (max((max((~var_7), (((155 | (arr_21 [i_9] [i_8 + 1] [i_1] [i_2] [i_1] [i_0 - 2])))))), ((((((5187916029993168164 ? 45627 : 66))) ^ -6475552939344718775)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, var_7));
    #pragma endscop
}
