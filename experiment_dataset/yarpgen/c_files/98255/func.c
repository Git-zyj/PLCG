/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98255
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_16))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_0))), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_5 [i_0] [i_0 - 2] [i_0]) : (((/* implicit */long long int) 3547470015U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))) : (((arr_0 [i_0]) * (((/* implicit */unsigned int) 520093696)))))))));
                var_18 = ((/* implicit */int) min((max((2950309448345052355LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (arr_0 [i_0])))))), (((/* implicit */long long int) -415490745))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)250))) ? (((arr_0 [i_1]) * (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))))));
                var_20 -= max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 - 3] [(short)10]))))), (max((arr_5 [i_0] [i_0 - 2] [2]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */signed char) (+(((/* implicit */int) (short)-2126))));
}
