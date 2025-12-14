/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76456
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
    var_15 += ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((max((max((arr_7 [(unsigned char)4] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_14)))) - (8596474877877583828ULL)))));
                    var_17 = var_13;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((10ULL) == (((/* implicit */unsigned long long int) ((arr_19 [i_3] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) ((arr_8 [i_3] [i_4] [i_5] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_4] [i_6] [i_6])))))))));
                                arr_21 [i_3] [i_3] [i_3] [i_6] [i_7] = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_13)))) % (((arr_13 [i_3] [i_3] [i_5]) / (((/* implicit */long long int) var_3)))))));
                                var_21 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_6])) ? (arr_15 [i_7] [i_6] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)8] [i_7]))) != (arr_17 [i_3] [i_4] [i_5] [i_6]))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_14)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            {
                                arr_26 [6U] [i_4] [6U] [i_8] [i_9 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((var_14) - (3713839500U)))))) ? (min((((/* implicit */long long int) (unsigned short)15329)), (5182097495542995691LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3]))) | (((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_8]))))))))));
                                var_22 = (!(((/* implicit */_Bool) ((arr_0 [i_8 - 1]) | (arr_0 [i_8 - 1])))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
