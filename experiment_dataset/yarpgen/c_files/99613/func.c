/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99613
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_1])))) / (12378070614319363717ULL)))));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_19))));
                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 2376892530U)) ? (arr_0 [i_1]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_0 - 1])))) % (((/* implicit */int) ((unsigned char) max((var_15), (((/* implicit */unsigned char) (_Bool)1))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((12378070614319363717ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_12), (((/* implicit */unsigned long long int) (_Bool)0)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (-983107432)))) / (((((/* implicit */_Bool) 13201810748809450602ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_6)))))));
}
