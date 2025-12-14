/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (max(28160539, (max(var_8, 255))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((max((!var_3), (~var_11))));
                arr_6 [i_0] [i_1 + 1] [i_0 - 1] = ((-102 ? 805306368 : 0));
            }
        }
    }
    #pragma endscop
}
