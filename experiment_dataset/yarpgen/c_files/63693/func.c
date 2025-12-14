/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63693
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_15))))) ? (min((((/* implicit */long long int) var_12)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_15))))))) ? (var_11) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_0)))))));
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-25396)) : (((/* implicit */int) var_4))))) - (min((var_0), (var_11)))))), (((((((/* implicit */_Bool) var_7)) ? (576460752303423488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25379))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_2 [i_1] [i_0])))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : ((-2147483647 - 1))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]))))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1851582417456737197LL))))), (min((((/* implicit */unsigned char) arr_2 [i_0] [i_1])), ((unsigned char)100))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) 1851582417456737197LL);
}
