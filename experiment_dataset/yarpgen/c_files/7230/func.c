/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7230
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
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_4))))))), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))) & (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))))))));
            }
        } 
    } 
}
