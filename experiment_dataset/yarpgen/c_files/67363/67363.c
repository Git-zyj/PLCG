/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((((((((2800521566 << (82245013868438014 - 82245013868437999)))) ? (arr_7 [i_1] [i_2 - 2] [i_2 + 1]) : ((~(arr_0 [i_0] [i_0])))))) ? var_3 : (((9223372036586340352 - 1023) ? (((arr_1 [i_0]) ? 3 : (arr_3 [i_0]))) : (arr_6 [i_0])))));
                    var_13 = ((((min((arr_2 [i_0]), 1024))) ? (((arr_1 [i_0]) ? var_2 : var_0)) : -var_8));
                    var_14 = ((((((~(arr_7 [i_2] [i_1] [i_0]))))) ? -93 : ((var_3 ? var_2 : (arr_8 [i_2 + 1] [i_0] [i_2 - 1] [i_2 - 1])))));
                    var_15 += ((var_3 ? (((var_5 ? ((var_2 ? var_4 : (arr_1 [2]))) : -0))) : (arr_8 [i_2] [12] [12] [i_2 - 2])));
                }
            }
        }
    }
    var_16 = (min((((var_3 ? var_2 : var_10))), (((((4294967295 ? var_8 : 1))) ? -var_9 : (min(var_2, var_6))))));
    var_17 = (max(((min(var_1, var_12))), ((((var_7 ? var_6 : 60020))))));
    var_18 = var_5;
    #pragma endscop
}
