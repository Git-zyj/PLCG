/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84311
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) var_7)) + (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << ((((+(((307797745U) << (((/* implicit */int) (signed char)13)))))) - (333324232U))))))));
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_12 [i_1] [i_1] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */short) (+(((((((arr_4 [i_3] [i_1] [i_2]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2])) - (21348))))) << ((((((-(((/* implicit */int) var_6)))) + (158))) - (33)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 3] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 3] [i_3 - 3])) ? (arr_15 [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 3] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 1] [i_3] [i_3])))))) ? (min((arr_8 [i_3 - 3] [i_3 - 1] [i_3] [i_3]), (arr_15 [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32767)))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_0])))), (((unsigned long long int) arr_2 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5 - 1])) << (((((/* implicit */int) arr_9 [i_5] [i_6])) - (140))))))));
                                arr_33 [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_15 [i_5] [i_6] [i_7] [i_5 - 2] [i_9] [i_6 + 1] [i_9])), (arr_6 [i_5 + 1]))) << (((((((/* implicit */int) ((unsigned short) arr_17 [i_7] [i_7] [i_7]))) << (((arr_32 [i_5 - 2] [i_5 + 2]) - (9516354753454822950ULL))))) - (10244072)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((0ULL) << (((-2019498525421835841LL) + (2019498525421835880LL)))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65530))) ? ((~(((/* implicit */int) arr_21 [i_6 - 2] [i_6])))) : (((/* implicit */int) ((signed char) arr_21 [i_6 - 2] [i_6]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_7))));
}
