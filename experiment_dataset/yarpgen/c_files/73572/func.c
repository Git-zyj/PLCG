/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73572
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-14)), ((unsigned short)23960)))) : (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned short)58556)) : (((/* implicit */int) (unsigned short)61338)))))));
                    arr_8 [i_0] [i_1 + 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))));
    var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)126))));
}
