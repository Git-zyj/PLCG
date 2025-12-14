/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [14] [i_1] [i_0] [14] = arr_4 [9] [i_1] [i_1];
                    var_18 ^= ((0 - var_0) - (arr_5 [2] [1]));
                    arr_7 [i_0] [i_0] = ((((((((2147483628 ? -7 : 24164))) ? (((arr_1 [i_0 + 1] [i_0]) ? var_1 : 1)) : (0 == 524287)))) ? (arr_5 [i_0] [i_0]) : ((89 ? ((-1615847532907306014 ? 1 : (arr_2 [i_0] [i_0]))) : 4166323548))));
                }
            }
        }
    }
    var_19 = (24164 * 0);
    var_20 = var_12;
    #pragma endscop
}
