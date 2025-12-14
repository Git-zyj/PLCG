/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 474649060;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] &= ((20701 ? ((max(var_3, (min((arr_1 [i_1]), (arr_3 [i_0] [i_1])))))) : (((min(1, 8388608)) ^ (((~(arr_1 [i_0]))))))));
                var_11 -= var_4;
            }
        }
    }
    var_12 = (max(var_12, var_4));
    #pragma endscop
}
