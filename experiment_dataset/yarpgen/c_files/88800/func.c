/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88800
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [i_0] |= ((unsigned short) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) arr_0 [i_1]))));
                arr_8 [(short)19] [(short)2] &= ((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_0 - 1]) * (min((arr_3 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) var_8))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3785524719U)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_12)))))))) && (((/* implicit */_Bool) max((var_0), (var_10))))));
    var_15 = ((((/* implicit */_Bool) ((var_2) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) : (2218691647U))) : (((min((((/* implicit */unsigned int) var_0)), (1129976156U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13)))))));
}
