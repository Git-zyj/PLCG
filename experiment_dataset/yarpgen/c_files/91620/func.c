/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91620
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
    var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (7027612170672597950ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (var_4) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))) < ((+(16181992810902428196ULL)))));
                var_13 = ((/* implicit */signed char) (short)-8365);
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (392546567548750655LL))) : (((/* implicit */long long int) var_5))));
                var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((((/* implicit */_Bool) -392546567548750656LL)) ? (((/* implicit */int) var_7)) : (var_4)))));
            }
        } 
    } 
}
