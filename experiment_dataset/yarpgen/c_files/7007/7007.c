/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [8] = (1114737440 ^ (arr_4 [i_0] [i_2 + 3]));
                    arr_9 [11] [11] [i_0] [13] = (((max(0, 0))));
                }
            }
        }
    }
    var_17 = ((((((min(34808, -1))) ? var_6 : ((((var_5 + 2147483647) << (((var_15 + 384342881) - 23))))))) ^ 1));
    var_18 = ((var_12 ? 15625 : (((min(var_16, var_1)) / 1451247227))));
    var_19 = var_7;
    #pragma endscop
}
