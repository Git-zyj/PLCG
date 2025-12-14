/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((~((~(arr_3 [i_1] [i_1])))));
                var_17 &= ((((((arr_2 [i_0]) ? (1637703800243062322 - var_6) : ((max(2212700391082830295, var_10)))))) ? ((var_1 + (max(2904900628135523421, 0)))) : 2894354637));
                arr_4 [i_1] [i_1] = -4999531876120291039;
            }
        }
    }
    var_18 = 12675064515495569774;
    #pragma endscop
}
