/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(((4026402222057965156 ? (var_7 | 38) : 16390259168929434469)), (((!(7439 % 5882)))))))));
    var_17 = (var_0 ? (((var_3 ? var_14 : 58096))) : 58096);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 48173;
                arr_5 [i_1] = (((((~(~var_1)))) ? -54 : ((((max(30750, 1))) ? var_10 : 25976))));
                var_19 = (((((((var_9 ? 372612015432504232 : 34786))) ? var_14 : 1)) - var_13));
            }
        }
    }
    var_20 = ((((((!(((2212430424038336952 ? -1098712580 : 2212430424038336952))))))) - 8989690569097593978));
    #pragma endscop
}
