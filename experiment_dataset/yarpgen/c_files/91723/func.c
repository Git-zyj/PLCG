/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91723
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
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = var_0;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned int) arr_3 [i_0]);
        arr_4 [i_0 + 2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_3] [i_4]);
                            var_17 = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1]);
                        }
                    } 
                } 
            } 
            var_18 &= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) arr_16 [i_5]);
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned int i_8 = 2; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_16 [i_5]))));
                        arr_29 [3ULL] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) arr_7 [i_5] [i_6] [i_6]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) arr_12 [i_5] [i_5]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                {
                    arr_37 [4ULL] [i_9] [i_10] = ((/* implicit */_Bool) arr_20 [i_9] [i_10]);
                    var_21 -= ((/* implicit */unsigned char) arr_25 [i_5]);
                }
            } 
        } 
        arr_38 [i_5] [i_5] = ((/* implicit */signed char) arr_11 [i_5] [i_5] [i_5]);
    }
}
