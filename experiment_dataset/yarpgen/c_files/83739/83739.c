/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 *= ((((var_6 ? 33554431 : var_6)) << (102 - 97)));
                    arr_7 [i_0] [7] [i_1] [i_2] = (min((((-(arr_6 [i_0 + 3] [i_0 - 2] [i_0 + 3])))), var_4));
                    arr_8 [i_0] [i_1] [i_2] = var_9;
                }
            }
        }
    }
    var_17 = (min(var_17, ((((-2147483647 - 1) == ((102 ? var_7 : -103)))))));
    var_18 = (min((max((((var_9 ? 22171 : 42713))), (-9223372036854775807 - 1))), var_14));
    #pragma endscop
}
