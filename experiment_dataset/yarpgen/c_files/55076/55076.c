/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((max(((max(25745, -12934))), (((((1696244726 ? 12941 : 8064))) ? (~var_0) : var_10)))))));
                var_20 = ((var_12 ? var_15 : var_15));
            }
        }
    }
    var_21 = (min(var_21, (((((max(var_12, -8047))) ? ((var_9 ? var_3 : var_5)) : ((((var_8 ? var_11 : var_6)))))))));
    #pragma endscop
}
