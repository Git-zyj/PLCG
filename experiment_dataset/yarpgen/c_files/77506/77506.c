/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((var_5 - var_15) < (max(var_7, 8646911284551352320))))), (16777 | 1193564763)));
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (arr_2 [3] [i_0] [i_0]);
                arr_5 [i_0] [i_0] = (arr_3 [i_0 - 1] [i_1]);
                arr_6 [i_0 - 2] [i_0] = ((((arr_4 [i_0] [i_0 - 1] [i_1 - 3]) | (arr_4 [i_0] [i_0 - 2] [i_1 + 3]))));
                var_19 *= ((!((min(((~(-2147483647 - 1))), -18)))));
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
