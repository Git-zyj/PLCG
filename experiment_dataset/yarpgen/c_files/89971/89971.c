/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (max(((3 ? 3295962612 : 5818)), ((((((5824 ? 4294967284 : -1))) ? 59717 : 5826)))));
                var_22 = ((((((((5818 ? 49085 : 4294967293))) ? (((min(29, 29)))) : (max(1125899906842623, 16461))))) ? ((((((1381148966 ? -15414 : 18))) ? ((5837 ? 49073 : 65535)) : 230))) : ((5302641402267681101 ? 59719 : 986626716862135041))));
            }
        }
    }
    #pragma endscop
}
