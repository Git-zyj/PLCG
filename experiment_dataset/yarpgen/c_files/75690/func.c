/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75690
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
    var_12 = ((/* implicit */unsigned long long int) max((((max((276603385U), (((/* implicit */unsigned int) var_9)))) / (409832879U))), (((/* implicit */unsigned int) (unsigned short)3863))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */long long int) max((8931839778748030533ULL), (462859505509670154ULL)));
                var_14 = ((/* implicit */unsigned long long int) ((_Bool) min((max((((/* implicit */unsigned long long int) (short)-30731)), (8931839778748030533ULL))), (max((16449333162528525609ULL), (((/* implicit */unsigned long long int) var_1)))))));
                var_15 += max((((((/* implicit */_Bool) ((int) var_7))) ? (462859505509670132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))))), (((/* implicit */unsigned long long int) var_7)));
            }
        } 
    } 
}
