/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90995
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_5) + (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_2))))) ? ((-(var_0))) : (((/* implicit */unsigned int) 0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)176))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-6)) + (2147483647))) >> (((arr_6 [i_0]) - (3564123810U)))))) : (var_9))))))));
                    var_18 ^= ((/* implicit */unsigned char) (((((~(var_15))) != (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) / (var_7))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((171148619U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))))))));
                    arr_11 [i_0] |= ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_0))))), (((short) var_3)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) : (5849658364521724294LL))))));
}
