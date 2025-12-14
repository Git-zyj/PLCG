/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((0 ? 146789367288727945 : 4148977209)));
                var_12 = (((max(((((arr_2 [i_0] [i_1]) ^ 482041547))), var_6)) ^ ((max((arr_2 [i_0] [i_0]), 0)))));
            }
        }
    }
    var_13 = (var_9 * 0);
    #pragma endscop
}
