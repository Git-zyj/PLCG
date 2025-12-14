/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = var_4;
                var_20 = ((((max((max((arr_5 [i_1]), var_8)), (1804519459 <= -1)))) + (min((((15 > (arr_0 [7])))), ((var_9 ? 98 : var_11))))));
            }
        }
    }
    var_21 += (((max(((var_8 ? var_3 : var_13)), 20)) < var_14));
    #pragma endscop
}
