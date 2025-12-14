/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87109
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
    var_16 = (unsigned short)58548;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) * (var_5)))) ? ((-(2047730324))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) var_0)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -637831525352027077LL)) != (((((/* implicit */unsigned long long int) (+(var_6)))) + ((-(var_8)))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))))));
    }
    var_19 = min((((long long int) min((((/* implicit */long long int) var_2)), (var_6)))), (var_7));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
    var_21 = ((/* implicit */unsigned short) ((((max((var_6), (((/* implicit */long long int) (unsigned char)36)))) << (((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) + (5536583718733989317LL))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_13)))) > (((((/* implicit */_Bool) 127ULL)) ? (((/* implicit */unsigned long long int) 1457276509)) : (var_5)))))))));
}
