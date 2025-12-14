/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [5] [i_1] [i_2] = (0 * var_2);
                    var_11 ^= ((((min(((var_8 ? var_8 : (arr_4 [i_0] [i_2]))), (arr_5 [i_1] [i_0])))) ? (((arr_8 [i_0] [i_1] [i_2] [i_2]) ? (2147483647 == 22968) : (arr_8 [i_0] [i_1] [i_1 - 1] [i_2]))) : ((var_2 ? (arr_2 [i_0] [i_1 + 1]) : (arr_2 [i_0] [i_1 + 2])))));
                }
            }
        }
    }
    var_12 = 1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_13 = ((((((arr_4 [i_3] [i_4]) ? (arr_4 [i_3] [i_4]) : var_4))) ? var_3 : (arr_12 [i_3] [i_4] [i_4])));
                var_14 = ((~(arr_4 [i_3] [i_4])));
                var_15 ^= ((~(((((arr_7 [i_3] [i_4]) ? -1148010991 : var_5)) / 1))));
                arr_14 [i_3] |= (min(((-(arr_13 [i_4] [i_3]))), (((!(arr_2 [i_3] [i_4]))))));
            }
        }
    }
    #pragma endscop
}
