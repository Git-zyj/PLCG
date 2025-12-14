/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79739
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_20 ^= (_Bool)1;
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 1498719161U))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                arr_10 [i_2] [i_1 + 1] [i_2] = ((/* implicit */signed char) arr_3 [i_1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */unsigned long long int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2])) : (arr_1 [i_0])));
                    arr_14 [i_2] [i_2] [i_1 + 1] [i_2] = ((/* implicit */long long int) arr_1 [i_2]);
                    arr_15 [i_3] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) 1993789611391734123ULL);
                    var_22 += ((/* implicit */unsigned char) arr_5 [i_0]);
                }
            }
        }
        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            arr_19 [i_4] [i_0 - 2] [i_4] = ((/* implicit */signed char) arr_16 [i_0]);
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_23 |= ((/* implicit */short) arr_25 [i_6] [i_6] [i_5] [i_6]);
                            arr_29 [i_4] [i_6] [i_5] [i_5] [i_4 + 1] [i_4] = ((/* implicit */unsigned int) arr_17 [i_0]);
                            var_24 *= ((/* implicit */unsigned char) (unsigned short)1389);
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_8 [i_5 - 4] [i_5] [i_7] [i_7 + 1]);
                        }
                    } 
                } 
            } 
        }
        arr_31 [i_0 + 1] [i_0 - 2] &= ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [18ULL]);
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0 - 3] [i_0 + 2]))));
    }
    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_33 [4ULL] [i_8]))));
        var_27 = ((/* implicit */_Bool) min((var_27), ((!((!(arr_32 [i_8 - 1])))))));
        var_28 ^= 1498719161U;
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) 
    {
        arr_36 [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [(unsigned char)22] [i_9 - 1]))));
        arr_37 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_9 - 1])) ? (arr_1 [i_9 + 1]) : (arr_1 [i_9 + 1])));
    }
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        for (long long int i_11 = 2; i_11 < 14; i_11 += 3) 
        {
            {
                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-15)) ? (1993789611391734123ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))));
                arr_44 [i_11] [i_11] = ((/* implicit */unsigned short) arr_27 [i_10]);
            }
        } 
    } 
    var_30 = -1067669607;
}
