/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-127 - 1);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-1 << (var_8 >= 1));
        var_18 |= (((var_12 ? var_7 : var_12)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                arr_13 [i_1] [i_2] [i_3] = (arr_7 [i_3 + 1] [i_3 - 2]);
                var_19 = (~1);
                var_20 |= ((((var_2 << (arr_10 [i_1] [i_2] [18]))) & (!var_6)));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_21 = (~var_14);
                arr_16 [i_1] [i_1] [i_1] [i_4] = (arr_9 [i_4]);
            }
            arr_17 [i_1] [14] &= ((var_1 ? (arr_4 [16]) : (570572014 * var_5)));
            arr_18 [i_1] [i_1] [i_1] = (0 ? var_11 : -var_6);
            arr_19 [i_1] [i_2] [16] &= -33921;
        }
        var_22 = (~-102);
        var_23 = 16352;
        var_24 = ((!(var_3 | 127)));
        var_25 = (arr_8 [i_1]);
    }
    var_26 = ((~(!var_9)));
    var_27 = var_2;
    #pragma endscop
}
