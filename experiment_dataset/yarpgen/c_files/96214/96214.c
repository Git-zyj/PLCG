/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] [5] = (max(44218, 21336));
                arr_7 [i_0] = 4184674276267337197;
            }
        }
    }
    #pragma endscop
}
