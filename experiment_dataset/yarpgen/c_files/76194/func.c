/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76194
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_2)) : (arr_0 [i_0] [i_1]))), (arr_0 [i_0] [(signed char)9])))), (((arr_5 [i_0] [i_0] [i_0]) >> (((var_2) + (797286160)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) arr_8 [(signed char)11] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                            arr_11 [i_3] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)-43))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-36))))) ? (((/* implicit */long long int) ((int) (signed char)42))) : (arr_0 [i_0] [i_1])))));
                            var_15 += ((/* implicit */unsigned short) ((((var_2) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((((((/* implicit */int) (signed char)-25)) + (2147483647))) << (((((((/* implicit */int) (signed char)-109)) + (136))) - (27))))))) - (123)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) max((var_6), (var_0)));
}
