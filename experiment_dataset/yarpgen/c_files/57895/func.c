/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57895
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_11)), (max((max((((/* implicit */unsigned long long int) (signed char)127)), (17519260897406982793ULL))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (signed char)99))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((min((arr_0 [i_0]), (927483176302568822ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_2 [i_0])))), (((((-2673096674657183618LL) + (9223372036854775807LL))) << (((927483176302568827ULL) - (927483176302568827ULL)))))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))) % (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_9))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4102910838897388707LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)127)))))) : (((var_10) >> (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [(unsigned short)7]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) && (((/* implicit */_Bool) var_9)))))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_9) >> (((((/* implicit */int) (signed char)-122)) + (136))))), (max((-7884714872808844471LL), (((/* implicit */long long int) var_8))))))) || (((/* implicit */_Bool) max((((var_2) % (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_8)))))))));
}
