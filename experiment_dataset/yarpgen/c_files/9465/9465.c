/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_3;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 &= (arr_0 [i_0 - 2] [7]);
            arr_5 [i_0] = var_15;
            arr_6 [i_0] [i_0] = var_5;
            var_17 = (max(var_17, var_5));
            arr_7 [i_0] [10] [i_1] = (arr_3 [i_0 - 1] [i_0 - 3] [i_0]);
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_18 = -236876956;
                arr_12 [i_3] [i_3] = 108;
                var_19 = var_9;
                arr_13 [i_0] [i_0] [i_3] = 4095;
                var_20 = var_6;
            }

            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                var_21 &= (arr_16 [i_0] [i_2] [i_0] [i_2]);
                var_22 = 4095;
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_23 = var_11;
                var_24 = (arr_4 [i_0 - 2]);
            }
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                var_25 = 1;
                arr_21 [i_0] [i_0] [i_0] [i_0] = var_11;
                arr_22 [i_2] [i_0 - 2] [i_6 + 1] [18] = (arr_11 [i_0 + 2]);
            }
        }
        var_26 = (max(var_26, (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 3])));
    }
    for (int i_7 = 4; i_7 < 6;i_7 += 1)
    {
        var_27 -= 4095;
        arr_25 [i_7] = var_11;
        arr_26 [i_7] = 0;
        arr_27 [i_7] = (arr_16 [i_7 + 1] [i_7] [i_7] [i_7]);
    }
    for (int i_8 = 3; i_8 < 23;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = var_11;
        var_28 = (arr_30 [i_8]);
    }
    var_29 = var_15;
    #pragma endscop
}
