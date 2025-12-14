/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83332
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2 + 1] [16LL] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_18))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    var_21 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) var_17)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned char) (signed char)0);
                                arr_15 [(unsigned char)12] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_16) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4 + 1]))))))))));
                                var_23 = arr_6 [i_2] [i_2] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (short)32640);
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) var_2)))))));
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)10), (((/* implicit */signed char) var_1))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_8)))))))) ? (16777216LL) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
}
