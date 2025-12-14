/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((((2172502966 ? 18446744073709551609 : 20))) ? 18446744073709551595 : (((var_6 + 4174055617244474179) ? (min(var_4, var_10)) : (((var_4 ? var_9 : var_16)))))));
    var_18 ^= (min(var_0, ((!(~var_12)))));
    var_19 = var_6;
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 |= (~var_10);
                var_22 = var_5;
                var_23 = ((+(max(var_9, (((arr_3 [i_0]) - var_3))))));
                var_24 = var_4;
            }
        }
    }
    #pragma endscop
}
