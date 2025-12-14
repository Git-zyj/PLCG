/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79896
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3077481743U)) ? (6988254666800417309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))))) ? (((((/* implicit */_Bool) -1205662134)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
                arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) (unsigned short)46259);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)))) ? (((/* implicit */int) (unsigned short)46259)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_12 [i_3] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)127))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                            {
                                var_13 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(var_1)))))) ? (var_6) : (((((/* implicit */_Bool) 11458489406909134306ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) (unsigned short)50304))))) : (var_6)))));
                                arr_16 [i_1] [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) var_11);
                                var_14 = ((/* implicit */int) var_7);
                                arr_17 [i_4] [(unsigned short)2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) (unsigned short)64912);
                                var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13513)))));
                            }
                            var_16 = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_7);
}
