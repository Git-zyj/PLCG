/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77284
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_3)))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_6)))) ? (((/* implicit */int) var_7)) : (var_5)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (1973420879U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */int) var_1);
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(arr_1 [i_0])))) : (max((min((arr_3 [i_0]), (var_9))), (((/* implicit */long long int) ((short) var_7)))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) var_7);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_9)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_14 *= ((/* implicit */short) (!(((/* implicit */_Bool) 2064384))));
        var_15 = min((((/* implicit */int) (short)20377)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (arr_12 [i_2]))));
    }
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -2064375)) ? (((/* implicit */int) (signed char)39)) : (((-2064384) / (15)))))), (((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4684040531652408511LL)) && (((/* implicit */_Bool) var_7)))))) : (max((((/* implicit */long long int) var_5)), (4684040531652408501LL)))))));
}
