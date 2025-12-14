/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 ^= (((var_8 ? (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : var_6)));
                var_14 -= (var_5 * ((((arr_4 [i_0] [i_0] [i_1 + 1]) ? ((var_11 ? (arr_3 [i_0] [i_1]) : 45064)) : ((var_11 ? var_0 : var_8))))));
                var_15 = (max(((var_11 ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1]))), (var_12 - var_6)));
                arr_5 [i_0] [i_0] [6] = ((4096 ? 1 : 32512));
            }
        }
    }
    var_16 = var_5;
    var_17 = ((((var_4 != ((var_11 >> (var_6 - 737690364))))) || (((((1 >> (var_2 + 3331421217759095405)))) || var_8))));
    var_18 = var_8;
    #pragma endscop
}
