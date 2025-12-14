/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (min(5923581670605039340, ((((min(var_2, var_12)) < var_15)))));
        arr_4 [10] &= 684505091;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = ((!((min(var_15, 232)))));
            var_19 = ((+((min((arr_8 [i_0] [i_0] [i_1]), 63929)))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (var_4 ^ var_0);
            var_21 = (((arr_1 [i_0] [i_0]) ? var_15 : (arr_1 [i_2] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_0] [i_4] = ((4294967295 ? (arr_14 [i_0] [i_0] [i_4 - 1] [i_0] [i_3] [i_4 - 1]) : 17196463215960579233));
                        var_22 = arr_13 [i_0] [i_2] [i_3] [i_0] [i_4];
                        var_23 = (1250280857748972378 > 0);
                        arr_16 [i_4 - 1] [i_0] [i_2] = (((arr_2 [i_3]) == 34359738367));
                    }
                }
            }
        }
    }
    var_24 = var_1;
    var_25 ^= (max(var_2, var_14));
    var_26 = var_17;
    #pragma endscop
}
