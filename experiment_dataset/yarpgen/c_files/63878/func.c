/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63878
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
    var_12 *= (+(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((var_3) - (16717820285102646502ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2296))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    var_13 = ((/* implicit */short) (-(var_8)));
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((arr_1 [i_0]) & (var_10))))) * (min((((/* implicit */unsigned int) var_0)), (var_7))));
        var_15 = ((/* implicit */unsigned int) min((var_15), ((-(((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) arr_1 [12U])))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_7);
        var_17 = ((/* implicit */unsigned short) var_1);
    }
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
    {
        arr_6 [i_2 + 1] [i_2] = ((/* implicit */_Bool) (~(var_3)));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned short)65519), (((/* implicit */unsigned short) (short)1650)))))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (short)1650))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)1650))))) : (((long long int) var_0))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(var_11))))));
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) var_11);
        var_21 ^= ((/* implicit */signed char) ((_Bool) (_Bool)1));
    }
    var_22 *= ((/* implicit */short) (+((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) ^ (var_8)))))));
}
