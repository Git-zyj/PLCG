/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85009
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 += ((/* implicit */short) var_8);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (7355829055201896268LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) && (arr_0 [i_0]))))));
    }
    var_20 *= ((/* implicit */unsigned long long int) (-((+(((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned char)158))))))));
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) -373685658)) && (((/* implicit */_Bool) var_3)))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)174)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)196)) || (((/* implicit */_Bool) (signed char)-11))))) : (((/* implicit */int) (unsigned char)38))))) : (var_1)));
}
