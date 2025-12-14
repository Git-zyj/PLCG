/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84932
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_3 [21ULL] = ((/* implicit */unsigned int) var_10);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max(((!(arr_2 [i_0]))), (((7350237249081716701LL) == (((((/* implicit */_Bool) (short)-29308)) ? (7350237249081716701LL) : (var_13))))))))));
    }
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (short)26353);
        var_17 = ((/* implicit */short) (~(var_6)));
        arr_7 [(signed char)8] = ((((/* implicit */int) (short)9418)) / (((/* implicit */int) (short)26330)));
    }
    for (int i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        arr_12 [(unsigned char)8] [i_2] &= ((/* implicit */unsigned char) 3265263023778621110ULL);
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((33554431LL) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 4] [8ULL])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2 + 4] [i_2]))))) : (min((((/* implicit */long long int) arr_4 [i_2 + 4] [i_2])), (-1702425723812966139LL)))));
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14148)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26365))) : (min((-42119464088510516LL), (((/* implicit */long long int) 1980507455U))))));
        arr_14 [i_2] [(unsigned short)1] &= ((/* implicit */short) var_2);
    }
    var_19 = ((/* implicit */int) -2831828497952267530LL);
}
