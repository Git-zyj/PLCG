/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63738
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned short) var_2)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_20 *= ((/* implicit */signed char) arr_1 [i_0 - 1]);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))) ? (((/* implicit */int) min((var_6), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))))) : (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0 + 1])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 375618697))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2309132955267712777ULL))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2309132955267712803ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1]))) : (var_18)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
        var_25 = ((/* implicit */int) min((var_25), (max((((/* implicit */int) ((unsigned short) min((var_2), (((/* implicit */unsigned long long int) 894479870)))))), (var_15)))));
    }
    var_26 = ((/* implicit */unsigned char) (signed char)127);
    var_27 = ((/* implicit */unsigned int) var_1);
}
