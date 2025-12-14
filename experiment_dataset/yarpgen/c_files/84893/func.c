/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84893
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((var_17) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)217)), (var_12)))))))) ? (max((((/* implicit */unsigned long long int) var_8)), (max((1742139827534204177ULL), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)203), (((/* implicit */unsigned char) var_4))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_13) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)217)) * (((/* implicit */int) (unsigned char)203))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14)))))));
                    var_20 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)217))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((0) >> (((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) arr_1 [i_1])))) + (1262368275)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max(((short)8), ((short)0))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (signed char)31))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
