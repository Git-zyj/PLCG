/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65730
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (short)-29834);
                                arr_15 [(signed char)3] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) var_0)), (min((var_4), (((/* implicit */long long int) 4275669603U))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_0] [i_1] = (+(((19297693U) ^ (4275669629U))));
                    var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) max((var_8), ((short)26714))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */_Bool) var_7);
    var_22 = ((/* implicit */short) max((((int) var_5)), ((~(((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)9885))))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)0))))) * (var_18)));
}
