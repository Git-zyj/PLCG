/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67813
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
    var_12 = ((/* implicit */_Bool) var_11);
    var_13 = ((/* implicit */int) ((var_5) >> (((var_9) + (558682998)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) var_6);
                    var_15 = ((/* implicit */int) ((short) ((unsigned int) arr_6 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2])));
                    arr_8 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-123))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [(short)9] [i_0] [i_0] = ((/* implicit */long long int) min((min((min((arr_5 [i_3 + 2]), (((/* implicit */unsigned int) (signed char)122)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32767))))))), (((unsigned int) (!(((/* implicit */_Bool) var_2)))))));
                                arr_18 [i_2] [i_2] |= ((/* implicit */unsigned char) max(((+(arr_4 [i_3] [i_3 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)43057)))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((arr_2 [i_2 - 1]) + (9223372036854775807LL))) >> (((arr_2 [i_2 - 1]) + (5367648345120300177LL)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */long long int) min((((-1801071181) | (((/* implicit */int) arr_20 [i_5 - 1])))), (((/* implicit */int) max((arr_20 [i_5 + 1]), (((/* implicit */short) (_Bool)1)))))));
        arr_23 [i_5] [i_5 - 2] = ((/* implicit */int) ((unsigned int) min((((0LL) & (((/* implicit */long long int) ((/* implicit */int) (short)6142))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [(signed char)3])) : (var_11)))))));
        var_17 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))))) || (((/* implicit */_Bool) var_3))));
        arr_24 [i_5] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) (((_Bool)1) && (((/* implicit */_Bool) 0)))))), (var_6)));
    }
    for (signed char i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */long long int) 3113640653U);
        arr_28 [i_6] = ((/* implicit */unsigned int) (+((~(var_6)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_32 [(_Bool)1] |= ((/* implicit */unsigned char) arr_19 [i_7] [i_7]);
        var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0)))) >> (((((((/* implicit */_Bool) arr_30 [i_7])) ? (var_2) : (((/* implicit */int) var_1)))) - (7880042))))))));
    }
    var_19 = ((/* implicit */unsigned char) (-(max((var_11), (max((var_9), (2147483647)))))));
}
