/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 95;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_17 = 1642538758;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] = 65527;
                    var_18 &= 12696;
                }
            }
        }
    }
    var_19 = (min(var_19, var_9));
    var_20 = (((((((min(12, var_10))) ? (min(var_7, 2262652918)) : -13))) ? var_12 : (((((((var_6 ? var_7 : 16365))) && 137))))));
    #pragma endscop
}
