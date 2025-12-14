/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95920
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (short)32767;
                arr_6 [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)29)) : (var_4)))))), (3265904250U));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_13);
    var_15 = ((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-1)));
}
