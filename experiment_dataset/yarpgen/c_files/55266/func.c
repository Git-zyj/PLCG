/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55266
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((var_11) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))))))))));
                var_20 += ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)2]))) : (((long long int) ((unsigned short) (signed char)92)))));
                var_21 += ((/* implicit */unsigned char) (-(((int) min((((/* implicit */long long int) (signed char)-101)), ((-9223372036854775807LL - 1LL)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_5);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)));
}
