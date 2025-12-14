/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (((max(((41384 ? -1 : 1)), var_4))) ? var_4 : (max(-var_10, var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 4150162000;
                var_16 = (i_0 % 2 == 0) ? (((((max((~var_13), ((min(124, (arr_2 [i_0]))))))) ? ((((((var_3 ? (arr_5 [i_0] [7] [i_1]) : (arr_4 [i_0] [i_1] [i_0]))) + 2147483647)) << ((((var_12 ? var_12 : 124)) - 1)))) : (arr_5 [i_0] [i_0] [i_0])))) : (((((max((~var_13), ((min(124, (arr_2 [i_0]))))))) ? ((((((((var_3 ? (arr_5 [i_0] [7] [i_1]) : (arr_4 [i_0] [i_1] [i_0]))) - 2147483647)) + 2147483647)) << ((((var_12 ? var_12 : 124)) - 1)))) : (arr_5 [i_0] [i_0] [i_0]))));
                arr_7 [i_0] [12] |= (min(-121, -124));
            }
        }
    }
    #pragma endscop
}
