/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57325
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
    var_15 = ((/* implicit */unsigned short) (unsigned char)248);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (var_0)));
                var_16 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)14)) || (((/* implicit */_Bool) 308001919955337435ULL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22547))) == (var_0)))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (-8592717828726237012LL))))));
}
