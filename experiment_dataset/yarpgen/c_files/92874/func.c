/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92874
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
    var_20 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((2473925214321460466ULL) * (var_15))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_13)), (15972818859388091152ULL))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_11), (-767611849339348358LL))), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) (unsigned short)29698)) ? (-767611849339348358LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)17)))))));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (short)25436)) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17103))) : (var_15)))))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = max((max((arr_3 [i_1 - 3] [i_1]), (arr_3 [i_1 + 1] [i_1 + 1]))), (((/* implicit */long long int) var_0)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)21872);
    }
    var_22 *= ((/* implicit */_Bool) max(((+(min((((/* implicit */long long int) (_Bool)1)), (var_10))))), (var_8)));
}
