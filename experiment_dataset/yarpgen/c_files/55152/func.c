/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55152
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) != (arr_6 [i_1 - 1] [i_1 + 1] [i_0 + 1])))) / (((/* implicit */int) var_2))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((signed char) (((((~(((/* implicit */int) (unsigned char)0)))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0])) - (111))))));
                var_16 += ((/* implicit */short) (~(((/* implicit */int) var_7))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_13);
}
