/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += -71;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_18 = 120;
                var_19 = (max(var_19, 95));
            }
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                var_20 += (arr_6 [24]);
                var_21 = 71;
                var_22 = (arr_0 [i_1]);
                arr_13 [15] [14] [i_0] = arr_0 [i_0];
                var_23 = -1;
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_18 [i_0] = -118;
                var_24 *= 4095;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [6] [i_5] [1] [i_0] = (arr_7 [1] [i_1]);
                            var_25 = (arr_21 [21] [i_7] [1]);
                        }
                    }
                }
                arr_28 [i_0] [24] [16] [2] &= (arr_1 [i_1]);
            }
            var_26 = arr_14 [3];
            var_27 = (max(var_27, (arr_11 [12] [12] [i_1] [i_1])));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_28 = (arr_26 [i_0] [2] [18] [i_9] [i_9] [1] [i_9]);
                var_29 = 1;
            }
            var_30 = (max(var_30, (-127 - 1)));
            var_31 = (max(var_31, (arr_10 [i_0] [i_0] [7] [i_0])));
            var_32 = (max(var_32, (arr_20 [17] [i_0] [i_8 - 1])));
            var_33 = 63;
        }

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_37 [24] [i_0] = (arr_8 [i_0] [i_10] [i_10] [24]);
            var_34 = (min(var_34, 118));
        }
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            var_35 = -119;
            arr_41 [i_0] = -71;
            var_36 = (arr_20 [i_0] [1] [i_0]);
        }
        arr_42 [i_0] = (arr_35 [21] [i_0]);
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 14;i_12 += 1)
    {
        arr_45 [1] = 2147483647;
        arr_46 [0] = (arr_31 [i_12 + 1] [i_12 + 1] [10]);
        var_37 = (min(var_37, (arr_14 [i_12 + 2])));
    }
    var_38 = var_3;
    var_39 = var_5;
    var_40 = 71;
    #pragma endscop
}
