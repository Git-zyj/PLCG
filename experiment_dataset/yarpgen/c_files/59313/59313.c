/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = (min(1129792346, 35184372088831));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = (-2147483647 - 1);
                var_23 = (((((((((arr_2 [8]) ? -312441880 : -466930257))) - (min(-1, 4120158661542495677))))) ? ((-(!var_14))) : (!1235431911)));
                var_24 = 4974727128419584856;
            }
        }
    }
    var_25 = (-1 & 2034717796414801724);
    #pragma endscop
}
