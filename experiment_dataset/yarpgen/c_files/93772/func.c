/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93772
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((unsigned char) arr_1 [i_0])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (arr_1 [i_0]))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))) : (max(((~(3776831187913702509ULL))), (max((((/* implicit */unsigned long long int) -1735517121)), (14669912885795849107ULL)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_13)))))));
        var_20 += ((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1]))));
    }
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_2)))), (((int) var_16))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), (((14669912885795849114ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91)))))))));
}
