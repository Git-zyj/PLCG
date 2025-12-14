/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61168
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
    var_13 = ((/* implicit */unsigned long long int) 7895900126736676383LL);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_4] [(unsigned short)16] [i_3 - 1] [(unsigned short)16] [i_1 - 1] [i_0] = max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3 - 3])) ? (((((/* implicit */_Bool) var_10)) ? (arr_12 [(short)4] [i_1 - 3] [i_2] [i_3 - 2] [i_4]) : (((/* implicit */unsigned long long int) 9223372036854775799LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967288U)) == (arr_0 [(short)6]))))))));
                                arr_15 [i_0] [i_3 - 2] [i_2] [i_1 - 3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(640707505))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (-9223372036854775800LL) : (var_5)));
                    arr_17 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_1 - 1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 3] [i_2] [i_5] [i_5]))) & (var_3)))))));
                                arr_26 [i_6] [i_6] = ((/* implicit */_Bool) ((((arr_6 [i_0] [i_1 - 1] [i_5] [i_5]) ? (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((arr_22 [i_6] [i_5] [i_2] [i_1 - 3] [i_0]) & (((/* implicit */long long int) arr_9 [i_0] [i_1 - 3] [i_5] [i_2] [i_1 - 1]))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : ((~(-9223372036854775800LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) >= (((((/* implicit */_Bool) (-(var_10)))) ? (var_12) : (((/* implicit */unsigned long long int) -9223372036854775799LL))))));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 13; i_7 += 2) 
    {
        for (int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            {
                arr_31 [i_7 + 1] [i_8] [i_8 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                arr_32 [i_8] [i_8 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-2))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
}
