/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] = -1;
                var_18 = ((~(~-115)));
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
