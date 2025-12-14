/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((max(((~(arr_0 [i_0]))), ((max(1, 16))))) & var_13));
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (65517 || 65511))));
        arr_4 [i_0] = (--24);
        var_18 = (max(65511, (max(-16, ((min((arr_1 [i_0]), var_4)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [9] [9] = (min(8, 1));
        arr_8 [i_1] = var_6;
        arr_9 [i_1] = (((min((arr_0 [i_1]), (arr_6 [i_1]))) ^ var_11));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            arr_13 [i_2] [1] |= (((((arr_11 [i_2 + 1] [i_2 - 2]) ? var_2 : var_10))) * ((-2374813344984997272 / (1 * var_0))));
            arr_14 [i_1] [i_2] [0] = (min(((-(arr_12 [i_2 - 1]))), (((var_1 + 2147483647) >> (((arr_12 [i_2 + 1]) - 227))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = (max((max((~463949292), ((max(9424, 65512))))), 30813));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_25 [i_2] [i_2] [5] [i_4] [3] = var_15;
                            arr_26 [i_1] [5] [i_3] [5] [i_5] [i_5] = 463949292;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_19 *= var_15;
            arr_31 [6] [6] = (max(((-(arr_0 [i_6]))), ((((arr_20 [i_1] [i_6]) != 2770430478896368588)))));
            var_20 = (arr_22 [i_6] [i_6] [i_1]);
        }
    }
    var_21 *= var_14;
    var_22 = (max((var_11 >= var_1), -var_13));
    var_23 *= (113 ^ -20697);
    #pragma endscop
}
