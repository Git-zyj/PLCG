/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62044
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
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)11)))))));
                    arr_8 [(signed char)8] |= ((/* implicit */unsigned char) ((unsigned short) ((arr_6 [(unsigned short)12]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2 + 1])) * (((/* implicit */int) (signed char)11))))) : (max((5799108385799895642LL), (var_7))))));
                    arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_1] = ((/* implicit */_Bool) var_3);
                    arr_10 [i_0] [i_0] [i_0] [10ULL] |= ((/* implicit */long long int) ((unsigned char) ((var_0) ? (((/* implicit */int) arr_6 [10U])) : (((/* implicit */int) (!(((/* implicit */_Bool) 5799108385799895644LL))))))));
                    var_15 = (((!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61938))) : (5799108385799895634LL)))))) ? (((((/* implicit */_Bool) (signed char)11)) ? (max((((/* implicit */unsigned int) (signed char)-11)), (4234028375U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54279))))) : (((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))))) >> (((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])) ? (var_7) : (var_7))) - (545590221995253057LL))))));
                }
            } 
        } 
    } 
}
