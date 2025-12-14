/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(9223372036854775790, var_15)) > var_3)))) != var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = (((max(-9223372036854775783, 1)) * (((((var_3 >> (var_16 - 29689))) << (((max(var_8, var_15)) - 56339191)))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_2] [i_2] [9] [i_3] = ((((((((arr_8 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0]) ? (arr_4 [i_0] [i_2] [i_2] [i_3]) : -8019032301289233628))) || ((((-9223372036854775791 + 9223372036854775807) << (((-9223372036854775781 - -9223372036854775780) + 44))))))) ? var_6 : (min((max(1, -7579476445402140188)), (9223372036854775795 >> 2)))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_18 = ((9927 < ((-9160 ? ((var_11 | (arr_10 [i_3]))) : (22 * 1839157739)))));
                            arr_12 [i_2] [i_2] [i_1] = ((((max(((-9223372036854775789 ? var_12 : var_8)), (arr_2 [i_0])))) ? ((((((((arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) << var_6))) > (((-9223372036854775787 + 9223372036854775807) << (((arr_3 [i_0] [i_2] [2]) - 1374589417)))))))) : ((~(var_14 ^ var_10)))));
                        }
                        var_19 ^= (((((((((-21 ? (arr_5 [i_0] [i_0] [6] [i_3]) : (arr_2 [i_0])))) || ((max(var_16, 81214381))))))) > (((min(var_10, (arr_2 [0]))) / (max((arr_10 [i_0]), var_5))))));
                        arr_13 [i_0] [i_2] = (28 ? 335625548 : 9);
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, (((var_8 * ((((-19 > var_15) > (1 != 8669523006068753173)))))))));
    #pragma endscop
}
