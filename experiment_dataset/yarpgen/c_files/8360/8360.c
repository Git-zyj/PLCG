/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-9223372036854775807 - 1);
    var_14 = var_1;
    var_15 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        arr_3 [i_0] = min(1, 1);
        var_17 = ((+(((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_1 - 1] [i_1] = ((((arr_0 [i_1 - 1]) << (244 - 225))));
            var_18 = (max(((max(((-(arr_5 [i_0] [i_0]))), (var_6 / var_3)))), (max((arr_6 [i_0] [i_0] [i_1]), 49))));
            var_19 *= (!((min(((min(7, 1))), 3072163171))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    arr_16 [i_3] = var_0;
                    arr_17 [i_3] [i_0] [i_3] [i_2] [i_0] [i_3] = 0;
                    arr_18 [i_0] [i_3] [i_3] = (!var_12);
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    arr_23 [i_0] [i_0] [i_3] [i_0] = (!2702416368);
                    var_20 = (!1);
                    var_21 = (var_2 >= 1);
                }
                arr_24 [i_0] [i_3] [i_0] [i_3 - 1] = 1;
            }
            var_22 = (max(var_22, -var_5));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = ((1 == (arr_27 [i_2])));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_30 [i_2] [i_2] [i_7] = 9223372036854775804;
                    var_24 = (1 ? 5697129932041615916 : 160);
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            var_25 = (!-17386);
            var_26 = var_0;
            arr_33 [i_0] = (!(-9223372036854775807 - 1));
            arr_34 [i_0] [i_8] = (arr_21 [i_0] [i_8 - 1] [i_8 + 2] [i_0]);
        }
    }
    #pragma endscop
}
