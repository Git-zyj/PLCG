/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69148
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 ^= ((((/* implicit */_Bool) max((90433692933407201ULL), (((/* implicit */unsigned long long int) arr_8 [6ULL] [6ULL] [i_2]))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [6ULL]))) : (16084449274363919510ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))));
                    arr_10 [i_0] [(_Bool)1] [(signed char)13] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) min((arr_5 [i_0] [8ULL] [i_0]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) arr_2 [i_1]))))));
                    arr_11 [i_0] [i_0] [17ULL] [(signed char)13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 2277422208491930984ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [(_Bool)1] [(_Bool)1] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) - (min((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_14)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (signed char)-8))));
    var_17 = (_Bool)1;
}
