/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = 288229593;

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_16 = ((+(((arr_1 [i_2]) ? var_13 : (arr_3 [i_0 - 1] [i_0] [i_0])))));
                arr_9 [i_0] [i_0] [i_1] = (arr_2 [i_0 - 1]);
                var_17 = (min(var_17, -4006737702));
                var_18 = var_12;
                var_19 = (var_9 ^ 8036459460104050649);
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_20 = var_8;
                arr_13 [i_3] [i_1] [i_0] = 4006737702;
            }
            arr_14 [i_1] = var_9;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_18 [i_0] [i_4] [i_0] = var_1;
            arr_19 [i_0 + 1] [i_0] [i_0] = ((var_5 ? ((var_8 ? 118 : var_4)) : (!4006737719)));
            arr_20 [i_0] [i_0] &= (0 | var_2);
            var_21 = (~(arr_4 [i_0 - 1]));
        }
        var_22 = 1800660592;
    }
    var_23 += (((((min(var_12, var_4)) ? 4006737703 : (12121 % 66)))));
    #pragma endscop
}
