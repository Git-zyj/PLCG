/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99957
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
    var_18 = ((/* implicit */long long int) ((unsigned int) 15190705187688379730ULL));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) & (min((var_0), (((/* implicit */unsigned long long int) var_15))))))) ? (((/* implicit */unsigned int) max((((var_17) / (arr_1 [i_0]))), (((/* implicit */int) ((signed char) var_6)))))) : ((-(((unsigned int) var_11))))));
        arr_3 [i_0] [18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9972492067352422656ULL) >= (((/* implicit */unsigned long long int) var_17)))))) | (((unsigned long long int) ((unsigned long long int) arr_0 [i_0 - 1])))));
    }
    var_19 = ((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) 65504)) ? (var_17) : (((/* implicit */int) var_9)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (-65505))) + (22411))))) << (((var_0) - (16299875454364475572ULL)))));
}
