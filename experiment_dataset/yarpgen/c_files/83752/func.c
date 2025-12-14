/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83752
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */long long int) -526879252)) / (arr_0 [i_1])))) ? (((var_7) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_1))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 + 1] [i_0]), (arr_4 [i_1] [i_1 + 1] [i_0])))) ? (var_8) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (signed char)-82)))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0])))))));
            }
        } 
    } 
    var_10 = ((/* implicit */_Bool) (signed char)57);
    var_11 = ((/* implicit */_Bool) (signed char)-80);
}
