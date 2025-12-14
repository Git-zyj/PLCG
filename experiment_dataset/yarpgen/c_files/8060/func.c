/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8060
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((var_15), (((/* implicit */short) var_11)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) | (var_3))), (((/* implicit */unsigned int) ((int) var_13)))))) : (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned long long int) var_13)), (29ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                arr_6 [(short)5] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_3 [i_0])))))))), (arr_2 [(signed char)6] [i_1])));
                arr_7 [(short)6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1 + 2]))));
                var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1] [i_1 - 2])) : (((/* implicit */int) (signed char)-6))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */short) (signed char)71)), ((short)-16035)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_11);
    var_24 = ((_Bool) 712192395);
}
