/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = ((-(((59552 || (arr_0 [i_0 - 2]))))));
                    var_22 ^= var_19;
                    arr_7 [i_1] [i_1] [i_1] = (min((min(-55, (min(59551, 7)))), (((((max((arr_2 [i_0] [i_1] [i_2]), 996382682))) && (arr_3 [i_0]))))));
                }
            }
        }
    }
    var_23 = var_14;
    var_24 = var_15;
    var_25 = ((!(((~((var_15 ? 3 : var_0)))))));
    #pragma endscop
}
