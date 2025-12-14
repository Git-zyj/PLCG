/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_1] &= (((arr_0 [i_1 - 1] [i_1 - 1]) ? var_12 : 8825033817873083725));
            arr_5 [i_1] = (!-var_16);
        }
        arr_6 [i_0] [i_0] = ((255 ? (((((arr_3 [i_0] [i_0]) >= 49413)) ? ((-(arr_3 [i_0] [i_0]))) : (((((arr_2 [12] [i_0] [12]) && var_3)))))) : 241));
    }
    var_17 = ((((((var_8 && (8380416 != -79))))) % ((((max(var_7, var_12))) ? (max(var_11, 0)) : (var_14 != 2570578610)))));
    #pragma endscop
}
