/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56235
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (~((~(arr_3 [i_1] [i_1])))));
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (((1637703800243062322ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) max((2212700391082830295LL), (((/* implicit */long long int) var_10)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) + (max((2904900628135523421LL), (((/* implicit */long long int) (unsigned char)0)))))) : (((/* implicit */long long int) 2894354637U))));
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((signed char) -4999531876120291039LL)));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) 12675064515495569774ULL);
}
