/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87466
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))))) ? ((+(((((/* implicit */_Bool) -554505008)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 |= ((/* implicit */unsigned short) arr_5 [i_1] [i_2]);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11672741925351583110ULL)) ? (((long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) : (arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_4 [i_2]))))) : ((((+(1073741823U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
    } 
}
