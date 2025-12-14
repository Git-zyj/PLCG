/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = (1 % 166);
    var_20 = (3237044374 ? 1 : 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((((max((var_13 == 1), (max(188, 1))))) ? var_17 : ((217 ? (((arr_1 [i_0]) ? 234 : 16038272997357386978)) : (arr_2 [i_1]))))))));
                var_22 = ((234 > (var_7 % 23313)));
            }
        }
    }
    var_23 += 1;
    #pragma endscop
}
