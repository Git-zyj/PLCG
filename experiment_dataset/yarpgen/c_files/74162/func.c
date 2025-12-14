/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74162
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
    var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((var_6) << (((((/* implicit */int) (signed char)127)) - (103))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned long long int) (-(4294967293U)))), (max((var_6), (((/* implicit */unsigned long long int) (unsigned char)4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) (unsigned char)250)), (((/* implicit */unsigned short) ((_Bool) (unsigned char)5)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)43))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)43158)) : (((/* implicit */int) (signed char)123)))))))));
}
