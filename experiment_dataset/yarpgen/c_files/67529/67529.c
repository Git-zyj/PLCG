/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (63 + var_4);
    var_17 = (var_9 + 19);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = -8197066980774297658;
                var_19 = (arr_3 [i_0] [i_1]);
            }
        }
    }
    var_20 = 2163164548;
    #pragma endscop
}
