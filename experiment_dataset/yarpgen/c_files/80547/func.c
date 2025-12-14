/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80547
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)19455)) <= (((/* implicit */int) (unsigned short)16384))))))), (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 &= ((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_13) - (4298709445580010401ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16384)) | (((/* implicit */int) arr_3 [17U]))))) && (((/* implicit */_Bool) var_9)))))) : (((unsigned long long int) ((667292657U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384)))))));
                var_16 = min((min((((/* implicit */int) (unsigned short)49162)), (((((/* implicit */int) (unsigned short)49155)) + (((/* implicit */int) (unsigned short)16384)))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49136)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49151)) | (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                var_17 = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_3 [i_0])) || (var_12))) && (((/* implicit */_Bool) ((unsigned int) var_6)))))));
            }
        } 
    } 
}
