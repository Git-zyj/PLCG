/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (65533 || 342187047);
                    var_21 = ((min(65533, -0)));
                    var_22 ^= (((-var_4 ? 125 : (65522 & 8615271765234669288))));
                }
            }
        }
    }
    var_23 = max(125, var_9);
    var_24 = (((min((-2316365332250441529 & 4112494590), ((min(-104, 125))))) >= var_14));
    #pragma endscop
}
