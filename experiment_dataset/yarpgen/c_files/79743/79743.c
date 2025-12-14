/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_11;
    var_16 |= ((min(((var_14 ? 47928 : var_12)), ((0 ? 20 : var_8)))));
    var_17 -= (var_2 ? var_5 : 0);
    var_18 += var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(0, (4 / 1)));
                    var_20 = (min(((max(var_9, ((1 - (arr_6 [i_0] [i_1] [i_2])))))), (((((var_14 ? 195 : 17355438229676464956))) ? (((((arr_8 [i_2] [i_2] [i_2] [1]) != var_7)))) : ((var_8 ? var_2 : 17201878388872954783))))));
                    arr_9 [i_0] [i_1] &= ((1 ? (((((arr_1 [12] [12]) & 65535)) ^ ((var_12 * (arr_8 [i_0] [i_0] [i_2] [i_2]))))) : ((((-8192 ? (arr_3 [8]) : var_10))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_3] = 0;
                        var_21 = (min(1091305844033086659, ((min((arr_1 [i_0] [i_0]), -1)))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 = (arr_3 [i_0]);
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] [i_2] = ((var_9 != ((var_8 + ((4294967295 << (var_1 + 104)))))));
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_21 [i_5] [i_2] = (((((arr_1 [i_2] [i_2]) ? ((0 ? (arr_4 [i_0] [i_0] [i_0]) : 295321649)) : (arr_3 [i_1]))) - ((max((arr_3 [i_0]), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_3 [i_0]))))))));
                        var_23 -= var_5;
                        arr_22 [i_1] [i_1] [i_1] [i_5] |= -0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
