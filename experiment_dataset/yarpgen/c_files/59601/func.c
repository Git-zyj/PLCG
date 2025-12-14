/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59601
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1407387448)) ? (((/* implicit */int) ((unsigned char) (~(332324527))))) : ((-(((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (unsigned char)166)) : ((-2147483647 - 1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (+(max((var_6), (((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (var_2))))))));
                                arr_19 [i_1] [i_1] [i_2] [(unsigned short)13] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(max((-1046639685), (((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) arr_9 [(unsigned short)3] [i_1 + 2] [(unsigned short)7] [(signed char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_6] [i_6]))) : (var_13)))));
                                arr_20 [i_0] [i_1] [i_1] [i_2 - 1] [4ULL] [i_6] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_6 [i_0] [i_1 + 2])))) + (2147483647))) << (((max((((/* implicit */long long int) arr_6 [11ULL] [i_1 - 1])), (var_15))) - (25LL)))));
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_2 - 1] [3] [(unsigned char)3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_26 [i_0] [(unsigned short)13] [i_2] [i_0] [i_8] [i_1] [i_2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (unsigned char)95)) - (88))))));
                                var_22 = ((/* implicit */unsigned char) ((int) arr_2 [i_8]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) (+((+(var_16)))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            {
                var_24 = max(((+(((((/* implicit */_Bool) (signed char)-30)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) var_11)));
                arr_33 [(unsigned char)11] [i_9] [(unsigned char)11] = ((((/* implicit */_Bool) (~(max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)4539))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) min((arr_23 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))) : (((var_15) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_30 [i_10])) : (((/* implicit */int) (short)-14673))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_18)), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (var_13)))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned short) var_0)), (var_18))))));
}
