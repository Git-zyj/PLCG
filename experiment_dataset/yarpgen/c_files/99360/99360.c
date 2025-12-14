/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 4294967292));
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (max(((((var_4 > (arr_0 [i_0 - 2] [i_0]))))), var_7));
                var_13 = var_2;
                var_14 |= (!112);
            }
        }
    }
    var_15 *= -1053995496164611279;
    #pragma endscop
}
