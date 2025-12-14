/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((4294967295 < (((var_17 ? var_12 : var_16)))));
        var_19 += (!18);
        var_20 += ((var_10 / var_7) & (var_3 >= 3043622498));
    }
    var_21 = var_11;
    var_22 = (((((var_12 << ((63 ? var_12 : var_18))))) * ((((min(var_2, 6178984210737772794))) ? (~79063335) : var_6))));
    #pragma endscop
}
