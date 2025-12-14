/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63614
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) ((var_2) >= (((/* implicit */int) var_8))))) + (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_13))))))) : (((/* implicit */int) ((((0) != (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) var_12)))))));
    var_17 = ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) 36028797018963967ULL)) ? (var_1) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (-21) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_3)) : (var_14))) : (var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) var_1)) : (arr_8 [i_0] [i_1] [i_2] [i_1])))) ? (min((arr_8 [i_0] [i_1] [i_1] [0U]), (((/* implicit */long long int) arr_4 [(signed char)10])))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) arr_7 [i_2] [(signed char)8] [i_1] [i_0]))))) ? (var_9) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 0)), (1630338733U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_1] [(unsigned char)2] [i_1]), (arr_7 [i_2] [i_1] [i_2] [i_1]))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_7)) ? ((~((-(var_9))))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
