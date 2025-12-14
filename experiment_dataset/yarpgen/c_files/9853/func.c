/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9853
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
    var_15 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) var_13)), ((~(3264170152141080205LL)))))));
        var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1])) * (((/* implicit */int) arr_3 [i_0 - 1]))))), (((((/* implicit */_Bool) 528634523142250011ULL)) ? (13291452259780215973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))));
        var_18 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) ((int) var_4))), ((~(arr_0 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1 - 2] [(short)1] = ((/* implicit */int) 528634523142250011ULL);
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22558)))))) : (((((/* implicit */unsigned long long int) var_12)) ^ (3626908330812966747ULL))))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (var_4)))), ((~(((/* implicit */int) (unsigned char)74)))))))));
    }
    var_20 ^= ((/* implicit */short) (-(((/* implicit */int) var_7))));
}
