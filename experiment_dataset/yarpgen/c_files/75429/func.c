/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75429
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((arr_3 [i_0] [i_0 - 1] [i_0 - 1]), (max((((/* implicit */long long int) (signed char)19)), (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (arr_3 [i_0] [3LL] [i_1 + 1]))))))))));
                arr_5 [(unsigned char)1] [i_1] = ((((((/* implicit */int) (signed char)-7)) - (max((((/* implicit */int) (signed char)38)), (arr_2 [i_0 + 1]))))) - (max((((((/* implicit */int) (signed char)19)) + (((/* implicit */int) (signed char)-19)))), (((/* implicit */int) (signed char)18)))));
                var_15 = ((/* implicit */unsigned int) min((min(((signed char)-10), ((signed char)-18))), ((signed char)-39)));
            }
        } 
    } 
    var_16 = max((((/* implicit */int) min((min((var_3), ((signed char)19))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) == (var_7))))))), ((~((~(((/* implicit */int) (signed char)-29)))))));
}
