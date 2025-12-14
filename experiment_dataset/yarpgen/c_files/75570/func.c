/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75570
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) | (-8586684208957599445LL)))), ((-(365626704577334220ULL))))))));
                    var_11 = ((/* implicit */_Bool) max((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (arr_1 [i_1])))))))));
                    var_12 ^= ((arr_3 [i_0]) % (12855795808310666650ULL));
                }
            } 
        } 
    } 
    var_13 &= ((((/* implicit */_Bool) ((((unsigned long long int) 2254532494389227816LL)) - (((/* implicit */unsigned long long int) ((long long int) 13455958696432900523ULL)))))) ? (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (_Bool)1)), (-2254532494389227822LL)))))) : ((((+(var_6))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 71123284706680181LL)) : (var_2))))));
    var_14 -= ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_3) / (var_9)))))) % (-2852649540050798614LL));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((288230238712758272LL) >> (((9223372036854775787LL) - (9223372036854775780LL))))) - (2251798739943415LL)))))) ? (((/* implicit */unsigned long long int) (+(-2551220151157604787LL)))) : (((((var_1) | (var_3))) >> (((((((/* implicit */_Bool) var_8)) ? (var_5) : (var_3))) - (14842585319101579340ULL)))))));
}
