/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56369
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
    var_20 = ((/* implicit */long long int) var_14);
    var_21 = ((/* implicit */unsigned int) var_17);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_23 = ((/* implicit */int) arr_2 [i_0] [5]);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_6 [18LL] [i_1] = ((/* implicit */unsigned char) arr_5 [19]);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_3] [i_2] [i_3] = ((/* implicit */signed char) arr_9 [i_1] [i_2] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) arr_11 [i_4] [21] [i_3] [i_4]);
                        var_25 ^= ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_2]);
                        var_26 = ((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_3]);
                    }
                    arr_15 [i_1] [i_3] = ((/* implicit */signed char) arr_4 [i_1]);
                    arr_16 [i_3] = ((/* implicit */signed char) arr_7 [i_1]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_1] [i_1] [(unsigned short)16] = ((/* implicit */signed char) arr_5 [i_1]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) arr_4 [i_7]);
                            var_29 += arr_18 [i_7] [i_5] [i_1];
                            var_30 |= ((/* implicit */long long int) arr_14 [i_8] [i_5] [i_8] [i_8]);
                            arr_28 [i_6] [i_6] [i_6] [4U] [i_8] = ((/* implicit */int) arr_17 [i_8] [i_6]);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */int) max((var_31), (arr_8 [i_9] [i_9] [i_9])));
        var_32 = ((/* implicit */_Bool) arr_5 [22LL]);
        var_33 += ((/* implicit */int) arr_14 [i_9] [i_9] [i_9] [i_9]);
        var_34 += ((/* implicit */long long int) arr_23 [i_9] [i_9] [16U]);
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) arr_10 [i_9] [i_9] [i_9]))));
    }
}
