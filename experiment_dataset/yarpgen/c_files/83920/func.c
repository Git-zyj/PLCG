/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83920
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
    var_11 &= ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (max((((/* implicit */unsigned int) (signed char)127)), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_3)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((signed char)-127), ((signed char)(-127 - 1))));
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (431756282) : (((/* implicit */int) (signed char)31))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)47)) >= (((/* implicit */int) (unsigned char)166)))))) : (((long long int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned short) (signed char)-127)))), (((/* implicit */unsigned short) ((signed char) var_5)))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), ((-(var_0))))) : (((/* implicit */unsigned long long int) var_10))));
}
