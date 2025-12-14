/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, (((-16677 + 2147483647) << (!var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 += (min(((((max(16678, 48858))) ? 16677 : (max((arr_2 [i_1] [i_0]), (arr_1 [i_0]))))), ((((((68 << (68 - 59)))) || 72)))));
                arr_4 [i_0] = ((((53 >= var_0) ? var_0 : ((16677 - (arr_1 [i_0 + 2]))))));
            }
        }
    }
    #pragma endscop
}
