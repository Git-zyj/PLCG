/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6705
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [7LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_2 + 4]) : (((/* implicit */unsigned long long int) -6524424703092473067LL))))) ? (6524424703092473071LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-70))))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)148)) > (-6)))))))));
                    var_15 = ((unsigned int) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) 140736951484416LL)) ? (-6524424703092473073LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)70))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)127)) ? (((-6524424703092473078LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)70))))) : (((/* implicit */long long int) ((int) var_9))))));
}
