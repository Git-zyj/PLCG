/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74392
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
    var_13 = ((/* implicit */long long int) var_0);
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (max((((/* implicit */unsigned long long int) var_4)), (18446744073709551606ULL)))))) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) (short)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) : (13623670365067574193ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? ((+(134217727ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) & (var_9))))));
                var_16 += ((/* implicit */unsigned char) ((signed char) (unsigned short)56223));
                arr_4 [i_0] [(unsigned char)15] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)101)) ? (2031265870U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))))) & (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_3 [13ULL] [i_1])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
}
