/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((2343680146 ? var_14 : (max(3744964973150985405, var_3))))) ? var_3 : (-9223372036854775806 != 7233689011517057606)));
        arr_3 [i_0] = var_4;
        arr_4 [i_0] [i_0] = var_11;
        arr_5 [i_0] = var_15;
    }
    var_16 = ((~((var_3 + ((var_13 ? 7233689011517057632 : var_0))))));
    var_17 &= -1772609527500477694;
    #pragma endscop
}
