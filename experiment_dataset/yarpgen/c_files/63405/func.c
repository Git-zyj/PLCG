/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63405
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
    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))) % (var_12)))) ? (var_8) : (((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) (_Bool)0))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-23490))))))))));
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7936U)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) var_7))))) : (min((var_9), (4294959346U)))))) ? (((/* implicit */unsigned long long int) min((1489787301), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23490))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1221911850)) ? (var_3) : (((/* implicit */int) (short)-23490))))) ? (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (5370223218126726948ULL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) arr_2 [i_0]);
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 2])) % (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)62508)) : (((/* implicit */int) arr_1 [i_0 + 1])))))))));
            }
        } 
    } 
}
