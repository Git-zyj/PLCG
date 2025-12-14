/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77297
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
    var_14 = ((/* implicit */unsigned char) ((var_8) / (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = (((((-(((/* implicit */int) arr_0 [i_0 + 1])))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (4U))) - (1U))));
        arr_4 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)233))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(((((/* implicit */int) arr_7 [i_1])) >> (((2936163490218829348ULL) - (2936163490218829333ULL))))))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (unsigned char)31)))), (((((/* implicit */_Bool) arr_7 [1U])) || (((/* implicit */_Bool) var_5))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (short)10078)) << (((((/* implicit */int) (unsigned short)4472)) - (4472)))))) != (arr_6 [i_2])))))));
    }
    var_18 = ((/* implicit */short) var_5);
    var_19 = ((/* implicit */int) ((short) var_2));
    var_20 = ((/* implicit */long long int) var_0);
}
