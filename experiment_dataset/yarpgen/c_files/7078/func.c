/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7078
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)14] [(unsigned short)14] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)145))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
}
