/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (max(var_19, ((min(((var_10 == (min(2923229855, 38)))), ((var_8 <= (((max(var_13, -20573)))))))))));
        arr_3 [i_0] = ((max(-9223372036854775801, var_13)) <= (((max(-6, 1)))));
    }
    var_20 = (max((((((var_7 >> (-1 + 25))) >> (var_17 - 1751467178)))), (max((max(-9223372036854775792, var_16)), 48143))));
    var_21 -= 12143384675474454603;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                var_22 = (min(var_22, 1899354531));
                var_23 = (max(var_23, (((((max(var_3, (max(var_11, var_3))))) / 52)))));
            }
        }
    }
    #pragma endscop
}
