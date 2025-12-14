/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85326
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
    var_12 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)100)), (var_8)))))) || (((/* implicit */_Bool) var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((short) arr_2 [i_1] [i_0]))) && (((/* implicit */_Bool) arr_2 [i_1] [i_1])))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43)))))))))));
                arr_5 [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))) - (0ULL));
                var_14 = ((/* implicit */unsigned int) (unsigned short)65534);
            }
        } 
    } 
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (((min((((/* implicit */unsigned int) (short)-30943)), (var_7))) ^ ((~(var_8))))));
}
