/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = max((((((var_5 ? 1 : 1))) ^ (35184372088831 | var_2))), 3613742716700158104);
                var_16 = (max((13766389795492615617 ^ 1), (max((136 & 3613742716700158107), 63200))));
                arr_8 [i_0] [i_1] = ((((max((max(var_4, var_10)), (~1)))) && ((max(var_6, (((var_4 ? -20006 : var_9))))))));
            }
        }
    }
    var_17 ^= var_14;
    var_18 = var_4;
    var_19 ^= 20005;
    #pragma endscop
}
