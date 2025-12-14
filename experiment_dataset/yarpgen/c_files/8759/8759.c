/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = 4943;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 ^= var_13;
            arr_6 [i_0] [i_0] = -var_6;
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_2] [i_0] = (!var_12);
            var_22 = ((var_3 ? var_14 : var_3));
            var_23 = (min(var_23, (((~((1668504484 ? 1668504497 : 19153)))))));
            var_24 += ((var_6 ? (!2626462803) : (~var_10)));
            arr_10 [i_2] [i_0] = (143340021 ? 268435424 : 14274814179087594319);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = ((var_1 ? 19 : var_4));
            var_25 ^= (var_14 | 143340021);
            arr_14 [i_3] = (var_12 ? ((143340021 ? -1919295068 : 240)) : var_5);
        }
        var_26 ^= -1;
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] = -706778394;
        var_27 = var_9;
        arr_18 [i_4] = -2054773882;
    }
    var_28 -= (-11506 >= 16);
    #pragma endscop
}
