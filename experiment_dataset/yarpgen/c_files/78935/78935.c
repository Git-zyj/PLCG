/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (56375 && 3936047637);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (-1769276665 ? 1 : (arr_3 [i_0]));
        var_17 = var_6;
        arr_5 [16] &= var_13;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_18 += (((min((((var_5 ? var_4 : 3936047619))), 8373764280081695914)) + ((max((arr_2 [i_1 - 3]), var_0)))));
        var_19 = ((~(min((((arr_2 [i_1]) & var_9)), var_5))));
        var_20 = (min(var_20, var_3));
    }
    var_21 += ((var_10 ? ((((var_13 ? var_11 : var_12)))) : var_3));
    var_22 = (max(var_22, ((max(var_2, var_12)))));
    #pragma endscop
}
