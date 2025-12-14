/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((!(64473 || var_12))) ? (((min(-5888603634007199561, 6754727620307943627)))) : ((9373 ? -303465227 : var_12))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        var_18 ^= 502696908643393705;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        var_19 = (((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 2]) : (arr_3 [i_1 - 2])));
        var_20 = var_9;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = (((((-12269 + 2147483647) >> (((arr_2 [i_1 - 2]) + 24195)))) << (((((arr_4 [i_1 + 1]) + 3771)) - 26))));

            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                var_22 ^= 12058688328409663895;
                var_23 = (max(var_23, (((~(5392082622035355249 == var_15))))));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_24 -= (((arr_9 [i_1 - 1] [i_1 + 1] [i_1]) | (arr_9 [i_2] [i_2] [i_2])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_15 [i_4] [i_4] [i_4] [i_5] [i_6] = (((arr_5 [11]) == -6754727620307943621));
                            arr_16 [i_4] = (arr_2 [i_6]);
                        }
                    }
                }
                var_25 ^= var_1;

                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    arr_19 [i_4] = (((arr_17 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7]) ? (arr_17 [8] [2] [i_7 - 3] [i_7 - 1] [i_7] [2]) : (arr_17 [i_7] [i_7 - 2] [i_7] [i_7 - 3] [6] [i_7 + 1])));
                    var_26 = (((arr_5 [i_4]) != 25938));
                    var_27 |= ((31885 ? (arr_2 [i_1 + 1]) : var_2));
                    var_28 = (!-1);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_23 [i_1 + 1] [i_2] [i_4] [14] = var_10;
                    var_29 = ((arr_11 [i_4] [i_4] [i_4] [i_1] [i_4] [i_2]) ? (arr_7 [1] [i_1 - 1] [i_1]) : var_11);
                }
            }
        }
        arr_24 [i_1 + 1] = ((-1495153674 ? ((9679 << (var_3 - 4009208215))) : ((-(arr_13 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1])))));
    }
    #pragma endscop
}
