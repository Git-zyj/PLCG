/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56010
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10302))) - (arr_3 [i_0 + 3] [i_1] [i_0 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38529))) : (((0U) - (4294967295U)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)38503))))) ? (((((var_12) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27007))) >= (0U)))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned short)38524)))) >= (((/* implicit */int) ((1803217042993284743LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38518)))))))))) <= (4294967295U));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(13838839489016102335ULL)))) ? (65504) : ((~(((/* implicit */int) (unsigned short)0))))))) ? (var_17) : (((((/* implicit */int) var_7)) % ((-(-1011178515)))))));
}
