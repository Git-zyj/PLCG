/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67779
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)649)), (1620431854)));
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_3 [i_0] [8LL] [i_0]))))));
                    var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_1]);
                    var_15 ^= ((/* implicit */int) min((((((/* implicit */_Bool) 168308825)) ? (2404452440086975352LL) : (-2404452440086975347LL))), (((((/* implicit */_Bool) (signed char)-37)) ? (-2404452440086975347LL) : (2404452440086975339LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)0] [i_2] [i_2] [i_4])) ? (arr_7 [i_0] [i_1] [i_2] [i_0] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [10LL] [(_Bool)0] [i_0] [i_3 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_2 + 3] [i_0] [i_3 + 2]))) : (max((arr_7 [i_0] [(unsigned char)14] [16LL] [(unsigned char)14] [(unsigned char)14]), (arr_7 [i_0] [i_1] [i_2] [10LL] [i_4])))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_3 + 2] [i_0])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [6LL])) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_1])))))), (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
