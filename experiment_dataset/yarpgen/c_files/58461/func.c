/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58461
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
    var_13 += ((unsigned int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */int) var_7);
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2])), (((((/* implicit */int) arr_7 [i_3 + 1] [i_1])) << (((max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0])), (arr_6 [i_3] [i_2]))) - (9535793501991348002ULL))))))))));
                                arr_15 [i_0] &= arr_2 [i_1];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [7ULL] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 + 1]))))) || (((/* implicit */_Bool) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2]))))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_16 [i_5] [i_5] [i_5] [i_5]))))))), (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))))))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned char) (-(min(((+(-805395699))), (((/* implicit */int) var_12))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_26 [i_7] [i_1] [i_2] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) arr_6 [i_7 - 1] [i_8 + 3]);
                                var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_9 [i_0] [i_7 - 1] [i_8 - 1] [i_2])), (max((var_0), (((((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)1] [i_2] [i_7])) ? (arr_14 [i_8] [i_7] [i_7] [i_0] [i_1] [i_1] [i_0]) : (1804237270U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), ((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))))))));
}
