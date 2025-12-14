/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72104
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
    var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)0))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_1] [i_2]))))), (((((((/* implicit */int) arr_4 [i_0] [i_2])) <= (((/* implicit */int) (unsigned char)93)))) ? (((/* implicit */int) ((14) > (((/* implicit */int) (unsigned short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)44)) || (((/* implicit */_Bool) (unsigned char)127))))))))))));
                    var_15 = ((/* implicit */signed char) (((~(((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_2]))))) == (((/* implicit */int) arr_4 [i_0 - 1] [i_2]))));
                }
            } 
        } 
    } 
}
