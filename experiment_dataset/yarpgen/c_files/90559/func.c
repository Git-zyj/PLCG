/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90559
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (~(var_1)))) / (((unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) min((arr_4 [(unsigned char)2] [i_1 - 2] [(unsigned char)2]), (((/* implicit */unsigned int) var_8))))))))));
                var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 3354137815U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))) : (72169720U))))) == (((/* implicit */int) ((72169720U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_1)) : (arr_4 [i_0 - 2] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                arr_11 [i_3] [i_3] &= ((/* implicit */int) (-(((((((/* implicit */_Bool) 72169716U)) ? (arr_6 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [9LL]))))) - (((/* implicit */long long int) min((arr_3 [i_2] [i_3] [i_3]), (var_2))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (~(72169703U))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_15 = min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-75))))), ((+(arr_12 [i_2] [i_3] [i_4] [i_5]))));
                            var_16 = ((/* implicit */int) min(((-(4222797580U))), (((/* implicit */unsigned int) (-(var_6))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */int) var_10)), (min((var_2), (var_6))))));
                                var_18 = ((/* implicit */short) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 13768033645236956593ULL))))))), (((((/* implicit */long long int) (+(var_6)))) / (((((/* implicit */_Bool) 72169715U)) ? (((/* implicit */long long int) 569127628U)) : (var_9)))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_22 [i_2] [i_3] [15U] = ((/* implicit */unsigned long long int) var_10);
                                arr_23 [11] [(signed char)7] [i_4] [11] [i_7] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_2] [i_2] [i_5] [i_5])), (((var_6) & (((/* implicit */int) var_3)))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-(-22)));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((~(var_1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (var_6)))));
}
