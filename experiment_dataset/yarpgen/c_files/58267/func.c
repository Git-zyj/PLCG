/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58267
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_1)))))) == (((/* implicit */int) var_9))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_10)), (((var_1) + (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 1492446816U)) ? (14943992003912877284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) == (((/* implicit */unsigned long long int) ((long long int) var_3)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11)))) == (var_1))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) == (4294967293U)))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (!((!(((/* implicit */_Bool) arr_0 [i_0])))))));
            }
        } 
    } 
}
