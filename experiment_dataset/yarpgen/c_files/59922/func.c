/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59922
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31979))) : (3971535454U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-31980), ((short)64))))) : (3564955302U))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((arr_6 [i_0] [i_2 + 4] [i_2 + 4] [i_4]), (((/* implicit */long long int) (signed char)100)))), (var_9))))));
                                arr_11 [i_0] [i_1] [i_2 + 1] [i_3 + 1] [i_4] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) % (max(((+(var_2))), (((/* implicit */unsigned long long int) ((arr_2 [i_1]) + ((-9223372036854775807LL - 1LL)))))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) % (max(((+(var_2))), (((/* implicit */unsigned long long int) ((arr_2 [i_1]) - ((-9223372036854775807LL - 1LL))))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_3 + 1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_4])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)31987))) : ((~(arr_9 [i_0] [i_1])))))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_3 + 1] [i_2 + 2])), (arr_0 [i_3 + 1] [i_3]))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (arr_0 [i_1 - 2] [i_1 - 1]) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1 - 2] [i_2 + 4] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1 + 1] [i_1 - 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) : (arr_0 [i_0] [i_2 + 2])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (var_3)))));
}
