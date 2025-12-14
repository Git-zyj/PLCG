/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74628
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
    var_20 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (_Bool)1))))) ? (max((4294967295U), (((/* implicit */unsigned int) var_0)))) : (min((var_4), (1047552U)))))))));
                                var_22 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((11385999918213931823ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))) ? (((((/* implicit */long long int) arr_11 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4])) & (arr_9 [i_0] [i_0 - 3] [i_0] [i_0]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]) > (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3])) : (((/* implicit */int) (_Bool)1)))))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) - (arr_8 [i_0 - 2] [i_1] [i_1] [i_2] [i_3] [i_4])))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((arr_3 [i_3] [i_3 + 1] [i_3]) ? (arr_6 [i_2]) : (((/* implicit */long long int) 4055353191U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3])))))) ? (((/* implicit */unsigned long long int) 239614104U)) : (((max((((/* implicit */unsigned long long int) -6250133513190129637LL)), (13306809752027138975ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)224)))))));
                            }
                        } 
                    } 
                } 
                var_25 = (_Bool)1;
                arr_14 [i_1] [i_1] = ((/* implicit */signed char) -1LL);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) (short)-1)), (1604227228499020646LL)));
    var_27 += ((/* implicit */unsigned long long int) var_8);
}
