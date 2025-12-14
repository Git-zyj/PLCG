/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_6 ^ var_13) ? 3 : -var_0)) - var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0] [i_1] [i_0]);
                var_18 = (min(((10621 | (arr_3 [i_0] [i_1]))), ((224 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_1 [i_1])))));
                var_19 = ((arr_3 [i_0] [i_1]) & (arr_3 [i_1] [i_1]));
            }
        }
    }
    #pragma endscop
}
