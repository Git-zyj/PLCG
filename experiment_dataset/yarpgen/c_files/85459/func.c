/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85459
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_0))));
    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)32755))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), ((_Bool)0))))) : (max((((/* implicit */long long int) (_Bool)1)), (-5674159742387714360LL)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) & ((~(((/* implicit */int) (signed char)-74))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))))));
        var_23 ^= arr_0 [i_0];
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((7599504460377703643LL) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_11)))))))), (7867004864508054894ULL)));
        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (_Bool)0)))))));
    }
    for (short i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_26 = ((/* implicit */signed char) var_11);
        var_27 = ((/* implicit */_Bool) min(((((-(10579739209201496722ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (+(min((var_2), (((/* implicit */long long int) (unsigned short)4)))))))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2]))) : (arr_4 [i_1 + 1] [i_1 - 2]))))))));
        var_29 = ((/* implicit */unsigned long long int) max((-7599504460377703644LL), (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_11))))) : (arr_4 [i_1] [10LL])))));
    }
    var_30 = ((/* implicit */unsigned int) var_13);
}
