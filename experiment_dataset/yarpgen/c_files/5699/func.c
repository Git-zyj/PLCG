/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5699
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
    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_3)) - (((((/* implicit */int) var_11)) / (((/* implicit */int) var_5)))))), (((((/* implicit */int) var_3)) - (((/* implicit */int) ((short) var_7)))))));
    var_17 += ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1934)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) ((unsigned short) (unsigned char)127))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((max((max((var_14), (((/* implicit */unsigned long long int) (unsigned short)1934)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)122))))))) - ((~(min((((/* implicit */unsigned long long int) (unsigned char)124)), (140737454800896ULL))))));
                    var_19 |= ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)65534)))) - (((/* implicit */int) ((signed char) arr_5 [i_0])))));
                }
            } 
        } 
    } 
}
