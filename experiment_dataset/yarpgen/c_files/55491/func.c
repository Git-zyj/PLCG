/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55491
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
    var_11 = max((1531346481U), (var_6));
    var_12 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_9)));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (1531346453U)))))) ? (min((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 15ULL)) ? (917798163U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_2));
        arr_5 [i_0] = ((/* implicit */int) (signed char)104);
        var_14 -= ((/* implicit */unsigned int) -1LL);
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_1 [10LL] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [(short)12])) ? (arr_1 [2U] [2U]) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [2ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0]))) : (var_6)))))))));
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)41877)), (var_7)))) ? (((/* implicit */long long int) 1531346452U)) : (((((/* implicit */_Bool) (signed char)42)) ? (arr_1 [(unsigned char)8] [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26827)))))))) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (max((((((/* implicit */_Bool) arr_1 [8ULL] [8ULL])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (var_10))), (((/* implicit */unsigned int) (signed char)-74))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (576459652791795712LL) : (-576459652791795711LL)))) ? (((((/* implicit */_Bool) (unsigned short)10956)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)130))))), ((+(var_6)))));
}
