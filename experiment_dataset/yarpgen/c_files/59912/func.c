/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59912
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
    var_15 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))) : (min((arr_3 [i_0 + 2]), (arr_3 [i_0 + 3])))));
                arr_6 [(signed char)2] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) 18164006090226692184ULL)))))))));
}
