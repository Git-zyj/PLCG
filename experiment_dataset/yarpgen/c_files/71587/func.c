/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71587
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [12])) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)25382))))))) : (((/* implicit */int) ((arr_0 [i_0 - 1]) == (arr_0 [i_0 - 2]))))));
                var_20 = ((/* implicit */signed char) (~(((long long int) 16720455139848577174ULL))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_14)), (var_16)))) == (((((/* implicit */_Bool) (short)12586)) ? (16994029743564986641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)115)) == (629532690))))) : (((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
    var_22 &= ((/* implicit */short) (((((~(var_11))) / (((((/* implicit */long long int) var_4)) + (var_9))))) % (((/* implicit */long long int) ((var_4) / (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)115)))))))));
}
