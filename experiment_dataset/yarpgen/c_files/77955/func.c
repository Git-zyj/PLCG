/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77955
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
    var_10 = max((((/* implicit */unsigned short) var_6)), (var_9));
    var_11 = ((/* implicit */_Bool) (unsigned short)0);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_8);
                var_13 |= ((arr_1 [i_1 + 1]) ? (max((((/* implicit */long long int) ((((/* implicit */long long int) 1073741824U)) == (4366730148512062540LL)))), (-460747213971876151LL))) : (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)14336)) << (((((/* implicit */int) (short)16384)) - (16377)))))))));
            }
        } 
    } 
}
