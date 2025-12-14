/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((((((arr_0 [i_0]) ? 1297240192 : (var_11 || 1297240192)))) ? (var_3 * var_10) : (((var_3 ? 1073741823 : var_9)))));
                arr_5 [i_0] = (max(var_3, ((~(var_9 & 4067403683248354278)))));
            }
        }
    }
    var_20 |= -var_3;
    #pragma endscop
}
