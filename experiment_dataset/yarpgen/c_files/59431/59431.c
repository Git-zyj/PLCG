/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (8589934591 / (((((max(1841602044, var_8))) ? (1841602042 / 26078) : (max(1, 2453365254))))));
    var_21 = max(((2453365254 ? (62951 < 3967945196626898293) : var_2)), ((((20965 ? 1 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = (max(var_22, 2585));
                var_23 ^= (max(((min((max((arr_3 [i_0] [17]), (arr_4 [i_0] [i_0] [i_1 + 1]))), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))), ((((34091302912 || (arr_2 [i_0] [22]))) ? (((max((arr_5 [i_0] [i_1]), 26058)))) : ((2453365263 ? 140737488355324 : 128))))));
                var_24 = -255;
            }
        }
    }
    #pragma endscop
}
