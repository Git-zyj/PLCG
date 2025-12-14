/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67727
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 7496870980979252500LL)) : (((unsigned long long int) 16U))))));
    var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (var_15))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_5))))), (((((((/* implicit */unsigned long long int) 13U)) != (11730068948314271579ULL))) ? (var_15) : (((/* implicit */unsigned int) -838419532))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (signed char)-125))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(4279894824849433634ULL))))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) -1784620599)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (min((arr_2 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    }
    for (int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_8 [(unsigned short)20] [i_1] = ((/* implicit */int) (unsigned short)34157);
        var_20 = ((/* implicit */int) 4294967283U);
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((var_0) | (var_0))))))));
        var_21 ^= ((/* implicit */unsigned int) arr_7 [i_1]);
        var_22 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) (unsigned char)5)), (arr_6 [i_1 - 1]))))), (((/* implicit */unsigned long long int) (unsigned short)64477))));
    }
    for (int i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 13U)) ? (arr_11 [i_2 + 1]) : (arr_11 [i_2 - 1]))) == (((arr_11 [i_2 - 1]) ^ (arr_11 [i_2 + 1])))));
        var_23 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (short)0)) / (101630450))));
        arr_14 [i_2 + 1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)251));
    }
}
