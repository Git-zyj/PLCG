/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9578
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-512))) == (1901892971U)));
        var_18 = ((/* implicit */short) max((((unsigned short) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_2 [i_0]))))), (arr_1 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_19 ^= ((/* implicit */long long int) arr_3 [(short)11] [(short)6]);
        var_20 *= ((/* implicit */unsigned int) arr_3 [i_1 + 4] [i_1]);
        var_21 = ((/* implicit */unsigned short) max((arr_3 [i_1] [i_1 + 4]), (min((((/* implicit */short) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_4 [i_1]))))), (min((((/* implicit */short) arr_4 [i_1])), (arr_3 [i_1] [i_1])))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)1] [(unsigned char)9])) ? (((/* implicit */int) arr_4 [11LL])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) && (min((arr_4 [i_1 + 2]), (arr_4 [i_1]))))))) | (((((/* implicit */_Bool) 0ULL)) ? (3475680133042510404ULL) : (3475680133042510404ULL)))));
        var_23 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
    }
    var_24 = ((/* implicit */signed char) max((1920714121U), (((/* implicit */unsigned int) (unsigned char)160))));
}
