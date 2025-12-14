/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76584
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) var_1)), ((short)32749)))), (min((((/* implicit */long long int) arr_1 [i_0])), (var_9)))))) | ((-(var_13)))));
        arr_2 [(unsigned short)9] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */int) (short)25264)))))) % (((var_15) & (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (short)32767)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))));
        arr_4 [9ULL] [(signed char)3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) + ((+(((/* implicit */int) var_1))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)9528))));
        arr_9 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (arr_6 [i_1])))));
        arr_10 [i_1] = ((/* implicit */unsigned int) var_1);
        arr_11 [i_1] = ((/* implicit */_Bool) var_16);
    }
    var_19 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_7)) % (var_14))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_8))))))))));
}
