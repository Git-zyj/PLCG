/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max(2170276576, 65523));
                var_18 ^= (-(min(var_16, 12)));
                var_19 = ((var_3 ? (max(((((arr_1 [8]) & 36643))), var_13)) : (((1 ? (arr_5 [0]) : var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_20 *= (arr_10 [i_3]);
                var_21 = (min(var_21, var_16));
            }
        }
    }
    #pragma endscop
}
