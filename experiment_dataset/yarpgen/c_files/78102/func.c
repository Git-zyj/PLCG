/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78102
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
    var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)31281)), (var_8)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 231171868U)) ? (min((var_2), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17148316186314882632ULL)) ? (399611195) : (((/* implicit */int) (short)-31959))))))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-31281)) + (-914140204)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((signed char) ((short) (signed char)10)));
}
