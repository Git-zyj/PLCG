/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72473
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(1460269546)))) : (237020687U))))));
    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1563004591423505578LL)) ? (((/* implicit */unsigned long long int) 4054727030071408190LL)) : (11871867605849127270ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) min(((-(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((-1918805810) + (2147483647))) << (((((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (11650465264590754883ULL))))))));
                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2101235289) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((unsigned short)50956), (((/* implicit */unsigned short) (signed char)77))))))))));
                arr_6 [(short)5] = ((/* implicit */unsigned long long int) (((~(((long long int) (short)16594)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(210308832))))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)22108)) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)131))))))))));
            }
        } 
    } 
}
