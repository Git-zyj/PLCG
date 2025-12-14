/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90042
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */short) 11544543436416592965ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */signed char) var_13);
                                arr_13 [i_3] [i_3] [i_4] = arr_11 [i_0] [i_1 - 1] [i_3] [6U] [i_3] [i_0] [i_1];
                                var_18 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_20 [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_0] [i_5 - 1] [i_6])), (max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1152258778)))))) : (((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5 + 1] [i_5])) ? ((+(12165038369204303195ULL))) : (((/* implicit */unsigned long long int) ((int) var_7)))))));
                                arr_21 [i_0] [i_1] [i_5] [i_5] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) ^ (((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1] [i_1 + 4])) ? (((var_12) & (((/* implicit */int) arr_3 [i_0] [i_1 + 4] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) == (((/* implicit */int) arr_3 [i_1] [i_2] [i_6])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 2; i_9 < 17; i_9 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [i_9])), (arr_22 [i_9])))), (arr_30 [i_9 + 1] [i_9 - 1] [i_9 - 2])))) ? (((int) ((unsigned char) arr_22 [i_9]))) : (((/* implicit */int) ((signed char) arr_29 [i_9 - 2] [i_9 + 2] [i_9 + 2] [i_9 + 1])))));
                    var_20 ^= ((/* implicit */unsigned char) (~(((var_10) ? (arr_29 [i_9 - 2] [i_8] [i_9 + 1] [i_9]) : (arr_27 [i_9 - 1] [i_8] [i_9])))));
                    var_21 = max((((/* implicit */unsigned long long int) (+(arr_30 [i_7] [i_8] [i_9 + 2])))), (((unsigned long long int) arr_30 [i_7] [i_8] [i_9 - 1])));
                    arr_31 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) min((((unsigned int) (signed char)-19)), (((/* implicit */unsigned int) ((arr_24 [i_7] [i_9 - 1] [i_7]) - (arr_24 [i_9 - 2] [i_9 + 1] [i_8]))))));
                    arr_32 [i_7] [i_8] = ((/* implicit */unsigned int) (((-(arr_24 [i_9 + 2] [i_9 + 2] [i_9 + 1]))) / (max((((67106816) + (-1880443358))), (arr_25 [i_9 + 1] [i_9 - 1])))));
                }
            } 
        } 
    } 
    var_22 = max((12165038369204303195ULL), (((/* implicit */unsigned long long int) (unsigned char)219)));
}
