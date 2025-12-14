/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82725
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 3ULL))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3766)))));
                                arr_14 [i_0] [17U] [i_2] [i_3] [i_0] = ((/* implicit */short) -2785081172048501952LL);
                                arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_13);
                                arr_16 [i_0] [(signed char)10] [i_0] [i_3] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (8388608))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8ULL)) || (((/* implicit */_Bool) (signed char)127)))))) : (((var_8) ? (min((15962544755066286159ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (6ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_5] [(_Bool)1] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2404279066U)))));
                            arr_24 [i_0] = ((/* implicit */short) -456582473);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            arr_37 [i_10] [i_9] [(_Bool)1] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) + (min((arr_6 [i_7 - 1] [i_7 - 1] [i_7 - 1] [(_Bool)1]), (var_10)))));
                            arr_38 [i_7] [i_8] [i_9] = ((/* implicit */_Bool) arr_19 [(short)10] [(short)10]);
                            arr_39 [i_7] [i_8] [i_9] [(unsigned short)14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)5)) ? (((((/* implicit */_Bool) 2537086700989483861ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((_Bool) 6ULL))))) - (-195660286)));
                            arr_40 [i_7] [3] [i_9] [i_9] [i_10] = ((/* implicit */short) ((((1ULL) ^ (arr_29 [i_7 + 2] [i_7 - 1] [i_8 + 1]))) << (((/* implicit */int) arr_30 [i_8 - 1] [i_7 + 2]))));
                            arr_41 [7] [(unsigned short)4] [(unsigned short)4] [7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]))))) ? (((/* implicit */int) ((arr_36 [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_8 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_9 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_8 + 1])) - (9598)))))));
                        }
                    } 
                } 
                arr_42 [i_7 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_3 [18ULL] [i_8 - 1]) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -128958626)) || (((/* implicit */_Bool) 15962544755066286162ULL)))))))) ? (min((((((/* implicit */int) (unsigned short)19893)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (unsigned short)28932))))) : ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
