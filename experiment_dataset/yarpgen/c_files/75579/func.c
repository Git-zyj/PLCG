/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75579
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 3] [i_1])))) | (((/* implicit */int) ((var_9) != (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 + 1] [i_1])))))));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2])) >= (((((/* implicit */int) arr_3 [i_2 - 2] [i_1] [i_1 - 1])) ^ ((~(var_9)))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 1])) ? (10466781842384482379ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)95))))))) : (min((arr_6 [i_1 + 3] [i_1] [i_2 - 4]), (arr_6 [i_1 + 3] [i_1] [i_2 - 3])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_5))))) ? (((/* implicit */int) min(((signed char)-58), (var_7)))) : (((/* implicit */int) var_7)))))));
}
