/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90357
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (6313590409291004364ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) - ((-(((/* implicit */int) (unsigned short)21))))))) : ((-(min((var_10), (((/* implicit */long long int) (signed char)63))))))));
        var_22 = ((/* implicit */unsigned long long int) max(((((_Bool)0) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)-71)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    var_23 ^= ((/* implicit */_Bool) (((((+(var_17))) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-71))))), (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
    /* LoopSeq 1 */
    for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 17206467540143951614ULL)) || ((((_Bool)1) && (((/* implicit */_Bool) arr_3 [i_1]))))));
    }
}
