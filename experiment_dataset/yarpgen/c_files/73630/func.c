/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73630
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(var_9))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) var_5)), ((short)29457)))), (min((((/* implicit */unsigned short) var_13)), (var_11))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) min((min((3873492533U), (((/* implicit */unsigned int) (short)-29457)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)62)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_8))))) * (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29457))))))), (var_10)));
                                var_19 = ((/* implicit */long long int) var_8);
                                arr_17 [(unsigned char)8] [i_4] [i_2] [i_3] [i_4] [(_Bool)1] [23] = ((/* implicit */unsigned char) var_16);
                                var_20 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_14))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
