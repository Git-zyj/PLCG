/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70420
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
    var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (5627844359469843548LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : ((-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))))))));
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_4 [(unsigned char)12] [(signed char)14] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2784557092U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)8064))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_3 [i_0])))))) == (((((/* implicit */_Bool) 1510410204U)) ? (((/* implicit */unsigned long long int) 510071193638124300LL)) : (6348220204405814042ULL)))))))));
        arr_5 [i_0 - 3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    }
}
