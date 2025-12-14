/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1423891684;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (2436978271 + var_4);
                var_12 = var_7;
                var_13 = (max(var_13, 18));
            }
        }
    }
    var_14 = ((322295324 ? ((var_0 ? (524287 || 65535) : (-5 || 26))) : (var_9 && 127)));
    var_15 = ((1 << (1 < var_9)));
    var_16 = -322295347;
    #pragma endscop
}
