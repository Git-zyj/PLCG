/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((-(max(var_0, -110)))))));
                arr_5 [11] [i_1] [i_1] = (max(1044753147988948026, (!108)));
                var_21 = ((-(max((max(147, 2736011038957312747)), 1))));
                var_22 = (max(((147 ? 1 : var_5)), ((max(1, 141)))));
                var_23 = (min(0, 109));
            }
        }
    }
    var_24 = 1;
    var_25 += ((-1 ? ((max(31, var_17))) : (((6962 ? var_3 : var_18)))));
    #pragma endscop
}
