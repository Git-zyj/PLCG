/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72556
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
    var_11 = ((/* implicit */unsigned int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) var_10);
                arr_6 [16U] [i_1] |= ((/* implicit */long long int) max((arr_2 [(unsigned char)12] [(unsigned char)12]), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_2)))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
}
