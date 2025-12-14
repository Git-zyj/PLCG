/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((((~(arr_4 [i_1 + 2])))) ? (((arr_1 [i_0]) ? 7020080927504967990 : (((arr_1 [14]) ? (arr_4 [i_1]) : (arr_2 [i_0] [i_1]))))) : (~var_2));
                var_18 = (max(((min(1, var_9))), var_11));
            }
        }
    }
    var_19 = (min(((var_8 ? var_10 : (max(0, 4294967295)))), (((~((var_11 ? var_10 : -54)))))));
    #pragma endscop
}
