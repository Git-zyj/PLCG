/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((min(254, (arr_3 [i_1 - 3] [i_1 - 3])))) ? (max((arr_3 [i_1 + 1] [i_1 + 1]), 502811682)) : (max(7037, (arr_3 [i_1 - 3] [i_1 - 1])))));
                var_13 ^= max((((arr_5 [i_0]) ? (arr_5 [i_0]) : 1749799421)), ((min(var_1, -1))));
                var_14 |= ((((min((((arr_0 [i_0]) ? var_11 : (arr_2 [2]))), (((arr_0 [i_0]) ? var_0 : 218953709))))) ? ((min(var_1, var_10))) : (max(-502811699, 12626566344868641629))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_15 = (max(3176172905, ((3337037715669746487 ? 559781504 : (arr_11 [i_2 + 1])))));
                arr_15 [i_3] = (max(((3822605497 ? (arr_12 [7] [i_2 - 1]) : 64211)), ((3337037715669746487 ? 53978 : 729398184))));
            }
        }
    }
    #pragma endscop
}
