/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88794
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
    var_11 *= ((/* implicit */short) ((6504818425694944814ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) || (var_5)));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_7);
                var_13 = ((short) (~(((/* implicit */int) (short)(-32767 - 1)))));
            }
        } 
    } 
}
