/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63365
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
    var_19 = ((/* implicit */unsigned char) 0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2495088898U))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1])))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */int) var_10)) < (1431008248))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-16)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 2]))) == (var_13))))));
                    var_22 = ((/* implicit */unsigned int) max((((var_3) >> (((((/* implicit */int) var_17)) - (152))))), (((/* implicit */long long int) arr_1 [i_2 - 1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_6))))) > (var_13))))));
}
