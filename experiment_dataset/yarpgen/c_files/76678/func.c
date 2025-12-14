/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76678
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
    var_10 = ((/* implicit */int) min((var_2), (((/* implicit */long long int) ((((var_8) + (2147483647))) << (((((var_8) + (1701529599))) - (27))))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_6);
        var_12 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_13 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) - (arr_1 [i_0] [i_0 - 2])));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0 + 1] [i_0 + 1]) & (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_15 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((arr_4 [0]), (var_5)))) : (((/* implicit */int) min((var_1), (arr_4 [i_1]))))))), (((max((arr_0 [i_1]), (((/* implicit */unsigned int) var_8)))) | (arr_0 [i_1])))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_5 [i_1]))))))))));
        var_17 += ((/* implicit */signed char) arr_1 [i_1] [i_1]);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) arr_1 [i_1] [i_1]))));
    }
    var_19 = ((/* implicit */unsigned int) ((((long long int) max((((/* implicit */long long int) var_7)), (var_2)))) < (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_20 = ((/* implicit */short) var_0);
}
