/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97196
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
    var_10 = ((/* implicit */_Bool) (+((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_3)))))));
    var_11 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)93)));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)32768)), (0ULL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)242)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) (short)-29164)) + (29164)))))) ? (((int) var_3)) : (((((/* implicit */int) var_9)) << (((var_5) - (17496343U)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (((((/* implicit */_Bool) var_2)) ? (var_6) : (var_5)))))))));
        var_14 = ((/* implicit */unsigned long long int) var_5);
    }
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_5))));
}
