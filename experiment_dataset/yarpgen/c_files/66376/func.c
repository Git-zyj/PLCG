/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66376
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (max((((/* implicit */unsigned long long int) -1125228301)), (var_11)))))))));
    var_17 = var_5;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_4)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2274847105U)) ? (((/* implicit */int) (unsigned short)57527)) : (-1125228301)))) ? (((/* implicit */long long int) 1125228275)) : (((arr_0 [(short)8]) ? (7485851040566710588LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_20 = ((/* implicit */long long int) arr_1 [i_0]);
    }
}
