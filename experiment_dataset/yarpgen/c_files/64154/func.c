/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64154
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)127))))))) | (min(((+(8398852451120056291LL))), (((/* implicit */long long int) (((_Bool)1) ? (1675653219U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = var_7;
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 9759552483366731992ULL)) && (((/* implicit */_Bool) 8687191590342819638ULL)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (2157916005U)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)63)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-68), ((signed char)-114))))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [(signed char)7]), (((/* implicit */signed char) arr_1 [i_0]))))) << (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
    }
}
