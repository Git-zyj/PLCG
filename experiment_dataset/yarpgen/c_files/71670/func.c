/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71670
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_9)))) ? (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)89))))) : (min((0ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != ((-(((/* implicit */int) (signed char)127))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))))), (max((((/* implicit */unsigned short) var_13)), ((unsigned short)25250))))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_7))))))) & ((((!(var_8))) ? (max((var_3), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((short) max(((-(var_3))), (((/* implicit */unsigned long long int) ((long long int) 3208992584U))))));
                arr_6 [i_1] [i_1] [(unsigned char)9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)127))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_11)))), (((((/* implicit */_Bool) ((var_3) / (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (unsigned char)117)))))) : (15956335501715431238ULL)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
