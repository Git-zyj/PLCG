/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 1));
    var_13 = ((1 ? (min((~1), 1)) : 20258));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = 64299;
                arr_7 [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
