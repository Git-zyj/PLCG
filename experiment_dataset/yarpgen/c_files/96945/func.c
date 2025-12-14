/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96945
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (short)9731))))))) ? (max((arr_3 [i_0] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))) : (((max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_0])))) - (arr_3 [i_0] [i_1] [i_0])))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2581361277U)), (arr_1 [i_0] [i_2])))) ? (max((arr_1 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_1] [i_1]))))))) ? (((/* implicit */int) ((short) -6841914937922793902LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(short)4]))) : (19ULL)))))))));
                }
            } 
        } 
    } 
    var_13 = ((unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6)))));
}
