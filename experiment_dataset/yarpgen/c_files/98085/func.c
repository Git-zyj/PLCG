/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98085
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
        var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))));
        var_11 = ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) ^ (((/* implicit */int) (signed char)63))))));
        var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [12U])) || (((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_3))))));
    }
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */_Bool) (+(((var_8) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (signed char)49))))))));
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-2154491221587242008LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) 2154491221587242008LL)))))))) ? (((var_4) << (((var_2) - (1840493866U))))) : (3336714081U)));
    var_16 = ((/* implicit */int) var_5);
}
