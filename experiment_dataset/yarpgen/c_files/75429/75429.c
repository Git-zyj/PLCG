/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((arr_3 [i_0] [i_0 - 1] [i_0 - 1]), (max(19, ((19 ? 40 : (arr_3 [i_0] [3] [i_1 + 1]))))))))));
                arr_5 [1] [i_1] = (((-7 - (max(38, (arr_2 [i_0 + 1]))))) - (max((19 + -19), 18)));
                var_15 = (min((min(-10, -18)), -39));
            }
        }
    }
    var_16 = max(((min((min(var_3, 19)), (-20 == var_7)))), ((~(~-29))));
    #pragma endscop
}
