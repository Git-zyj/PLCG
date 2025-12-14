/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88291
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
    var_20 = ((/* implicit */unsigned int) ((_Bool) -411156477));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_1]))));
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_2]);
                    arr_7 [i_1] [i_1] &= var_16;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10)))))));
}
