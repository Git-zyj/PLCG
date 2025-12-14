/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55822
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_9)))))))), (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_14))))) ? (11406563483391216820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1228780103)) && (((/* implicit */_Bool) var_10)))))))))))));
    var_17 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((long long int) var_9))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = max((((/* implicit */int) (!(((/* implicit */_Bool) 20ULL))))), ((+(arr_5 [i_0] [i_1] [i_1]))));
                var_19 = ((/* implicit */unsigned short) (short)25204);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 16; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned long long int) (short)-20157)))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((+(arr_8 [i_2 + 2]))) <= (min((((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_3]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 3]))) : (var_12))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_15 [i_2 - 3] [i_2 - 1] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))))), (max((((arr_8 [i_5]) - (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_11 [i_4]))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) min((arr_15 [9] [i_5] [i_5] [i_5 - 4]), (var_4)))) ? (((((/* implicit */unsigned long long int) arr_15 [i_5] [i_5] [i_5] [i_5 - 4])) + (arr_13 [i_4] [i_5] [18ULL] [i_5 - 1]))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_13 [i_2] [i_2] [i_4] [i_5 - 3])))))));
                            var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_2]))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_14 [0LL]))));
                            arr_17 [16U] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5 - 4])) || (((/* implicit */_Bool) arr_14 [i_5 + 1]))))), ((~(arr_14 [i_5 - 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_26 ^= ((/* implicit */long long int) arr_10 [i_3]);
                                var_27 = ((/* implicit */unsigned int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]);
                                arr_27 [i_2] [0ULL] [i_6] [i_2] [i_8] [i_7] [i_6 - 1] = ((/* implicit */unsigned long long int) arr_22 [i_2] [i_6] [i_7 + 3] [(unsigned short)6]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
