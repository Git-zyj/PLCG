/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71671
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((((((145439656U) | (145439657U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (signed char)-109)) : (arr_2 [i_1])))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_2] [i_2]))) | (((((/* implicit */_Bool) arr_1 [(short)13] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)13968)))))));
                    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
                    arr_8 [(signed char)4] [i_0] [(signed char)13] = ((/* implicit */short) arr_4 [i_0] [i_0] [(unsigned char)16] [i_0]);
                    var_17 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) min((arr_2 [i_1]), (arr_4 [i_0] [i_1] [i_2] [i_2]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_1 [i_1] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)77)) > (((/* implicit */int) (unsigned char)0))))) : (-445084945)))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)228);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)30229)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_8))) | (((/* implicit */int) ((unsigned short) -298745354)))))) : ((~(((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))))))))));
}
