/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = min((var_12 & var_4), ((var_9 ? ((1081524465 ? 1 : 1081524473)) : (((var_1 << (var_4 - 31119)))))));
    var_15 = ((min(var_10, (var_9 & var_5))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [19]);

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_16 = 1081524465;
            var_17 -= (arr_4 [i_0] [14] [i_0]);
            arr_6 [i_0] [i_0] [i_0] = (~65535);
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] = (((max(1148, (((arr_7 [i_2] [1] [i_5]) / -268894622)))) == (var_4 ^ -var_9)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [5] [1] = ((-(((arr_0 [i_2 - 1] [i_2 + 1]) / 1))));
                            arr_19 [i_5] [i_4] [i_4] [i_4] [i_5] [13] = (((192659863 <= 11417) ^ (~11417)));
                            var_18 = 1081524484;
                        }
                    }
                }
            }
            arr_20 [i_0] = (arr_0 [16] [i_0]);
            var_19 *= ((+(min(((min((arr_9 [i_0] [18] [i_0]), 9820))), (arr_1 [i_0])))));
            var_20 *= var_5;
        }
        var_21 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_21 [i_0] [i_0] = ((((-1911986144 ? 0 : 2637262151))) ? ((-(var_3 < 119))) : (arr_5 [i_0]));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_22 = ((+(((arr_3 [i_6 + 3]) & (arr_3 [i_6 + 1])))));
        var_23 = (max(var_23, ((min((arr_12 [i_6 + 2] [i_6 + 2]), (arr_12 [i_6 - 1] [i_6 - 1]))))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_24 ^= (((min(1681810352, 11426)) != (arr_14 [i_7] [i_7] [i_7 - 1] [i_7] [14])));
        var_25 = ((~(((arr_5 [i_7 - 1]) - (arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_26 = (arr_16 [20] [14] [i_8]);
        var_27 = arr_1 [i_8];
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_28 = (arr_22 [i_9]);
                    arr_36 [i_10] [i_9] [i_9] = (arr_24 [i_8]);
                    var_29 = (max(5, ((-(max(var_9, (arr_15 [17] [i_10] [i_9] [i_8] [i_8])))))));
                    var_30 |= (arr_1 [i_8]);
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        arr_39 [i_11] = (((((arr_16 [i_11] [i_11 + 1] [19]) ? (arr_16 [i_11] [i_11 + 1] [3]) : (arr_16 [i_11 + 1] [i_11 + 1] [i_11])))) ? (var_2 < 1) : (((arr_16 [18] [i_11 + 1] [i_11]) ? var_10 : (arr_16 [i_11] [i_11 + 1] [i_11]))));
        arr_40 [i_11] = 72;
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_31 = 2456845857;
        arr_44 [2] = var_11;
    }
    #pragma endscop
}
