/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90734
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
    var_16 ^= ((/* implicit */unsigned int) (_Bool)1);
    var_17 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) (short)-31137))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-52)) : (-1215429392)))))), (((/* implicit */unsigned int) 536866816))));
    var_18 = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_3)) ? (var_13) : (var_10))), (var_8)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_1 [i_0 + 2] [i_0 - 4]))));
        var_20 = ((/* implicit */_Bool) min((arr_1 [i_0] [i_0 - 2]), (((arr_1 [i_0 + 2] [i_0 - 3]) & (arr_1 [i_0 + 2] [i_0 + 3])))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1])))) && (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (min((((/* implicit */int) (unsigned char)39)), (0))))))));
        arr_5 [12LL] [12LL] = ((/* implicit */unsigned char) (_Bool)1);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 4830713298571747059ULL))));
    }
}
