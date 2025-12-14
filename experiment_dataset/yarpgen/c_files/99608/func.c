/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99608
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) != (((/* implicit */int) arr_2 [i_1] [i_1 - 1])))))));
                arr_6 [(short)16] [(short)0] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1])))));
                arr_7 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)37)) != (((/* implicit */int) arr_0 [3ULL]))));
                arr_8 [(unsigned char)3] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) ((arr_5 [i_1 - 1] [i_1 - 1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (signed char)37))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-25))));
    var_22 &= ((/* implicit */_Bool) (-(((((((/* implicit */int) var_11)) < (((/* implicit */int) var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_18)))) : (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned long long int) var_18)))));
}
