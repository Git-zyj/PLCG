/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((var_4 ? var_9 : 8444249301319680));
    var_16 = var_5;
    var_17 = ((var_14 ? ((((var_11 || var_6) ? var_6 : var_8))) : var_4));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0] [i_0]) && (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] = var_8;
            var_19 *= 39;
            var_20 *= (arr_1 [i_0 - 1] [i_0 - 1]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_21 = (min(39, (((~137) ? var_11 : -7151))));
            var_22 = (-39 - 1);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_3] [i_2] [i_3] = (((arr_8 [i_0 + 1] [i_3] [i_3] [i_0]) >= (arr_0 [i_3] [i_2])));
                var_23 = (~var_6);
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_13 [i_0] [i_0] [i_2] [i_4] = var_6;
                arr_14 [i_0] = var_11;
                var_24 = var_11;
                var_25 = (arr_12 [i_0]);
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = var_5;
            var_27 = 1;
            var_28 = (((arr_11 [i_0 + 3] [i_0 + 3]) ? var_3 : 1));
        }
    }
    #pragma endscop
}
