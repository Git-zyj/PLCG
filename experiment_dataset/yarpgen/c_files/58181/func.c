/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58181
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
        var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
    }
    var_13 = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) (signed char)2)))) || (((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) (signed char)-69)) || (((/* implicit */_Bool) ((unsigned long long int) var_5)))))));
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (((min((((/* implicit */long long int) (unsigned short)65535)), (var_0))) % (((/* implicit */long long int) 2132343162))))));
    var_15 &= (signed char)-69;
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) min((var_7), (var_7)))) + (((/* implicit */int) min((((/* implicit */short) (unsigned char)30)), ((short)-8320))))))), (min((var_0), (var_8)))));
}
