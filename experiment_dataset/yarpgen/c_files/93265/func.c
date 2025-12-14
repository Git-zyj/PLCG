/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93265
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
    var_20 = ((/* implicit */unsigned short) var_16);
    var_21 = ((/* implicit */unsigned char) var_16);
    var_22 = ((/* implicit */unsigned char) (short)-11964);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (short)22709)) : (((/* implicit */int) var_6))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_3 [6U] = ((/* implicit */int) (+((-(arr_2 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 4247610590U)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_5 [i_1])))))) ? (((/* implicit */int) (unsigned short)2963)) : (max((((/* implicit */int) ((unsigned short) var_1))), (((((/* implicit */_Bool) (short)22693)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (short)22709))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_9))))) : (((unsigned long long int) (unsigned short)32361)))) <= (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) var_12))))));
    }
}
