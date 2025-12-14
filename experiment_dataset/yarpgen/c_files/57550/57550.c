/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 &= var_2;
    var_19 &= ((var_6 * (((var_1 > (var_1 == var_4))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (var_7 / var_13);
        arr_4 [i_0] &= min((min(4095, 2007803609)), var_16);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_1] [i_0] [i_0] = (((min(var_15, (min(var_10, var_3)))) * ((-101 * (4095 / 6839638653659536464)))));
            arr_9 [i_0] &= -6839638653659536473;
        }
        arr_10 [i_0] [i_0] &= var_1;
    }
    #pragma endscop
}
