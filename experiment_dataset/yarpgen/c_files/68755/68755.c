/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (!32);
                arr_7 [i_1] [i_1] = (min(((max(26847, -17274))), -26847));
            }
        }
    }
    var_20 = (min((((max(16, 56952)))), var_9));
    var_21 = ((!((max(var_3, 50)))));
    #pragma endscop
}
