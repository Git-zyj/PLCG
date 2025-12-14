/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95846
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_3);
        var_14 = ((/* implicit */short) (+((+(((arr_1 [i_0]) * (1383647880U)))))));
        var_15 = ((/* implicit */unsigned short) ((2911319412U) - (max((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned char)63))))));
        var_16 ^= ((/* implicit */short) arr_0 [(short)0] [(short)0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (short)-12910);
        var_18 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) 2911319423U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [(signed char)19]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)25)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) (signed char)72);
        var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) : (arr_3 [i_2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16312)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_4 [i_2])) - ((-(arr_3 [i_2])))));
        var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned short)17456)) : (((/* implicit */int) arr_6 [i_2]))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((-949177712) / (((/* implicit */int) var_1)))) <= (((int) (_Bool)1))))) << (((((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) var_8)) - (247)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (1970992120U)))));
    var_23 = ((/* implicit */long long int) var_4);
}
