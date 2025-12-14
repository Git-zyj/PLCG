/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8519
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (unsigned char)2);
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) max((((/* implicit */short) (unsigned char)44)), ((short)8306)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (unsigned char)216);
    var_22 &= ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)232)))), (((/* implicit */int) (((+(((/* implicit */int) var_14)))) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (signed char)114)))))))));
}
