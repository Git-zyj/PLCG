/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82654
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) var_13)), (var_9)))) & (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */short) (~((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [(unsigned char)11]) ? (((int) (unsigned char)70)) : (((/* implicit */int) ((unsigned short) arr_1 [4])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)46006)) <= (var_10)))))))));
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(6ULL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (6ULL))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((18446744073709551610ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
}
