/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((var_1 ? var_13 : ((((!-29291) ? ((max(var_1, (arr_2 [18])))) : var_12)))));
                var_16 = (min(var_16, (!210916442)));
            }
        }
    }
    var_17 ^= ((max(6390, -1)) << (var_3 - 7009228121975330191));
    #pragma endscop
}
