/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79333
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
    var_11 += ((short) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */short) ((((/* implicit */long long int) max((arr_1 [(short)16]), (((/* implicit */unsigned int) (unsigned char)145))))) & (max((((/* implicit */long long int) var_6)), (var_8)))));
        var_13 ^= ((/* implicit */unsigned short) (signed char)-5);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */int) ((arr_3 [i_1]) < (arr_3 [i_1])));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_3 [i_1]))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_4)) : (arr_4 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6999892275178240501LL)) ? (arr_4 [i_1]) : (arr_4 [i_1])))))))));
    }
}
