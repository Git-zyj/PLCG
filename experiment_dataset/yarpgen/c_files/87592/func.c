/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87592
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
    var_20 = ((/* implicit */unsigned short) var_14);
    var_21 &= ((/* implicit */long long int) var_19);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_22 = ((/* implicit */long long int) (+(((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((((/* implicit */int) (unsigned short)29291)) - (29291)))))));
        var_23 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(var_1)))))));
        var_24 = ((/* implicit */signed char) min((((/* implicit */int) arr_2 [(short)5])), ((-(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
}
