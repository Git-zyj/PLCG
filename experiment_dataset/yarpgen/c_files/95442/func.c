/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95442
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)77)))) == (((/* implicit */int) var_10))))) % (((/* implicit */int) (unsigned char)80))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_6))));
    var_21 = ((/* implicit */unsigned short) ((((unsigned long long int) (~(((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (var_3) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-66)) || (((/* implicit */_Bool) 12ULL)))))) : (var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((arr_1 [i_0]) >> (((arr_1 [i_0]) - (3776596133U)))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) >> ((((~(arr_0 [i_0]))) + (4217419865310653312LL))))))));
    }
}
