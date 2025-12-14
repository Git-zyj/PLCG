/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71838
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
    var_13 |= ((/* implicit */short) (((~(((/* implicit */int) ((unsigned short) 11U))))) | (((/* implicit */int) var_10))));
    var_14 = max((((/* implicit */unsigned int) var_1)), (var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [2ULL] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((4693620586733415996ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))) != (max((arr_0 [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) != (var_12))))))));
                var_15 ^= ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (2730578445U))))) >= ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))))));
            }
        } 
    } 
}
