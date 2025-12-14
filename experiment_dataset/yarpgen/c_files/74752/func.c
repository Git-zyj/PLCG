/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74752
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
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)30465)) * (((/* implicit */int) (unsigned char)135))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_4 [i_0]))));
                arr_7 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))))) ? (((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2])) / (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])))) : (((((/* implicit */int) (unsigned short)35071)) - (((/* implicit */int) (unsigned short)30465))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (unsigned short)28757);
}
