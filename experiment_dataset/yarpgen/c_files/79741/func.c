/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79741
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(unsigned char)12] [i_0] [(signed char)5])) & (((/* implicit */int) var_1))))) ^ (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((-22LL) ^ (-3794231554248996646LL))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) arr_6 [i_4] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) arr_7 [(unsigned short)1] [i_2] [i_0] [i_3 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [10ULL] [i_1] [i_1] [i_1 + 1] [i_1])))))), (((/* implicit */unsigned long long int) ((var_11) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_9 [(signed char)12] [(signed char)12] [i_2] [(signed char)12] [(unsigned char)8] [(signed char)12])))) : (((/* implicit */int) var_1)))))));
                                arr_15 [i_0] [i_1] [i_2] [7] [i_4] = ((/* implicit */unsigned long long int) ((min((arr_8 [i_1] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 3]), (((/* implicit */unsigned long long int) ((unsigned char) var_1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_9 [i_0] [5ULL] [i_1 - 1] [i_4 + 2] [i_4] [i_3 + 2]))))));
                                var_13 = ((/* implicit */signed char) ((unsigned char) max((arr_11 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 + 1]), (arr_11 [13LL] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (+(max((max((var_3), (arr_3 [(short)13] [(short)13] [i_5]))), (arr_18 [i_0] [i_1] [i_0] [i_0])))));
                    var_14 += (-(((/* implicit */int) var_1)));
                }
                for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(var_3))), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_6]))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_6]))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [6ULL] [i_6])), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1]) < (((arr_11 [i_6] [i_6] [(signed char)2] [i_1] [13LL] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_1 + 1] [i_6])))))))))));
                    arr_24 [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1 + 1] [(short)13])) ? (arr_17 [i_0] [i_0] [i_1 - 2] [i_1 - 2]) : (arr_17 [i_0] [i_0] [i_1 + 1] [i_0])))), (((long long int) arr_17 [i_0] [i_1] [i_1 - 2] [i_0]))));
                }
            }
        } 
    } 
    var_15 |= ((/* implicit */signed char) ((unsigned char) var_12));
    var_16 = ((/* implicit */long long int) var_6);
}
