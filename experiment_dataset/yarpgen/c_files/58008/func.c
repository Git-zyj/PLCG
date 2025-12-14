/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58008
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
    var_13 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_9)))), (((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)-16))))));
    var_14 = ((/* implicit */_Bool) (((+(((unsigned long long int) var_6)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2759092138U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5013711644949013484ULL))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_1] [i_1 + 2]))) ? (9361578864829395417ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (unsigned char)19)))))))));
                    var_16 = ((/* implicit */unsigned long long int) (+(max((arr_8 [i_0] [i_1 + 3] [i_2]), (var_7)))));
                    arr_9 [i_0] [7ULL] [i_1] [i_2] = ((unsigned int) min((arr_0 [i_2]), (max(((_Bool)1), (var_10)))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((long long int) (short)26041)))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((max((((arr_4 [i_1]) ? (1970260109420300832LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (short)12930)))), (((/* implicit */long long int) ((_Bool) 0ULL))))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((8118476706884259076LL), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
