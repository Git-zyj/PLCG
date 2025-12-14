/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92351
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 += ((/* implicit */int) arr_0 [5U]);
        arr_2 [i_0] = ((/* implicit */int) var_5);
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)158)), (var_3))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [22U] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)18] [(unsigned short)18]))))))) ? (((/* implicit */int) ((signed char) ((unsigned short) var_1)))) : (((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) & (((/* implicit */int) arr_1 [(signed char)8] [(signed char)8])))))))));
    }
    var_15 = ((/* implicit */int) (((_Bool)1) ? (max((max((((/* implicit */unsigned long long int) var_2)), (var_10))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-19))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) (unsigned char)236))), ((-(var_3))))))));
    var_16 = ((/* implicit */long long int) min((max((var_10), (((/* implicit */unsigned long long int) 973773073U)))), (var_12)));
}
