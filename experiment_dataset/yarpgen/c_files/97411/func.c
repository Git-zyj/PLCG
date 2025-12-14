/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97411
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
    var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31559)) % (((/* implicit */int) (unsigned short)30720))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)114)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)227))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (arr_1 [i_0]))))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))) ^ (9007199254740991ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)28)) >= (((/* implicit */int) (unsigned char)228)))))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned short)37258)) : (((((/* implicit */_Bool) 1965332824083987945ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)198))))))) ? (((/* implicit */int) (unsigned char)34)) : (((((/* implicit */int) arr_1 [i_0])) ^ (((((/* implicit */_Bool) -5427886168658113488LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0))))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
    }
    var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
}
