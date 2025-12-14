/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8685
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
    var_16 = ((/* implicit */long long int) (short)32754);
    var_17 += min((((/* implicit */unsigned int) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) -6718241724683178881LL)))))))), (var_1));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_5)) ? (2147483647) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_15)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 15275043613111884493ULL)) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)83))))))) : (((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (7659751458129234916LL))) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0U) : (var_1)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (((2763554789662833344LL) >> (((/* implicit */int) (_Bool)1)))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((long long int) min((arr_0 [i_0]), (((/* implicit */int) var_5))))))))));
        var_20 = ((/* implicit */signed char) max((max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
        var_21 ^= ((/* implicit */unsigned long long int) arr_0 [i_1]);
    }
    var_22 = ((/* implicit */long long int) max((((/* implicit */short) var_4)), (max((((/* implicit */short) (unsigned char)134)), ((short)10673)))));
}
