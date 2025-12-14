/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_12 = (max(var_12, var_2));
                        arr_11 [i_3] [i_1] [i_1] [i_0] = -1;
                        var_13 -= (((arr_3 [6]) ? ((var_1 ? -8429 : var_6)) : var_7));
                        arr_12 [i_0 - 1] [5] [i_2] [i_1] = ((-(arr_3 [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_14 -= max(var_5, (((((138 ? -3530962723197050347 : 117))) * (((arr_4 [0] [i_1] [4] [i_1]) ? (arr_2 [6]) : var_4)))));
                        var_15 = min((arr_14 [5] [5] [5] [5]), (arr_10 [i_4] [i_4] [i_1] [i_4]));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 &= (arr_10 [i_0] [i_0] [10] [i_0]);
                                var_17 = arr_18 [i_0] [i_0] [i_0] [i_5] [i_6];
                                var_18 ^= ((~((min(-8429, 117)))));
                            }
                        }
                    }
                    arr_19 [i_1] [4] [i_1] = -var_0;
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
