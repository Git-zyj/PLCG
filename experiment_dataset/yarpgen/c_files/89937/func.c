/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89937
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
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)104)) - (((((/* implicit */int) max(((unsigned char)240), ((unsigned char)220)))) - (var_4)))));
    var_16 = var_9;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */int) ((signed char) ((((((/* implicit */int) (unsigned char)14)) % (((/* implicit */int) (unsigned char)35)))) % (((/* implicit */int) (unsigned char)249)))));
                var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) ((short) var_12))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)36)) ? (var_5) : (560750930165760ULL)))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (var_10) : (((/* implicit */int) (unsigned char)220)))) : ((+(((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
}
