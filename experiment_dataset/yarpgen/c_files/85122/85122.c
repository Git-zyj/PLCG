/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = (arr_2 [i_0] [i_0]);
            arr_6 [i_1] = (arr_4 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_17 [i_1] = var_15;
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [16] [i_0] = var_15;
                            var_17 = var_8;
                            arr_19 [i_2 - 2] [i_2 + 2] [i_2] [i_2] [i_1] = (((((var_10 & ((var_14 & (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))))) < (((((var_13 ^ (arr_3 [i_1])))) ? var_15 : (arr_16 [i_2 - 2] [i_1])))));
                        }
                    }
                }
            }
            arr_20 [i_1] [i_0] = ((!(arr_11 [i_0] [i_0] [i_1] [9])));
        }
        var_18 = (arr_15 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            arr_27 [i_6] = arr_23 [i_5] [i_6] [i_5];
            var_19 = var_10;
            var_20 = var_10;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_21 = (((arr_11 [i_5] [i_5] [i_7] [8]) ? (arr_11 [20] [i_5] [i_7] [i_7]) : (arr_11 [0] [i_7] [i_7] [i_7])));
            arr_31 [i_5] = (arr_8 [i_5] [i_7] [i_5]);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_22 = (!(arr_33 [i_9 - 3] [i_9 - 3] [i_10] [i_10 - 2]));
                            arr_41 [i_10] [i_10] [i_10] [7] [i_10] [7] = var_5;
                        }
                    }
                }
            }
            arr_42 [i_5] [i_7] [i_5] = (((arr_37 [6] [i_5] [i_5] [i_5]) ^ (!var_13)));
        }
        arr_43 [i_5] = (((arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    var_23 = var_4;
    var_24 = var_14;
    var_25 = (var_7 >= var_15);
    #pragma endscop
}
