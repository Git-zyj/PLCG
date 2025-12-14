/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((!((max(((var_6 / (-9223372036854775807 - 1))), (~var_13))))))));
    var_16 = 3317;
    var_17 = var_1;
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((((var_8 ? 26983 : (arr_1 [i_1])))), ((var_4 * (-2119477925 / var_13)))));
                var_19 = var_1;
            }
        }
    }
    #pragma endscop
}
