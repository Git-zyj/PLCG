/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62826
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
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) var_13));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) ((((1479414975U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49477))))) && (((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_0)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [9])) + (2147483647))) << (((85704255) - (85704255)))))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10246)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (short)24679)) >= (((/* implicit */int) (_Bool)1))))))) : (((int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (short)-29415)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)13))))));
    }
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_15))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 85704255))))), (var_1)))));
}
