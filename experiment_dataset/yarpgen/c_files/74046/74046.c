/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (-((max((arr_2 [i_0]), 56))));
                var_21 = (max(var_21, 61));
                var_22 ^= (min((min((arr_3 [i_1 - 3]), (arr_3 [i_1 - 3]))), ((451916708 ? (((!(arr_2 [i_0])))) : (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
