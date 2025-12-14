/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69678
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
    var_13 *= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (71040562308427329ULL))))) ? (((arr_3 [i_0]) ? ((+(13844774977958593989ULL))) : (arr_2 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_5 [i_0] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (71040562308427325ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (arr_0 [i_0])));
        var_14 ^= ((/* implicit */long long int) (unsigned short)23908);
        var_15 = (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))));
    }
    var_16 |= ((/* implicit */long long int) min((max((((/* implicit */unsigned short) (signed char)59)), ((unsigned short)41627))), (((/* implicit */unsigned short) var_0))));
    var_17 = var_1;
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_0)), (var_4))))));
}
