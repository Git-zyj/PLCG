/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8681
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
    var_20 = ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) : (var_11)))), (((var_18) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) (unsigned short)12182)) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59891))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_21 = (((((-(arr_0 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2184669828478638533ULL)) && (((/* implicit */_Bool) (unsigned short)0)))))))) - (arr_2 [i_0]));
        var_22 = ((/* implicit */int) (+((~(((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)12])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_23 -= min((min(((~(var_0))), (((/* implicit */unsigned long long int) (unsigned short)53353)))), (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) << (((((/* implicit */int) (unsigned short)45901)) - (45901)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)31526)), (var_10)))) + (((((/* implicit */unsigned long long int) 1074324172U)) | (var_19)))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) max(((+(((((/* implicit */int) (unsigned short)59879)) - (((/* implicit */int) (unsigned short)64700)))))), (max(((+(arr_4 [i_1] [i_1]))), (((((/* implicit */int) (unsigned short)53351)) / (2104095910)))))));
    }
}
