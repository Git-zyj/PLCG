/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67593
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)76)) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned short)65535))))), (var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -475835778)) && (((/* implicit */_Bool) 15052195854108642516ULL))))) * (((((/* implicit */_Bool) 4470852240549615538ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (-475835778)))))))));
                var_18 ^= var_7;
            }
        } 
    } 
}
