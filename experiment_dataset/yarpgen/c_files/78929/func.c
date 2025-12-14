/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78929
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((((long long int) (~(((/* implicit */int) (short)8969))))) + (9223372036854775807LL))) >> ((((+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_0))))) - (1027575546U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (var_3)));
                                arr_16 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1)))) ? (((/* implicit */int) (unsigned char)112)) : (((((/* implicit */int) var_2)) / (((/* implicit */int) (short)-8966))))))), (((unsigned int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (1014617635U))))));
                                var_12 = (short)8966;
                                var_13 += ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((unsigned int) 5580278596909173414ULL))), (9223372036854775791LL))) << (((max((((/* implicit */unsigned int) (unsigned char)49)), (((unsigned int) var_9)))) - (1037861188U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8952)) && (((/* implicit */_Bool) ((unsigned int) 3280349661U)))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(20ULL))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) * ((((!(((/* implicit */_Bool) (unsigned char)9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118))))) : (((/* implicit */int) ((short) var_6)))))));
}
