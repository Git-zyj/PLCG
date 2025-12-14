/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56306
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
    var_14 = ((/* implicit */unsigned long long int) (signed char)46);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((unsigned long long int) -2147483640)), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)64990)) : (((/* implicit */int) arr_3 [i_0])))), (arr_0 [i_0]))))));
                var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [(unsigned short)10] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [2ULL]))) : (((((/* implicit */_Bool) (unsigned short)548)) ? (((/* implicit */unsigned int) 757236913)) : (374428606U))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned char)191)))))));
            }
        } 
    } 
}
