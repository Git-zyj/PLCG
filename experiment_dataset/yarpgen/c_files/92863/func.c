/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92863
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
    var_14 = ((/* implicit */long long int) 3858889231U);
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 194572339U)) : (var_5))))));
    var_16 = ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (var_5))))) : (var_5));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((3858889231U), (((/* implicit */unsigned int) arr_0 [i_0]))))))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) 4294967295U))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (14594282396776579592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((arr_2 [(_Bool)1]), (arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */int) max((var_13), (((/* implicit */unsigned int) (unsigned short)24683))));
        arr_5 [i_0] = ((/* implicit */signed char) (-(max((4421067729518303553LL), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
    }
    var_18 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (max((max((((/* implicit */unsigned long long int) var_0)), (var_2))), (((/* implicit */unsigned long long int) -4421067729518303554LL))))));
}
