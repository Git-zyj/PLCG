/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70254
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26108)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)174))))), ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (var_11)))));
        var_14 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_1)))) ? ((~(((/* implicit */int) (unsigned char)100)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(arr_0 [i_0]))))));
    }
    var_16 ^= (((+((-(15264306962827941685ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    var_17 -= ((/* implicit */long long int) var_4);
    var_18 = ((/* implicit */int) var_7);
    var_19 = ((/* implicit */unsigned char) (~(((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) + (2147483647))) >> (((((/* implicit */int) (signed char)78)) - (74)))))));
}
