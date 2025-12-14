/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93416
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
    var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1108097318234711095LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (((((/* implicit */_Bool) var_4)) ? (-1108097318234711082LL) : (1108097318234711077LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((short)32767), ((short)32762)))))))));
    var_19 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 560514278U)) ? (3054478140U) : (1240489161U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((-1108097318234711095LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) arr_5 [1ULL] [i_1])) - (1413454959)))))))));
                var_21 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                arr_6 [(short)2] [i_0] [i_1] = (!(((/* implicit */_Bool) (+(arr_0 [i_1])))));
            }
        } 
    } 
}
