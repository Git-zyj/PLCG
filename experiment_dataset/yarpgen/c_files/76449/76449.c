/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_9 <= 0) & (var_9 < 28770))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0 - 1] [i_1] = (max((min((min(33292288, (arr_4 [i_0] [i_0]))), var_8)), 193));
                arr_8 [i_1] [i_1] = min((((((min(-28758, (arr_5 [i_0] [1] [i_1]))))) / (min((arr_1 [i_1]), var_1)))), (((((min((arr_3 [i_0] [i_0]), (arr_3 [i_1] [i_1])))) || ((min((arr_1 [i_0]), (arr_0 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
