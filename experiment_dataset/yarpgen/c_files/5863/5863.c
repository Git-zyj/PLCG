/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((!((min(var_10, var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (arr_6 [i_0]);
                    var_17 = (arr_5 [i_0] [i_1] [i_2]);
                    var_18 = (min(var_18, ((min(38418, (((25165824 < var_10) ? (((arr_2 [i_0] [i_1]) << (var_8 - 6873467628001661123))) : (arr_7 [i_2] [1] [1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] = (arr_12 [i_4] [5]);
                                var_19 = (max(var_19, ((((((arr_15 [i_0]) && (arr_15 [i_0]))) ? (arr_6 [i_2]) : ((((min(3391, var_3))) ? ((3391 ? 197 : var_3)) : (~3391))))))));
                                var_20 ^= -var_13;
                            }
                        }
                    }
                    var_21 = ((((max(-3392, (arr_0 [i_0] [i_0])))) && (arr_0 [i_0] [i_1])));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_29 [i_5] [i_5] [i_5] [i_7] [i_5] = (min((max((((-3640105244895538421 ? 1 : 58))), (((arr_5 [i_8] [i_5] [i_5]) % var_11)))), (arr_14 [i_5] [i_6] [i_5] [i_8] [1])));
                        var_22 = (max((((56 ? 9223372036854775807 : 213))), (((((var_10 ? 34359738367 : (arr_16 [9] [4] [0] [i_8] [i_6])))) | (arr_18 [i_5])))));
                        arr_30 [i_7] [i_7] [i_7] [i_6] [i_5] [i_7] = ((!((max(var_0, ((0 ? var_4 : (arr_6 [i_5]))))))));
                    }
                }
            }
        }
        arr_31 [i_5] = min((arr_27 [4] [i_5]), ((~((-(arr_7 [4] [i_5] [i_5]))))));
        var_23 = ((((((arr_12 [i_5] [i_5]) % 1))) ? ((min((~1165671588887226014), ((((arr_15 [6]) != 3391)))))) : (min((((arr_3 [12] [i_5]) ? 1594429068271464787 : (arr_9 [i_5] [i_5] [i_5] [i_5]))), 25165824))));
    }
    #pragma endscop
}
