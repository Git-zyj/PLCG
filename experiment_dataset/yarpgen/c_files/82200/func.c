/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82200
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 -= ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 -= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_14 -= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1]);
                        arr_11 [i_1] [i_1] [i_3] = arr_7 [i_1] [i_1] [i_2 + 1] [i_3];
                        arr_12 [i_1] [i_2 + 1] [i_3] = ((/* implicit */signed char) arr_0 [i_0] [i_2]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 24; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                arr_26 [i_4] [i_8] [i_4] [i_7] [i_4] = ((/* implicit */signed char) arr_23 [i_4] [i_4] [i_4] [i_8]);
                                arr_27 [i_4] [i_5] [i_6] [i_8] [i_4] [i_8] [i_8] = ((/* implicit */signed char) arr_19 [i_5] [i_5] [i_7] [i_8]);
                                arr_28 [i_4] [i_5] [i_6] [i_8] [i_7] [i_8] = arr_16 [i_6];
                                arr_29 [i_4] [i_5] [i_5] [i_5] [i_8] [i_8] = arr_18 [i_4] [i_5] [i_7] [i_7];
                                var_15 = arr_16 [i_8];
                            }
                        } 
                    } 
                    arr_30 [i_6] [i_4] [i_4] = ((/* implicit */short) arr_21 [i_5]);
                }
            } 
        } 
        var_16 = arr_20 [i_4] [i_4] [i_4];
    }
    var_17 = var_1;
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        arr_34 [i_9] = ((/* implicit */short) arr_5 [i_9] [i_9] [i_9]);
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (arr_24 [i_9] [i_10] [i_10] [i_11])));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_20 [i_9] [i_9] [i_9]))));
                    arr_40 [i_11] [i_9] [i_9] [i_9] = ((/* implicit */short) arr_36 [i_11]);
                    arr_41 [i_9] = arr_2 [i_11];
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_22 [i_9] [i_10] [i_11] [i_11] [i_9] [i_11]))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) arr_5 [i_9] [i_9] [i_9]);
    }
    for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (arr_16 [i_12])));
        arr_46 [i_12] = arr_32 [(short)10];
        arr_47 [i_12] [i_12] = ((/* implicit */signed char) arr_14 [i_12]);
        var_23 -= ((/* implicit */signed char) arr_9 [i_12] [i_12] [i_12] [(short)8] [i_12] [(short)8]);
    }
    var_24 = ((/* implicit */short) var_9);
}
