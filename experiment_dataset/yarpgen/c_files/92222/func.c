/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92222
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                var_15 -= ((/* implicit */_Bool) (-(var_2)));
                arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1]))))) < ((~(((/* implicit */int) var_9))))));
                var_16 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) max((arr_2 [10ULL] [i_1]), (((/* implicit */unsigned short) (short)3774)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (max((((/* implicit */int) var_5)), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)20127)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((1023LL) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
}
