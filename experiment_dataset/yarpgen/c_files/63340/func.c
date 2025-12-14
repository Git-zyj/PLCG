/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63340
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_5), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */unsigned int) var_2)) : (var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_1 + 2] [7ULL] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)2])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)16265))))))))));
                var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (-4627497034187182007LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49270))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_2)) : (var_0)))) ? (((/* implicit */long long int) var_2)) : (var_5)))));
            }
        } 
    } 
}
