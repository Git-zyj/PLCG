/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97798
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56506)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48))))) : (var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-41)) * (((((((/* implicit */int) (signed char)-67)) + (2147483647))) >> (((((/* implicit */int) (signed char)67)) - (40)))))))), (var_13)));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */long long int) ((var_15) ? (((/* implicit */int) (short)31370)) : (((/* implicit */int) (signed char)-48))))) / ((-(var_13)))))));
                }
            } 
        } 
    } 
}
