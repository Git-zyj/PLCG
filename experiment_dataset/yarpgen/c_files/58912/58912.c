/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = var_8;
                arr_4 [i_0] [i_1] [i_1] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_18 = (min(var_9, (min(((24 ? 37 : 3722620925310137975)), (!18446744073709551615)))));
    #pragma endscop
}
