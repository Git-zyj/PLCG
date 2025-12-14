/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55603
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
    var_10 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) -303158236)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) (short)-7704)), (-303158236)))) + (2976681971115187161LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))), (((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (1323))) - (31)))))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(short)12]))))), (var_0)))));
        arr_4 [i_0] = ((/* implicit */int) (!(var_3)));
        var_13 = ((/* implicit */short) min((((((/* implicit */int) arr_0 [(unsigned char)2])) % (((((/* implicit */_Bool) -2976681971115187162LL)) ? (303158243) : (((/* implicit */int) var_6)))))), (((/* implicit */int) arr_1 [i_0]))));
    }
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)7710)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-43)))) : (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
}
