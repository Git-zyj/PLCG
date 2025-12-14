/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87907
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
    var_12 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_1])) > (arr_0 [i_0] [i_1]))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */int) (!((_Bool)0))))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) << (((((((((/* implicit */_Bool) arr_1 [i_0])) ? (-4611686018427387904LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))) + (4611686018427387924LL))) - (18LL))))))));
                arr_6 [i_0] [9LL] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (10624991025786908480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
            }
        } 
    } 
}
