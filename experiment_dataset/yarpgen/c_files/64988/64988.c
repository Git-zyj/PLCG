/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_4 ? (((min(1, 53959))) : (max(0, var_11))))));
    var_17 = (min((max(var_4, var_7)), ((((var_8 ? 12187 : 7103665719640716000))))));
    var_18 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(-1476454802408582095, 12472));
                var_20 = ((+((0 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_1 [i_1])))));
            }
        }
    }
    #pragma endscop
}
