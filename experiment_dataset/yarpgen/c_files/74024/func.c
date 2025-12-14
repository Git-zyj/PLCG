/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74024
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) arr_3 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) (~(arr_2 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) 8646911284551352320LL);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (var_7))))))) : (((((/* implicit */int) arr_6 [i_1])) - ((+(((/* implicit */int) var_13))))))));
        arr_8 [(unsigned short)20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) ? ((+(((/* implicit */int) arr_7 [i_1] [15ULL])))) : (((((/* implicit */_Bool) (unsigned short)57900)) ? (((/* implicit */int) min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))));
    }
}
