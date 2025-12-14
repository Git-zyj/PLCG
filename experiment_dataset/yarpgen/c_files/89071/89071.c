/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max((~var_6), 28767)))));
    var_15 ^= (!var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((~((min((arr_5 [i_0]), var_13)))))));
                var_17 = (min(var_17, -350545192));
            }
        }
    }
    #pragma endscop
}
