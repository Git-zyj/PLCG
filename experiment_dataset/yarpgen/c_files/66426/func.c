/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66426
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_10 += ((/* implicit */long long int) (unsigned char)120);
                                var_11 -= ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 7416710844669431084ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0])) ? (8388544U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_5)) ? (11030033229040120531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((0LL) >> (((((/* implicit */int) (unsigned char)121)) - (110))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((arr_3 [i_5] [i_6]) >> (((/* implicit */int) ((arr_6 [i_6 - 2] [i_5] [i_5] [i_5]) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                var_14 = ((/* implicit */short) arr_5 [i_5] [i_5] [i_5] [i_5]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((((/* implicit */_Bool) 7416710844669431084ULL)) ? (1780308244) : (((/* implicit */int) var_8)))))))));
    var_16 = (-(1006632960U));
    var_17 = var_1;
}
