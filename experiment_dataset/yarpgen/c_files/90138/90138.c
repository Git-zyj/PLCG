/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_4, (((((min(11729539956160768936, (-2147483647 - 1)))) ? var_10 : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = 345267909;
                    var_13 = (max(var_13, (((-(min((arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]), 11729539956160768936)))))));
                    arr_8 [i_1] [i_2] = (((((var_7 << (((arr_2 [i_0] [i_1] [i_2]) + 701191288))))) ? (arr_1 [i_0] [i_1]) : var_7));
                    var_14 ^= (min(((min((arr_5 [4] [i_1] [i_1]), (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])))), (((arr_0 [i_2] [i_1]) ? (arr_7 [i_0] [i_0] [i_0]) : -1))));
                }
            }
        }
    }
    var_15 = ((var_1 ? var_0 : (min((((var_6 ? 74 : var_5))), (min(var_6, 17075828784320727407))))));
    var_16 = ((((var_0 ? 3564045171 : var_2))));
    #pragma endscop
}
