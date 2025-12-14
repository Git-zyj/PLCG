/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((2097151 ? 2147483647 : ((160 ? var_7 : var_8)))) * 27);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 &= ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) & (((!17034485863229891089) ? (min((arr_1 [10]), 1791959094)) : ((120 ? 44573 : 1113554683))))));
        var_16 = (min(var_16, (arr_0 [i_0] [i_0])));
        var_17 = (min(var_17, ((-((((((var_5 ? var_9 : var_11))) && var_1)))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_18 = (min(var_18, ((((arr_0 [i_1 + 1] [i_1 + 1]) + var_6)))));
        arr_5 [i_1] [i_1] = (arr_3 [i_1 - 1]);
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_19 ^= -1;
        var_20 = (min(var_20, (!44559)));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_21 &= (arr_10 [i_4] [i_4] [15]);
                    var_22 = (((arr_7 [i_3 - 2] [i_3 - 2]) ? (arr_7 [i_3 + 1] [i_3 - 1]) : (arr_7 [i_3 - 1] [i_3 - 2])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_23 [i_6] [i_6] = (arr_19 [i_3] [i_4] [i_5] [i_6] [i_5]);
                                var_23 = ((-(arr_10 [i_3 + 2] [i_4] [i_5])));
                                arr_24 [i_7] [i_6] [i_5] [i_4] [i_6] [i_3] = (((arr_9 [i_3 + 2]) == (arr_9 [i_3 - 1])));
                                var_24 &= (((arr_17 [i_3]) & (arr_17 [i_3])));
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] = (arr_6 [i_4]);
                }
                arr_26 [8] [18] = (arr_7 [i_3] [i_3]);
                arr_27 [i_3] [i_4] = 250;
                arr_28 [i_3] = var_13;
            }
        }
    }
    #pragma endscop
}
