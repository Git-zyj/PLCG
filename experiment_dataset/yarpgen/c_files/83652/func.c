/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83652
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (2077940991U))))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) ((((((/* implicit */_Bool) -1086390791)) && (((/* implicit */_Bool) (unsigned short)29906)))) || (((/* implicit */_Bool) arr_1 [i_1] [i_0])))))));
                arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1]))))) * (arr_1 [i_0] [i_1])));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1486050931)) ? (((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */int) (unsigned char)223)))) : (min((((/* implicit */int) (_Bool)1)), ((+(-1722775069)))))));
}
