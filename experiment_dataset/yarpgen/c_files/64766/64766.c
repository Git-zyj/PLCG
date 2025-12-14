/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(-1, -57)), -17));
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (22 & 391021436)));
                arr_6 [i_0] [5] [i_0] = (arr_4 [4] [i_0] [1]);
                arr_7 [i_0] [i_0] = ((-3903945859 ? ((((((((arr_0 [i_0] [i_0]) + 2147483647)) << (67 - 67)))) ? (arr_0 [1] [8]) : (~-1))) : -67));
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
