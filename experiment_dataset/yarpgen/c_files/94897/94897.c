/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (((arr_1 [i_0 + 1]) ? (arr_2 [3] [i_0 + 3]) : var_7));
                var_11 = (max((13692631565965152518 << 0), (((-(max(var_2, -775542820)))))));
            }
        }
    }
    var_12 = ((!(((((max(1080113326, -72))) ? -1 : ((max(var_9, var_1))))))));
    #pragma endscop
}
