/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71056
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
    var_20 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(short)8] |= (-(((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_3 [i_0] [i_0])))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((13892915886414655760ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1166344198U)))))));
            }
        } 
    } 
}
