/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, var_10));
    var_12 = (min((max((~var_3), (122 | var_5))), (!var_5)));
    var_13 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (((max((arr_3 [i_1]), (arr_2 [i_0]))) - (~4591)));
                var_15 ^= (min((arr_0 [2] [2]), (min((arr_0 [i_0] [0]), (arr_0 [i_0] [0])))));
                arr_4 [i_0] [i_0] [i_1] = (min((((((arr_0 [i_0] [i_0]) & (arr_2 [i_0]))) - (arr_3 [i_1]))), ((max((arr_1 [i_1]), (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
