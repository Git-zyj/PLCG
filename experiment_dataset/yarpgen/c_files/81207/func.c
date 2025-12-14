/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81207
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_11)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1] [(unsigned short)18]))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_14))))) ? (max((var_18), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))))));
                    arr_9 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)55040)) : (((/* implicit */int) (unsigned short)49784)))) : (((/* implicit */int) ((unsigned short) (signed char)108))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_3);
    var_22 = ((/* implicit */unsigned long long int) (((-((-(((/* implicit */int) var_7)))))) >> (((min((var_0), (max((var_18), (((/* implicit */unsigned long long int) var_13)))))) - (4130401865607731737ULL)))));
    var_23 = ((/* implicit */unsigned int) var_13);
}
