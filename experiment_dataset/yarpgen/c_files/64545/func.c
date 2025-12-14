/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64545
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
    var_12 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) < (8244310221060336589ULL))) ? (var_3) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (1890921645492247783LL))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-20257), (((/* implicit */short) (_Bool)1)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (10891605335358750673ULL) : (138538465099776ULL)))) ? (((/* implicit */long long int) 23)) : (5390046994628118681LL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+(15)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_1 [i_0]) << (((var_9) - (3248509773851289298LL)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0 + 2] [i_0 + 3])), ((unsigned char)25)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (3426657330U)))) ? (((/* implicit */int) ((((/* implicit */int) (short)20811)) <= (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (-1079456750)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)31732)), (arr_6 [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_7 [i_1]) : (((/* implicit */int) (unsigned short)33803))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7555138738350800950ULL)))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) arr_7 [i_1])) : (arr_6 [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 3) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) 3426657316U)) ? (((((/* implicit */_Bool) -9164328437614857692LL)) ? (7555138738350800922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)24]))))) : (((/* implicit */unsigned long long int) (~(4294967295LL)))))))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_10 [i_1] [i_2 - 2] [i_2]);
            arr_12 [i_1] [i_2] [16U] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)31736));
        }
    }
}
