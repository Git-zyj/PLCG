/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61119
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
    var_15 = ((/* implicit */_Bool) ((unsigned long long int) (~(((unsigned long long int) 1589506429U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)6] [i_1] [(_Bool)1] = ((min((arr_0 [i_1 - 1] [i_0]), (((/* implicit */long long int) arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1])))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0 + 2]))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 - 1] [i_1 + 1]))) ? (((long long int) arr_0 [i_0 - 2] [i_1 - 1])) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
