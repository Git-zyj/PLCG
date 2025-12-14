/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57228
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
    var_10 = ((((/* implicit */_Bool) (short)32256)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (2557134830964114203LL));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) arr_4 [i_0 + 1]))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1]))))), (((((/* implicit */int) min((arr_3 [i_1] [i_1] [i_1]), (arr_0 [i_0])))) == (((/* implicit */int) var_3))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_9)))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) var_3)), (var_8)))))));
            }
        } 
    } 
}
