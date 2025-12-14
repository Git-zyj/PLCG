/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60713
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((7162777742279383475ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(signed char)2] [i_0] [i_1 - 1])))))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)224);
                var_18 = ((/* implicit */long long int) (+((+((-(((/* implicit */int) (unsigned char)233))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (+((-(((/* implicit */int) (short)-24355))))));
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)207))));
}
