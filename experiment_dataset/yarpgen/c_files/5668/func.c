/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5668
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_1] [i_1 - 2])), (arr_4 [(unsigned char)12] [i_1] [i_1 + 1]))) : (((((/* implicit */unsigned long long int) var_4)) & (var_8))))));
                var_11 = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                var_12 = arr_0 [i_0] [i_0];
                arr_6 [3U] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))))), (var_8)));
}
