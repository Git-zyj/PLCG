/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61681
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
    var_17 *= ((/* implicit */unsigned int) max((var_12), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (short)-23450))));
                var_19 -= ((/* implicit */unsigned short) ((int) 3725890574U));
                var_20 &= ((/* implicit */unsigned short) ((arr_0 [(signed char)2] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)2013)) : (((/* implicit */int) (unsigned char)92)))))))));
                var_21 = ((/* implicit */_Bool) max(((+(((10928111978834639078ULL) + (((/* implicit */unsigned long long int) 522962067)))))), (((/* implicit */unsigned long long int) 1689734626U))));
                var_22 &= ((/* implicit */long long int) ((unsigned short) ((((-522962081) + (2147483647))) << (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])))));
            }
        } 
    } 
}
