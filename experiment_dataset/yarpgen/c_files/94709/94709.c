/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((arr_2 [i_1 - 1]) ? 3072 : (((max((4163916840457640857 >= var_4), 28))))));
                var_20 = var_8;
                var_21 = (min(102, 3072));
            }
        }
    }
    var_22 ^= ((!(min(var_9, (!var_10)))));
    #pragma endscop
}
