/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6536
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
    var_14 = var_4;
    var_15 = (~(var_4));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [13U] [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) : (var_1)))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 1796199094U)) : (var_5))))), (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 2498768201U)))) ? (((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3 - 2] [i_4]))))) : (((/* implicit */long long int) ((unsigned int) var_0)))))));
                                arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_3 - 2] [i_4] [i_3] [i_3 - 2] [i_1])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_1 - 1])) : (var_6)))))) >= ((-(2498768205U)))));
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_4] = (i_1 % 2 == zero) ? (((/* implicit */long long int) (-(((1796199089U) << (((((/* implicit */int) arr_6 [i_1] [i_2 + 2] [i_1])) + (27396)))))))) : (((/* implicit */long long int) (-(((1796199089U) << (((((((/* implicit */int) arr_6 [i_1] [i_2 + 2] [i_1])) + (27396))) - (13995))))))));
                                arr_20 [19ULL] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2498768201U) != (((2498768202U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) / (2498768202U)));
                                var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1796199095U) >> (((1796199094U) - (1796199081U)))))) ? (1796199094U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_0] [(unsigned short)7]) | (((/* implicit */unsigned long long int) 1796199095U))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 2498768202U)) : (var_4)))) ? (2498768202U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                                var_18 = ((((2498768204U) / (2498768182U))) / (min((min((1796199087U), (((/* implicit */unsigned int) arr_12 [i_0] [i_1])))), (((/* implicit */unsigned int) arr_15 [i_0] [14U] [i_1 + 1] [i_1 + 1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
