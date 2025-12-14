/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80807
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((long long int) arr_1 [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) (((_Bool)1) ? (min((((/* implicit */unsigned int) (short)-29880)), (((((/* implicit */_Bool) (short)29897)) ? (3094590001U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29864))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3094590001U))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((~(var_6)))));
            var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((_Bool) arr_8 [i_1] [i_2] [i_1])) ? (((long long int) (short)-31369)) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
        }
    }
    var_21 = ((long long int) (~((~(((/* implicit */int) var_11))))));
    var_22 = ((/* implicit */signed char) ((unsigned long long int) 3094590001U));
    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_18))));
}
