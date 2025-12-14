/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74095
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
    var_14 = ((/* implicit */unsigned int) ((((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) != (4217795917U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 += min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */long long int) arr_5 [i_0] [14] [i_0])) | (max((((/* implicit */long long int) var_10)), (var_7))))));
                arr_7 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) (short)11720)))))) ? (((((/* implicit */_Bool) var_8)) ? (134217727) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))))), (4217795918U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_20 [i_2] [i_5] [i_4] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_15 [i_2] [i_3] [i_4] [i_5] [i_4]))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)17138)), (min((var_1), (((/* implicit */int) (short)(-32767 - 1)))))))) : (min((((/* implicit */unsigned int) (unsigned char)18)), (var_11)))));
                                arr_21 [i_2] [i_2] [17] [i_2] = ((/* implicit */signed char) arr_15 [i_6] [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1]);
                                arr_22 [i_2] = ((/* implicit */unsigned short) (-(var_2)));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) max((63), (max((arr_19 [i_2 - 2]), (((/* implicit */int) (signed char)-1))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_2 - 1] [i_2 + 1]) << (((arr_11 [i_2] [i_2 - 1] [i_2 + 1]) - (1494676029)))))) ? (((/* implicit */unsigned long long int) (+(arr_11 [i_2] [i_2 - 1] [i_2 + 1])))) : (((var_2) * (((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                arr_23 [i_2] = ((/* implicit */signed char) arr_9 [i_2 + 1] [i_2 + 1]);
            }
        } 
    } 
}
