/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92407
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((350290937U) > (350290937U))))));
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)2))))));
                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned char)47))))))) : (var_2)));
                arr_6 [(signed char)5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4221670894U)) ? (((/* implicit */int) (short)18963)) : (((/* implicit */int) var_3))))) ? (-351504678) : ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-22)), ((unsigned short)7359)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-117)), ((unsigned short)22464)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-18954))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (max((((/* implicit */int) var_0)), (var_5))))))) : (var_8)));
}
