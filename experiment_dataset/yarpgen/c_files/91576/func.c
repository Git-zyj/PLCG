/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91576
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
    var_13 = ((/* implicit */unsigned long long int) (~((+((+(1040384U)))))));
    var_14 = ((/* implicit */unsigned char) (signed char)66);
    var_15 ^= ((/* implicit */unsigned int) 11113717801281287573ULL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) (((+(var_2))) * (min((((/* implicit */unsigned long long int) var_9)), (var_12)))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */unsigned long long int) -851281286)) * (8721354906267026892ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (((+(arr_0 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [6])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) 72057594004373504LL);
        var_17 = ((long long int) (signed char)127);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [(unsigned short)16] &= (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)16] [i_2]))) / (var_0)))))));
        var_18 = ((/* implicit */_Bool) (+(4611686009837453312LL)));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])) + (max((((/* implicit */unsigned long long int) arr_10 [8ULL] [8ULL])), (arr_8 [6ULL])))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) min((var_10), (var_10)))), (((((/* implicit */unsigned long long int) arr_0 [i_2])) ^ (6462309975951288439ULL)))))))));
    }
}
