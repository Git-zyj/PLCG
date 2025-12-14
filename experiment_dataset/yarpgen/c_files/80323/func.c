/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80323
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775800LL))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 7713285926496492881LL)))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((short) (+(1022464810U)))))));
        var_13 += ((/* implicit */unsigned char) max((((/* implicit */long long int) var_3)), (((-9223372036854775802LL) % (((/* implicit */long long int) -1358776092))))));
        arr_3 [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (3272502485U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_6)))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_2))))) ^ ((((-(((/* implicit */int) (signed char)-47)))) ^ (((/* implicit */int) ((3877556309U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        arr_8 [i_1] = ((/* implicit */long long int) (short)8192);
        var_15 = ((/* implicit */signed char) (_Bool)1);
        arr_9 [i_1] [0LL] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_8)))) >> (((((((((/* implicit */int) (signed char)-47)) + (2147483647))) >> (0))) - (2147483592))))));
    }
    var_16 = ((/* implicit */unsigned short) var_3);
}
