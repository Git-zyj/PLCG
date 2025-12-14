/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 174;
    var_15 = var_7;
    var_16 = 2911331295596528304;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (!2911331295596528304);
                var_17 = (max(var_17, (((!((((-(arr_3 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
