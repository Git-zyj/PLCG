/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99484
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((((-1LL) + (9223372036854775807LL))) << (((((((-71288800) < (-71288800))) ? (((/* implicit */unsigned long long int) (+(71288821)))) : (((((/* implicit */_Bool) (short)-25631)) ? (arr_3 [1LL] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8878))))))) - (16326851734354205638ULL)))))));
                                arr_15 [i_2] [(short)3] [(unsigned char)6] [(short)3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 135936234)) ? (2064384) : (((/* implicit */int) (signed char)-15))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_2 [4]))) | (arr_13 [i_4] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) max((var_16), ((-(max((arr_1 [i_1 - 2]), (-7119284823864920217LL)))))));
                    var_17 = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) 1073739776)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)49))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (arr_1 [i_0]))))) >> (((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))) & (min((-8730227037940611233LL), (arr_13 [i_0] [i_1]))))) + (8730227037940611256LL))));
                    var_18 = ((/* implicit */long long int) (signed char)-19);
                }
            } 
        } 
    } 
    var_19 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)-119)), ((short)-454))))))), (min((((((/* implicit */_Bool) -71288821)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_0))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-27))))))));
}
