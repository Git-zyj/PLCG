/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72089
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
    var_12 -= ((/* implicit */int) ((unsigned char) (_Bool)1));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((min((((unsigned long long int) (signed char)112)), (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1]), (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31013))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) (short)31002))));
        var_14 = ((/* implicit */_Bool) arr_1 [3U] [i_0]);
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (989930282746304460ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) min((3754550254U), (((/* implicit */unsigned int) var_0)))))))) ? (7881890064624537563ULL) : (((/* implicit */unsigned long long int) var_3))));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), (var_10)));
}
