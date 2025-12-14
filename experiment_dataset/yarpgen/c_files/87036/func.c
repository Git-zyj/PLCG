/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87036
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) / ((-(var_0)))))) ? (((((/* implicit */_Bool) min(((short)-512), (((/* implicit */short) var_1))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)4] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))));
                    arr_9 [i_0] [i_0] [6U] [i_0] = ((/* implicit */unsigned char) ((arr_6 [i_0] [i_0]) ? (((/* implicit */int) ((signed char) var_1))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144))))), (((((/* implicit */int) arr_5 [i_1] [i_0])) << (((((/* implicit */int) var_7)) - (36009)))))))));
                }
            } 
        } 
    } 
    var_12 = max((((/* implicit */unsigned long long int) (unsigned char)144)), (max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))));
}
