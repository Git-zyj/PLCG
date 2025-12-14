/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72036
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
    var_17 = ((/* implicit */_Bool) ((long long int) var_9));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_5))))) - ((-(9316200683421418495ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)30439)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32099))) | (var_14))) % (((/* implicit */unsigned long long int) (+(arr_3 [i_1])))))));
                arr_4 [i_0] [i_0] [(signed char)12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35084)) - (((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_15)))))));
                arr_5 [6U] [i_0] [i_0] = ((unsigned char) max(((unsigned short)35081), (((/* implicit */unsigned short) var_16))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_6);
}
