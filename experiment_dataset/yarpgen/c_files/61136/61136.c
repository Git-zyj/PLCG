/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max(var_3, (max(var_5, var_11)))), ((((max(var_6, -35))) ? (!-13) : (127 || var_2)))));
    var_16 = -61;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((-57 ? (((var_11 ^ (arr_1 [i_1])))) : (-82 ^ 10182238238004967693))));
                arr_5 [i_0] [11] = var_4;
                var_17 = var_13;
                arr_6 [15] = 408959668;
            }
        }
    }
    #pragma endscop
}
