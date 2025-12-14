/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((651008603 + -0) / -1014177507));
                arr_5 [i_0] [i_1] = ((!(~var_2)));
            }
        }
    }
    #pragma endscop
}
