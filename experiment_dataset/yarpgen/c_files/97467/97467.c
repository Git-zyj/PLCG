/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 *= 205;
    }
    var_16 &= var_12;

    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_17 += var_12;
        arr_4 [i_1] = ((var_1 ? 1683310217345882853 : (205 || 64049)));
        var_18 = (max(var_18, (arr_3 [i_1 + 1] [1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [8] [11] [i_2] = ((((var_1 | (arr_0 [i_5 - 1]))) | ((min(var_2, 32768)))));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_18 [11] [i_3] [i_3] [i_5 - 1] [13] [i_5 - 1] = (((((min(var_1, (arr_13 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))) <= (((!32768) ? (~var_4) : ((var_9 ? (arr_7 [i_6] [i_6]) : (arr_16 [14] [i_2] [10] [14] [i_5] [i_6])))))));
                            arr_19 [i_2] [i_2] [i_3] [1] [i_4] [i_4] [i_6] = var_4;
                        }
                        var_19 &= ((32768 ? (var_12 < 30720) : (((arr_9 [i_4] [i_4]) ? var_10 : 1))));
                    }
                }
            }
        }
        arr_20 [i_2] = ((((((arr_9 [i_2] [i_2]) / var_5))) / ((32776 ? 48 : 50))));
    }
    var_20 += var_2;
    var_21 |= ((+(((var_3 * 216) / var_7))));
    #pragma endscop
}
