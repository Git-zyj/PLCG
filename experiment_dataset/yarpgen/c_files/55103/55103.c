/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 ^= (((((((var_7 ? var_8 : var_2)) & (var_6 * var_0)))) == ((var_7 ? ((var_1 ? var_6 : 1538850408)) : var_9))));
    var_12 = 1538850407;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((max(-1538850407, (var_7 & 2756116889))));
                var_14 &= (max((((((min(2756116887, 2756116889))) && (((var_7 << (((var_9 + 23009) - 15)))))))), var_7));
                var_15 *= ((-(arr_4 [6] [i_1])));
                var_16 *= (((arr_3 [7] [i_1] [7]) || var_1));
                var_17 = var_0;
            }
        }
    }
    var_18 = 1538850406;
    #pragma endscop
}
