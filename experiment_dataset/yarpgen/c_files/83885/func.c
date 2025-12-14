/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83885
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
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) + (arr_2 [i_2] [i_2 - 2])))) ? (((/* implicit */int) arr_9 [(unsigned char)4] [i_1] [(unsigned short)2] [i_1])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_6 [i_0 - 3] [6LL] [i_2 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)29))));
                                var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65254)))))))));
                                arr_15 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((_Bool) var_11));
                                arr_16 [i_3] [i_3] [20ULL] [i_1] [6ULL] [i_3] [i_3 + 1] = ((/* implicit */_Bool) 908245074U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_2)))) ? (16571180852765761146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_6)))))))));
}
