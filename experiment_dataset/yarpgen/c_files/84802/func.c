/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84802
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
    var_11 |= ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (((+(((/* implicit */int) min((var_4), (arr_5 [i_0] [i_0] [i_0])))))) ^ (((/* implicit */int) arr_4 [13]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */short) min(((+(-1959677853))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)238)))) > ((+(((/* implicit */int) (unsigned char)240)))))))));
                                var_13 = ((/* implicit */int) var_6);
                                var_14 *= ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (arr_20 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91)))))) ? (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)91)))) : (((/* implicit */int) arr_21 [i_5] [(short)1] [i_7] [i_6] [i_5]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_6] [i_7] [i_8] [(unsigned char)9] [i_9]))) + ((-(var_7)))))));
                                var_16 = max((((/* implicit */long long int) max(((signed char)88), ((signed char)77)))), (min((((/* implicit */long long int) var_4)), (max((-4861039220890030653LL), (((/* implicit */long long int) var_5)))))));
                                arr_25 [i_9] [i_8] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) (signed char)123))))), (max((((/* implicit */unsigned long long int) ((((arr_19 [i_5] [i_6] [i_7] [i_8]) + (2147483647))) >> (((((/* implicit */int) (short)-7873)) + (7899)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7]))) : (15240189908575172775ULL)))))));
                                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_18 [i_5])) < (((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_5] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [(short)0] [(short)0]))) : (arr_20 [i_8])))))), (var_2)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) arr_1 [i_5]);
            }
        } 
    } 
}
