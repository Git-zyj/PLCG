/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82819
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) var_14)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_8) < (((/* implicit */int) (unsigned char)58))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2915591423162216606LL)))))) / ((+(412195570U)))))));
    var_19 = ((/* implicit */long long int) ((short) (unsigned short)32736));
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((unsigned long long int) arr_2 [0] [0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (max((((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)8433)) : (((/* implicit */int) var_13))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)57102)) ? (((/* implicit */int) arr_6 [i_0] [14U] [i_4] [i_3])) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)57108)) > (((/* implicit */int) var_17))))) : (((/* implicit */int) ((var_14) <= (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */int) var_0))))));
                                arr_15 [i_2] [i_1] [i_0] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (~(min((var_6), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_2]))))))) ? (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_4)))), ((+(((/* implicit */int) var_13)))))) : (((/* implicit */int) var_5)))))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))), ((~(((/* implicit */int) ((unsigned short) 8236376933124706242LL)))))));
}
