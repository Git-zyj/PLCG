/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] |= (min((((max((arr_2 [i_0]), 1)) & ((~(arr_6 [i_0] [1] [i_2] [i_3]))))), (((~-108) ? (arr_7 [i_1 - 1] [i_1 + 3] [i_1 - 3]) : 5095))));
                        var_19 *= (((max((max(var_18, (arr_10 [i_1] [i_1]))), 0)) * ((+(((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_3 : var_11))))));
                        arr_13 [i_0] [i_0] [12] [8] [10] [i_3] |= (((((min(var_3, var_17)) ? (var_17 || var_3) : (!var_9)))));
                        arr_14 [i_0] [i_1 - 2] [i_2] [i_3] |= (max((((arr_8 [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_1 + 3]) ? (arr_8 [i_1 - 3] [i_1 - 1] [i_1 - 2] [i_1 - 2]) : 29)), (arr_8 [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_1 - 2])));
                    }
                    arr_15 [7] [i_0] [i_1] [i_2] |= min(var_2, (arr_10 [i_0] [i_1 + 1]));
                }
            }
        }
    }
    var_20 |= (((((4294967248 + var_18) + 2147483647)) << (((((((var_16 % var_15) ? (var_8 - var_15) : (4294967263 || var_15))) + 536698512)) - 4))));
    var_21 ^= (max(((((max(var_18, 5))) ? 98 : var_13)), ((max(4294967262, 65520)))));
    #pragma endscop
}
