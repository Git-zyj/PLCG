/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85140
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) | (((((/* implicit */int) (signed char)122)) >> (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (max((((/* implicit */int) (_Bool)0)), (-2121484947))))), (max((2121484947), (((/* implicit */int) var_8))))));
        var_20 &= ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)25))))), (((((/* implicit */_Bool) -2121484930)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_1 [i_0 + 1]))))))));
    }
    var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) 0U)) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 365735073)) : (6ULL)))))));
}
