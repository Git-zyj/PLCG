/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((-(var_0 != 11600836073348643151)))) ? (min(1733836802623667875, 33554431)) : ((((!(!var_5)))))));
                var_14 = -54;
            }
        }
    }
    var_15 |= (((((((min(var_0, var_1))) ? var_12 : ((max(-54, 16)))))) ? var_9 : ((((var_3 && (var_5 ^ var_12)))))));
    #pragma endscop
}
