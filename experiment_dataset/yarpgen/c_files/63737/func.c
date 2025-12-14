/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63737
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
    var_20 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_19)) ? (max((-4673435604106771266LL), (((/* implicit */long long int) (unsigned short)31330)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [(signed char)13]), (var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4673435604106771270LL)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 + 1]))))) : (((-6583316671908413626LL) | (var_16)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_19))))), (var_7)));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((arr_14 [i_0] [i_1] [21] [i_3] [(_Bool)1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(short)24] [i_0])) < (((/* implicit */int) var_13)))))) : ((+(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_4]))))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) var_15);
                                var_23 = ((unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) var_17)), (17102811012447125927ULL))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1] [i_0])), ((unsigned char)244))))) : (3597674913U)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((unsigned long long int) ((((/* implicit */_Bool) -3972499476990661022LL)) ? (-8369141657272244310LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((/* implicit */unsigned long long int) -4673435604106771285LL)))))));
            }
        } 
    } 
}
