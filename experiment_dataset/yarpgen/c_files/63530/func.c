/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63530
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 += ((/* implicit */_Bool) arr_0 [(unsigned short)22]);
        arr_2 [(short)14] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))))) < (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_0 [(_Bool)0])))) ^ (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [(unsigned char)18]))))))));
        var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [16ULL]), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (~(8)))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)-13523)))))))));
        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_0 [i_0]) < (arr_0 [i_0]))))));
    }
    var_17 ^= ((/* implicit */short) var_5);
    var_18 &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)164)) + (((/* implicit */int) (unsigned short)48))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_9)), (var_6))))));
}
