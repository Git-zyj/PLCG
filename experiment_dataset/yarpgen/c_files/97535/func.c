/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97535
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
    var_19 += ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 11516207463979469461ULL)) ? (6930536609730082154ULL) : (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6930536609730082155ULL)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2720))))) << (((/* implicit */int) ((-3435667055512331992LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))))))) : (((((/* implicit */_Bool) -1095318341963096684LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1])))) : (((arr_3 [i_1] [i_0]) - (((/* implicit */unsigned long long int) arr_0 [(_Bool)0])))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)11)) ? (11516207463979469461ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))));
                arr_6 [i_0] [i_1] = ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_16) : (min((((/* implicit */unsigned long long int) (signed char)-12)), (11516207463979469462ULL)))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 11516207463979469461ULL)) ? (((/* implicit */unsigned long long int) 6334663484239811823LL)) : (16756682380877680677ULL)));
                var_22 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))), ((signed char)127)))) == (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (11249757973786995892ULL)))))));
            }
        } 
    } 
}
