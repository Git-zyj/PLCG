/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 71;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_15 = (((min(51918, (((arr_1 [1] [9]) % var_7)))) >= 71));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_16 = (28763 || ((((arr_1 [i_1 + 1] [i_1 + 4]) ? (arr_1 [12] [i_1 + 4]) : (((((arr_6 [4] [14] [1]) == 1))))))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_17 *= ((-(-185 / 1350609104)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_18 = (var_12 == var_6);
                            arr_15 [16] [2] [1] [i_0] [2] [11] [11] = var_4;
                            var_19 = (13606 > 1);
                        }
                    }
                }
                var_20 = (min((max(var_3, (arr_13 [1] [14] [18] [4] [i_1 + 3] [1] [5]))), (((var_6 > (arr_11 [2] [8] [12]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [i_5] = 1350609104;

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_25 [12] [8] [i_5] [6] = var_13;
                    var_21 = (max((~-21178883), (arr_17 [15])));
                }
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    arr_28 [1] [6] [i_5] [8] = (((((65535 ? 1 : 2987283205184530519))) ? 1 : (arr_6 [14] [17] [i_8 - 1])));
                    var_22 = (((arr_19 [i_5]) - ((11895 ? var_4 : -3166247534044288595))));
                }
                var_23 = (min((((arr_18 [i_6]) ? (arr_18 [i_5]) : var_8)), (((((min(71, 1))) % var_13)))));
            }
        }
    }
    var_24 = -var_12;
    #pragma endscop
}
