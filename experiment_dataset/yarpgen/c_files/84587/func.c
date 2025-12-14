/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84587
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
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) -971188213));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_11))), (((int) arr_1 [i_0]))));
        arr_2 [9ULL] [i_0] = ((/* implicit */signed char) ((short) arr_1 [i_0]));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) ^ (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (2147483647)))) ? (((((/* implicit */int) arr_0 [(signed char)7] [(signed char)7])) & (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((signed char) (short)(-32767 - 1))))))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (short)32754))))) : (min((var_9), (((/* implicit */unsigned long long int) var_15))))))));
    }
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 971188212)) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_2)))))) + (1939639056424236368LL)));
}
