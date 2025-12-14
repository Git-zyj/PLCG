/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76633
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_2)))), (min((((/* implicit */int) var_4)), (-49422681)))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (1152921503533105152ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [16ULL])) : (((/* implicit */int) var_1))))));
                    arr_9 [i_0] [i_0] [16ULL] = ((/* implicit */unsigned short) var_14);
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2 - 2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2])))) : (((((/* implicit */int) (unsigned short)31942)) + (((/* implicit */int) arr_7 [i_0]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((var_0) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
}
