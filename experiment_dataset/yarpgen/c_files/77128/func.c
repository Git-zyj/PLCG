/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77128
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [i_0] [i_1] &= ((/* implicit */unsigned long long int) var_6);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_10 += ((/* implicit */unsigned char) var_4);
                                arr_16 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16876))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                arr_17 [i_0] [i_1] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
    var_12 = ((/* implicit */_Bool) var_9);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2366981138U), (((/* implicit */unsigned int) var_2))))) ? (var_5) : (var_4)));
    var_14 = ((/* implicit */_Bool) (+(((1927986157U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}
