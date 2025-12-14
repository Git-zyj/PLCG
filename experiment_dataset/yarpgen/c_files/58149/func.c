/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58149
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
    var_18 = ((/* implicit */unsigned int) min((max((6010728531087950820ULL), (6010728531087950822ULL))), (var_14)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_16))))));
        var_20 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [(_Bool)0])) : (((/* implicit */int) arr_0 [i_0]))))), ((-(((((/* implicit */_Bool) 12436015542621600796ULL)) ? (var_0) : (4294967295U)))))));
        arr_2 [(_Bool)1] [(_Bool)0] = ((/* implicit */_Bool) (+(((min(((_Bool)1), (arr_1 [10ULL] [11ULL]))) ? (((((/* implicit */_Bool) 13082441941656550430ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_5 [3U] = ((/* implicit */_Bool) ((unsigned long long int) (~(arr_4 [i_1]))));
        var_21 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min((arr_1 [2U] [10U]), (arr_1 [15U] [4ULL]))))));
    }
}
