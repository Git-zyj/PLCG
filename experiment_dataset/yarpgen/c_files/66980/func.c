/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66980
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
    var_12 ^= var_1;
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)224)), (2147483647))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) var_6);
        var_15 = ((/* implicit */unsigned char) var_9);
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((var_10) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) == (((/* implicit */int) var_5)))))));
        arr_4 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_11)) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))) : (var_7)))));
    }
}
