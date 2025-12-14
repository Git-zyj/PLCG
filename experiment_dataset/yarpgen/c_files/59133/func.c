/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59133
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_8)))) ? (min((arr_2 [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)2])) && ((!(((/* implicit */_Bool) var_7))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((signed char)22), ((signed char)-39)))) | (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (var_8)))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 96522265U)) || (((((/* implicit */int) ((_Bool) var_5))) == (((/* implicit */int) (signed char)68))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) - (min((((/* implicit */long long int) var_10)), (var_8)))))) ? (((/* implicit */int) (unsigned char)215)) : ((-(((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))) >= (var_3)));
}
