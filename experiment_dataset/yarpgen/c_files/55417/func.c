/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55417
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) ((5533736409880373366LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (max((var_9), (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_5))));
                    var_13 = ((/* implicit */int) ((max((arr_2 [9LL] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (1586884215)))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8022)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40365)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_3 [i_0])))))))))));
                }
            } 
        } 
    } 
}
