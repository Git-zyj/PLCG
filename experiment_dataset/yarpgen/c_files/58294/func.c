/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58294
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
    var_18 = ((/* implicit */int) var_5);
    var_19 = ((/* implicit */long long int) max((var_19), (max((((long long int) ((((/* implicit */_Bool) -5495384663992600621LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (5495384663992600620LL)))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_10))))))))))));
    var_20 = ((/* implicit */unsigned long long int) (+(5495384663992600621LL)));
    var_21 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)28))))), (var_13)))) : ((-(((((/* implicit */_Bool) var_17)) ? (32767ULL) : (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))), (var_12)))))))));
                var_23 = ((/* implicit */signed char) max((min((var_17), (((/* implicit */unsigned long long int) (signed char)-30)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) var_1)))))));
                var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_1 + 3] [i_1 - 1])), ((((_Bool)1) ? (5495384663992600635LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) ^ (((((/* implicit */_Bool) arr_6 [i_0] [15] [i_1])) ? (var_17) : (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_0])))))) : (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
}
