/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93086
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
    var_18 += ((/* implicit */_Bool) (+(((long long int) ((_Bool) var_11)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(var_9)))))) ? (var_2) : (max((((/* implicit */int) var_1)), (693614172)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (((((!((_Bool)0))) && (((/* implicit */_Bool) ((long long int) 16730495338649301864ULL))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_1 + 2]))) : (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : ((+(((/* implicit */int) var_0))))))));
                var_21 = ((/* implicit */unsigned char) (~(((unsigned int) min((var_6), (((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
