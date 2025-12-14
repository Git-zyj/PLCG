/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86309
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)-5999)) > (((/* implicit */int) max((var_12), (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (5LL)))) ? (min((var_10), (var_2))) : (((/* implicit */long long int) ((var_8) >> (((((/* implicit */int) var_11)) + (68)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = max((((((/* implicit */_Bool) max((arr_4 [i_0 + 1] [i_0] [i_0 + 1]), (arr_3 [2LL])))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) | (var_6)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0 + 1]))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((var_6) + (281474976645120LL)))) ? (min((var_13), (((/* implicit */long long int) (signed char)-51)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))));
}
