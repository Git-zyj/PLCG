/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84137
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned char)143)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10))))))));
    var_13 = ((/* implicit */int) min((max((((((/* implicit */_Bool) -321030825004041198LL)) ? (-321030825004041212LL) : (((/* implicit */long long int) -684793763)))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_3))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_4) : (1611326656U)))) ^ (((((/* implicit */_Bool) 3310842243U)) ? (((/* implicit */long long int) var_6)) : (321030825004041177LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (var_6)));
        arr_2 [i_0] = ((((/* implicit */long long int) 984125053U)) / (arr_0 [i_0]));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                var_15 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -321030825004041198LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48763))) : (-2385136413947153913LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2 - 1])))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_6 [i_2 + 3] [i_2] [i_2 - 3] [i_2]))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) < (-684793768))))));
            }
            arr_9 [i_1] [i_0] [i_0] = ((/* implicit */short) ((long long int) 684793762));
        }
    }
    for (int i_3 = 2; i_3 < 23; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) max((var_9), (((/* implicit */signed char) var_5)))))));
        var_18 -= ((/* implicit */long long int) (~(((int) -684793762))));
    }
}
