/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((var_8 ^ var_14), ((((min(36028796884746240, (arr_6 [i_0] [i_0])))) ? (min(36028796884746265, 22)) : -2147483638))));
                var_18 *= (!-var_7);
            }
        }
    }
    var_19 |= ((((((var_9 ? 18410715276824805339 : var_4)) / 2147483632)) != (((((17 >> (var_2 - 3413970849))))))));
    #pragma endscop
}
