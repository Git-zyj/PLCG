/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 ^= ((~(((!(var_12 / var_10))))));
        var_14 ^= (arr_2 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = ((var_5 == (((arr_0 [i_3]) ? (((arr_1 [i_3]) ? var_1 : var_2)) : (!249)))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((-1943181517 ? (var_9 | var_2) : 100));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_15 ^= ((~(arr_17 [i_5] [i_4])));
                    arr_20 [i_4] [i_5] [i_6] [i_5] = (min(var_4, var_10));
                    arr_21 [i_4] [19] [i_6] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
