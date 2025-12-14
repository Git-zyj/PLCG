/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96390
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((int) var_3)))));
    var_19 = ((unsigned char) ((unsigned short) var_14));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                arr_6 [i_0] [i_1] |= ((/* implicit */short) var_12);
                var_21 *= ((/* implicit */unsigned long long int) (+(var_10)));
                arr_7 [i_1] = ((/* implicit */unsigned int) (~((-(var_6)))));
                var_22 -= ((/* implicit */_Bool) ((unsigned short) ((short) ((short) (short)8919))));
            }
        } 
    } 
    var_23 &= (~(((unsigned int) var_3)));
}
