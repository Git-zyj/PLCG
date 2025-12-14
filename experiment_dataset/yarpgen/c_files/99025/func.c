/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99025
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_10)), (var_1)))));
        var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)32767))))));
        var_16 -= ((_Bool) (-(var_10)));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_17 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */unsigned int) min(((+((-(var_1))))), (((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) var_4))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_12)), (var_7)))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    }
    var_19 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (var_1)));
}
