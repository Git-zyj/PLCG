/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57993
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) var_0))))) ? (2251172661U) : (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (var_0))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) var_8))) + (2147483647))) << (((((var_0) + (1194837869))) - (16)))))) : (var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned short)9] [(unsigned short)9] [i_2] = ((/* implicit */int) var_4);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((int) arr_0 [i_0] [i_1 - 1])), (((((max((var_0), (((/* implicit */int) var_2)))) + (2147483647))) >> (((((var_5) ? (arr_7 [i_0] [2U] [i_2]) : (arr_5 [i_0] [i_1 + 2] [i_2]))) - (3125865795U))))))))));
                }
            } 
        } 
    } 
}
