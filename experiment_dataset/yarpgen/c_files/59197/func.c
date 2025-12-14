/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59197
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
    var_10 ^= ((/* implicit */unsigned char) var_1);
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (signed char)16))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */int) (short)-2358)) - (((/* implicit */int) arr_0 [i_0])))) : ((-2147483647 - 1)))), (min((((/* implicit */int) var_8)), (arr_4 [(short)8] [i_0 + 2])))));
                var_13 |= ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)32767), (((/* implicit */short) arr_3 [i_0 + 1]))))) << (((((/* implicit */int) arr_2 [i_1])) - (22991)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((var_6) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) > (-3391320923687265700LL))))) > (var_9)))))));
}
