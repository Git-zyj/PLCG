/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71732
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_10 -= ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (min((((/* implicit */unsigned char) arr_3 [i_1] [i_1 + 1])), (var_0)))));
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-65))))))) <= (((unsigned int) (unsigned char)11))));
                arr_5 [i_0] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (3555262754487735823ULL))), (13385673698000708604ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_2) - (8852824625810594380LL)))))), (max((arr_1 [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_1 + 1]))))))) : (max((min((13385673698000708598ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_4))))));
            }
        } 
    } 
    var_11 = var_2;
    var_12 = ((/* implicit */unsigned char) min((var_12), (var_1)));
}
