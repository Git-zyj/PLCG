/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96623
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1 + 1] [i_1 + 1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 1489491303U)) ? (((var_4) ? (((/* implicit */int) (short)-21573)) : (-305398339))) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32640)))))));
                    var_10 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) var_5);
}
