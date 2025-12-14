/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93446
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) var_6)) ? (1048575U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [(short)13] [i_0] [i_1]), (((/* implicit */long long int) 1048564U))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) 4161536U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12612321903894907854ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31159)) ? (5834422169814643762ULL) : (((/* implicit */unsigned long long int) 1616291733))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (4290805760U) : (4290805767U))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 4293918720U)) - (7060265323124192251LL))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)115)), ((short)-128)))))))));
                var_21 += ((/* implicit */signed char) ((unsigned char) ((((((arr_3 [i_0] [i_1] [i_0]) + (9223372036854775807LL))) >> (((-1342993221) + (1342993275))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14254639094966095498ULL)))))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((long long int) var_6)), (((/* implicit */long long int) ((short) var_15)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_11)))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) * (((/* implicit */int) ((_Bool) (_Bool)1)))));
}
