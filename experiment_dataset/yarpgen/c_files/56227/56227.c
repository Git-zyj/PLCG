/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((var_12 % var_10) ? (((var_13 ? var_0 : ((min(var_10, var_2)))))) : ((var_0 ? var_11 : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = 11521;
                var_15 = 1;
                arr_6 [i_0] [i_1] = var_1;
                var_16 = var_8;
                var_17 = (~15196318887875265448);
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
