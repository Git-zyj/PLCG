/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65954
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
    var_18 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (unsigned char)192)))));
    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) var_13)) : (var_2)))) : (var_4)))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(373444957U)))), (var_3)))), (var_14)));
    var_21 = ((unsigned long long int) (!(((((/* implicit */_Bool) var_14)) && (var_16)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(short)1] [i_0] = ((/* implicit */unsigned char) ((short) max((var_8), (((/* implicit */short) ((_Bool) arr_0 [i_0]))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])), (min((arr_6 [(signed char)10] [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)27628))))))) ? (((/* implicit */unsigned long long int) (-(5339867222879001481LL)))) : (((((unsigned long long int) 6847815542425700946ULL)) << (((arr_2 [i_0] [i_0]) - (1520383007848650614LL)))))));
            }
        } 
    } 
}
