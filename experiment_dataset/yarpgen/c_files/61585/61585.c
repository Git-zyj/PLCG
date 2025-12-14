/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((max((arr_2 [i_1]), 242)));
                arr_5 [2] [i_1] [i_0] = ((3487844602 ? -15253 : 6254711253038249710));
            }
        }
    }
    var_20 = (min(var_20, var_6));
    #pragma endscop
}
