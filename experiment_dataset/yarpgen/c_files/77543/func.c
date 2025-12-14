/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77543
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
    var_10 = ((/* implicit */short) min((((((/* implicit */int) var_9)) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-16715)) : (((/* implicit */int) var_0)))))), ((~(((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */long long int) ((var_8) / (1938120674U)))) != (((((/* implicit */_Bool) arr_0 [i_1])) ? (5490006893254376446LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))), (((arr_0 [i_2 - 1]) | (((/* implicit */int) (unsigned char)102))))));
                    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_2 - 2])))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (1300147819) : (arr_4 [i_2])))));
                }
            } 
        } 
    } 
}
