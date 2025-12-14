/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((arr_4 [i_0 + 2] [i_0 + 2]) + ((min((arr_4 [i_0 + 2] [i_0 + 2]), (arr_4 [i_1] [i_0 + 1])))))))));
                var_17 = (arr_5 [i_1]);
                var_18 ^= (arr_4 [i_0 - 1] [i_0 + 2]);
                arr_6 [i_0] [12] [i_0] = 25964;
            }
        }
    }
    var_19 = (var_8 || 325195642862868887);
    var_20 = (max(var_20, var_4));
    #pragma endscop
}
