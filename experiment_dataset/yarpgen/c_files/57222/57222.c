/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (min(15937011036744876053, 1));
                arr_5 [i_0] [i_0] [i_0] = 116;
                var_17 = ((((min(((((arr_1 [i_0]) == (arr_3 [i_0])))), ((-(arr_1 [i_0])))))) ? (((-127 - 1) ? var_4 : (arr_4 [i_1] [i_1 + 4]))) : ((min((0 / var_14), 62649)))));
            }
        }
    }
    var_18 = (min(var_18, (((-(2305843009213693951 + -1))))));
    #pragma endscop
}
