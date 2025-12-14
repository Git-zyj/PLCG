/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61143
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
    var_19 -= ((/* implicit */unsigned int) -2773461771954023897LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [15U] [(_Bool)1] = ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (((+(1249676477))) - (((/* implicit */int) var_12))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_18)) : (287198318)))) != (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [(signed char)13] [i_0]) : (1309824538U))))))) : (max((((unsigned int) arr_5 [(signed char)13] [i_0] [(signed char)13])), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32815)) >= (arr_2 [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (max((4072950385274903937LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)48))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) ((287198298) <= (((/* implicit */int) var_12))))))))));
}
