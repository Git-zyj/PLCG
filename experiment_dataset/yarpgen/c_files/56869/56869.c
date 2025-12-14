/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((((var_5 ? var_16 : var_4))) <= (min(-7399216679833080140, 899200810)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 += ((-(arr_0 [i_2 - 2])));
                    var_19 *= (arr_2 [i_1]);
                }
            }
        }
    }
    var_20 -= (var_6 != var_14);
    var_21 = var_4;
    #pragma endscop
}
