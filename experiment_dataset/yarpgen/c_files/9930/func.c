/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9930
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
    for (int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) (signed char)69)) : (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)-8))))));
                var_14 *= ((/* implicit */unsigned char) (_Bool)1);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-11415))))))));
                var_15 = ((/* implicit */unsigned int) 9440310838237864356ULL);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (-((~(2147483647LL)))));
    var_17 = ((/* implicit */unsigned long long int) var_0);
}
