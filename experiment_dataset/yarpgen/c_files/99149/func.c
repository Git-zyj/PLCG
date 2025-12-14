/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99149
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (((((/* implicit */int) (short)-4840)) / (((/* implicit */int) (short)-24600)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] [i_1] = ((/* implicit */int) var_0);
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) var_2);
                                var_21 = var_11;
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_4]))));
                                var_22 &= ((unsigned long long int) var_15);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) -1143299700);
                    var_24 &= arr_11 [i_0 + 1] [i_0 + 2];
                }
            } 
        } 
    } 
    var_25 &= ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) (!(var_12))))));
    var_26 &= ((/* implicit */_Bool) (+(((((((/* implicit */int) var_19)) == (var_10))) ? (min((((/* implicit */int) var_1)), (-1143299722))) : (var_5)))));
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (unsigned char)135))));
}
