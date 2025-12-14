/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? 135928679 : -32758));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = ((~(0 <= 37687)));
                var_13 = ((+((max((arr_4 [i_0 - 1] [i_1 + 2]), (arr_4 [i_0 - 3] [i_1 + 3]))))));
            }
        }
    }
    var_14 = (min(var_14, var_5));
    #pragma endscop
}
