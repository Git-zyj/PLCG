/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61250
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65508))) / (((((/* implicit */_Bool) 13084444021152180617ULL)) ? (7715867700035564868ULL) : (((/* implicit */unsigned long long int) 802769492U))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)27146))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))), (var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) arr_5 [i_1])))));
                arr_6 [i_0] [(short)4] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((3492197802U), (((/* implicit */unsigned int) (signed char)-36))))) && (((/* implicit */_Bool) ((unsigned long long int) 802769512U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) 802769498U)) >= (3220827267627662684ULL)))))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((long long int) 3492197800U)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((((/* implicit */_Bool) 3768043923U)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1]))) : (3492197793U))) - (55056U))))) : (((/* implicit */int) (signed char)66))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_6))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) -7596178631199071798LL));
}
