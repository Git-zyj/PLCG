/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75601
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
    var_13 = ((/* implicit */long long int) max((var_13), (var_5)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0] [i_0]));
        var_15 = ((/* implicit */signed char) var_12);
        arr_2 [(unsigned char)10] = ((/* implicit */unsigned short) var_6);
        var_16 = ((/* implicit */unsigned short) ((long long int) 7904410531801721554LL));
    }
    for (short i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((var_8), (var_8)))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min(((~(var_5))), (((/* implicit */long long int) var_1)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
        arr_8 [i_2] = ((/* implicit */signed char) ((arr_6 [i_2 + 1]) | (((/* implicit */long long int) ((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_6))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_2]))))) ^ (arr_5 [i_2])));
    }
}
