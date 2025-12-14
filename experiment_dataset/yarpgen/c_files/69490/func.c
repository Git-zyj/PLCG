/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69490
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
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) var_13)))), (var_10)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((0ULL) == (((536870911ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26563)))))));
        var_17 ^= ((/* implicit */unsigned int) ((((arr_2 [i_0 - 3]) == (((/* implicit */unsigned long long int) 3475496452U)))) && (((/* implicit */_Bool) var_10))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) (unsigned short)33137))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33137))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) <= (2872820470U)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (11225930022774640163ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))))));
        var_18 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (unsigned short)33137)), (arr_1 [i_0 - 2]))) * (max((arr_1 [i_0 - 2]), (((/* implicit */unsigned int) (unsigned short)4676))))));
    }
}
