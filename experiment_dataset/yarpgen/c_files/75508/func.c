/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75508
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_4 [(_Bool)1] [(unsigned char)17])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (5994225163511845740LL)));
                var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))) ? ((-(((/* implicit */int) arr_4 [i_1 + 2] [i_1])))) : ((~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) -6396087353853508941LL)) ? (1376337997U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned int) ((562668127) << (((((/* implicit */int) (unsigned short)8361)) - (8361)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
}
