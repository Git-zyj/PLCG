/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90621
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_0), (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (max((((/* implicit */unsigned long long int) (~(var_0)))), (max((var_13), (((/* implicit */unsigned long long int) 3U)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)109)), (1642120624U)))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (arr_4 [i_1]))) : (((var_3) ? ((~(var_2))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_10)) : (var_13)))))));
                var_17 = ((/* implicit */unsigned char) max((2652846670U), (1642120625U)));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_2))))) < (arr_3 [i_0] [i_1])));
                var_19 = ((/* implicit */unsigned short) ((min((arr_1 [i_0 + 1]), (((/* implicit */long long int) var_11)))) & ((-(arr_1 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_7);
                                var_20 = ((/* implicit */unsigned char) (-(1642120625U)));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_0))));
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) : (9223372036854775807LL)))) ? (max((var_10), (((/* implicit */long long int) arr_14 [i_2] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_5])) ? (2652846655U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (signed char)-25);
                }
            } 
        } 
    } 
}
