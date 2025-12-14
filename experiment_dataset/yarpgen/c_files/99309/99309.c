/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((+(max((((arr_2 [i_1] [i_1 + 1] [i_1]) ? 1 : 48909)), (arr_0 [i_0])))));
                var_20 = (min(var_20, (((((6269185863068001360 + (arr_1 [i_0]))))))));
            }
        }
    }
    var_21 -= 15270180299399166476;
    #pragma endscop
}
