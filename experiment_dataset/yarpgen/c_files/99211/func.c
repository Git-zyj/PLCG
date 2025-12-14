/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99211
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
    var_16 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (0LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-25015))))));
    var_17 = ((/* implicit */_Bool) (-(((((((/* implicit */int) var_2)) + (((/* implicit */int) var_1)))) - ((-(((/* implicit */int) (signed char)0))))))));
    var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) var_2)), (max((((((/* implicit */_Bool) 758490653)) ? (var_14) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) min(((unsigned short)63488), (((/* implicit */unsigned short) (short)-30664))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) var_1);
                var_20 ^= ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        } 
    } 
}
