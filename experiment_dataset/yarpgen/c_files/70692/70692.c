/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (+(((var_1 >> 1) ? 361 : 4294934528)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((-7563237058776832100 ? -884415468 : 374));
                var_14 = 4981563924993781253;
            }
        }
    }
    #pragma endscop
}
