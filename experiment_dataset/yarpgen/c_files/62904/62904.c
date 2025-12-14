/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, 10));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_15 = (min(var_15, (((var_10 ? 24454 : var_9)))));
            arr_6 [i_0] [i_0] = (arr_1 [i_1 + 2] [i_1 - 1]);
            arr_7 [i_0] &= var_6;
            arr_8 [i_0] [i_1 - 1] [i_0] |= (~7516);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 = (max(1, (((((arr_1 [i_0] [i_2]) || 939524096)) ? -939524097 : (arr_9 [i_0])))));
            var_17 = (max(var_17, (((max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_0])))))));
            var_18 = var_12;
            arr_12 [i_2] = ((((((arr_3 [i_2] [18]) <= (arr_3 [i_0] [i_2])))) >= -1503750117));
            var_19 *= (min((((arr_11 [i_0] [i_2]) & (arr_11 [i_0] [i_2]))), (((arr_3 [i_0] [1]) ? (arr_3 [i_0] [2]) : var_9))));
        }
        arr_13 [i_0] [i_0] = arr_10 [10] [10];
    }
    var_20 = (max(var_20, (((((((min(var_7, var_13)) & 939524070))) ? (((var_13 <= ((var_9 ? var_8 : var_4))))) : var_5)))));
    var_21 += -30065;
    #pragma endscop
}
