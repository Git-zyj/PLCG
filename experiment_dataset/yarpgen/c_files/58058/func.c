/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58058
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (unsigned short)34485);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_7))))), (((var_1) << (((((/* implicit */int) (signed char)112)) - (105))))))) : (((/* implicit */unsigned long long int) var_9))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(0ULL)))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 2])))))));
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0] [i_0 + 2])))), ((+(9535510089061746432ULL)))));
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_7) / (((/* implicit */int) (unsigned short)34481))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (554153860399104LL)))))) ? (((/* implicit */unsigned int) ((int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) : (max((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) var_11)), (var_2))))))))));
}
