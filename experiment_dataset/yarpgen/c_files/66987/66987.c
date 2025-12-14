/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_6, ((4567455150315372361 ? 50 : 9999301008761844837))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (max(((var_11 ? (arr_3 [i_0] [i_0] [3]) : (arr_3 [i_0] [i_0] [i_0]))), (arr_2 [i_0])));
                var_16 = var_0;
                var_17 = (arr_1 [i_1 - 1] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
