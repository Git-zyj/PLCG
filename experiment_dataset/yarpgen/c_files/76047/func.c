/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76047
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1 + 1] [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 67108863ULL))));
                arr_5 [5] [5] [0] = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((_Bool) arr_1 [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)16799))))))))));
                var_11 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2]))) : (3758790533U)))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((((/* implicit */short) ((unsigned char) (~(((/* implicit */int) var_2)))))), (var_6)));
}
