/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (60 && -60);
                arr_6 [i_0] = (max((arr_2 [i_0]), ((125 ? 644259337 : -29))));
                var_13 = ((((!(!40))) ? (-47 && 1) : ((((arr_0 [i_1] [i_1 - 1]) && 16383)))));
            }
        }
    }
    #pragma endscop
}
