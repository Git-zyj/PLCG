/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78619
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
    var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28819)) ^ (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9))))), (max((max((var_9), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (~(var_7))))))));
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)147)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65525))))))) && (((/* implicit */_Bool) 3219591490U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) min((min((var_4), (((/* implicit */signed char) var_5)))), (((/* implicit */signed char) max((var_8), ((_Bool)1))))))) <= (((/* implicit */int) (short)0))));
        var_13 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_3))))) && (((/* implicit */_Bool) (+(var_6))))))), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
        var_14 *= ((/* implicit */unsigned char) (((~(var_6))) << (((/* implicit */int) ((unsigned short) (_Bool)0)))));
    }
    var_15 *= ((/* implicit */unsigned int) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (min((((/* implicit */unsigned short) var_5)), (var_1)))))))));
}
