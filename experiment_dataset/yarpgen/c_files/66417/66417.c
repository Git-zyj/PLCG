/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((!3816186981684114225) ? (!var_8) : (!var_2))))));
                arr_6 [i_0] [i_0] = 236;
            }
        }
    }
    var_16 -= var_12;
    #pragma endscop
}
