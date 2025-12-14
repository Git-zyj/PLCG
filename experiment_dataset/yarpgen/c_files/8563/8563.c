/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = 1527749146;
                    var_11 = arr_2 [i_1];
                    var_12 = -6164784531378968138;
                }
            }
        }
    }
    var_13 &= (max((!var_8), var_6));
    #pragma endscop
}
