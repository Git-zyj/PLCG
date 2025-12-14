/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87524
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
    var_10 = ((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (2210387044U))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) var_9))))) - (9223372036854775807LL))) : ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
}
