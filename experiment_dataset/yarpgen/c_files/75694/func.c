/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75694
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
                    var_14 = min((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)52)), (arr_2 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [13] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0])))))), ((-(((/* implicit */int) var_9)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((max((var_4), (((/* implicit */unsigned int) max((var_7), (var_13)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
    var_16 = ((/* implicit */unsigned short) var_13);
}
