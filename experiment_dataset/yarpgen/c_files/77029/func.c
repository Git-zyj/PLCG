/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77029
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2117265123U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_18)))));
    var_20 &= ((/* implicit */unsigned char) 511ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */unsigned long long int) (unsigned char)22);
                arr_5 [i_1] [i_0 - 1] = ((/* implicit */int) min((max((((/* implicit */unsigned char) arr_4 [i_1 + 2])), ((unsigned char)87))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
            }
        } 
    } 
}
