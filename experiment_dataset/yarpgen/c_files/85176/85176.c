/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((min(((var_13 ? 3375720986549800466 : var_2)), var_2)), 3375720986549800443);
    var_17 = var_6;
    var_18 = (min(var_4, ((((min(var_3, 15071023087159751149)) < 4294967295)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0] = (var_9 ? (var_12 == 1141) : (min(((var_10 ? var_10 : var_2)), (~var_2))));
                var_19 ^= (min(((17082148165175684551 ? (arr_3 [i_1 - 3] [i_0] [i_0 - 1]) : (arr_3 [i_1 - 2] [i_0 - 1] [i_0 - 1]))), var_3));
            }
        }
    }
    #pragma endscop
}
