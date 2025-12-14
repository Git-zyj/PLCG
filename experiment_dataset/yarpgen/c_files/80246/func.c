/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80246
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) -2143901055)) : (20U)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) | (((/* implicit */int) (signed char)-109))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)67)) * (((/* implicit */int) arr_7 [i_1])))), (((/* implicit */int) ((arr_2 [i_0]) >= (1562063438U)))))))));
                    arr_8 [i_0] [i_1] [0U] = ((((((((/* implicit */unsigned int) 2027786852)) + (arr_2 [i_0]))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) % (arr_6 [i_1] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_6 [(short)11] [i_0])) < (-9223372036854775805LL))))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-12551)), (arr_4 [i_0] [i_1] [i_1]))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((arr_2 [i_0 - 2]), (arr_2 [i_0 + 2])))) - (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (16698968229663561053ULL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((var_5) / (((/* implicit */int) var_9))))) / (((1562063438U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))))) : (((/* implicit */unsigned int) (-(min((var_2), (((/* implicit */int) (short)-20272)))))))));
}
