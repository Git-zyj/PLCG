/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_10 || var_2), (((min(var_12, var_4)) != -var_5))));
    var_14 = (max(var_14, (!var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (arr_2 [i_0] [i_1] [i_2]);
                    arr_10 [13] [i_1] [i_1] = (-107 * 1);
                    arr_11 [i_0] [9] = ((((max(18446744073709551615, -2141957664792467793))) ? (~1) : (-9223372036854775807 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
