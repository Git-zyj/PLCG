/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((((var_17 ? var_9 : var_16))))) % var_5)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 &= (((max(((min(var_11, (arr_1 [i_0])))), ((var_9 - (arr_2 [14]))))) <= 1));
        arr_3 [i_0] = var_17;
        arr_4 [i_0] = (max((min((var_0 || var_2), ((!(arr_0 [i_0] [i_0]))))), (((((1 ? (arr_1 [i_0]) : (arr_2 [i_0])))) && 8078785096280216603))));
        arr_5 [i_0] [14] &= var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (0 < 1919564713);
        var_22 &= ((-(arr_9 [i_1])));
        var_23 = (((((arr_6 [i_1] [i_1]) | 1)) ^ 65099));
    }
    #pragma endscop
}
