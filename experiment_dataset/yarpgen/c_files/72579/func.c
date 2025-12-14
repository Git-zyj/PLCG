/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72579
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
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3693860044U)) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_1])) : (((/* implicit */int) var_3))))) / (min((var_9), (((/* implicit */unsigned int) -1)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((unsigned long long int) arr_12 [5U] [i_3] [i_2] [i_1] [i_0]));
                                var_13 = ((/* implicit */short) arr_0 [i_4] [i_4 + 2]);
                                var_14 = ((/* implicit */signed char) ((max((var_7), (((/* implicit */long long int) ((unsigned short) 601107239U))))) < (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_2] [i_4 + 2])) : (((/* implicit */int) var_3)))) / (arr_9 [i_2] [i_4 + 2]))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20655)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4 + 2])) : (((/* implicit */int) ((unsigned short) var_1))))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [6LL] [i_0] = max((max((arr_19 [17U] [i_1] [6U] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_20 [i_5] [i_5] [6ULL] [i_1] [6ULL]))))))), (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_6])));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) * (((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_5 - 2] [i_6])), (((unsigned char) var_1)))))));
                                var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) * (((0ULL) ^ (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_6]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)20479)), (max((870364527855099590LL), (((/* implicit */long long int) var_8))))))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_6 [i_0] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_5 - 4] [i_5 - 3] [i_5 - 3] [i_2]))) : (min((var_1), (((/* implicit */unsigned long long int) (short)-12703))))))));
                                arr_22 [i_0] [i_1] [i_1] [i_2] [(unsigned short)8] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (max((var_2), (var_7)))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (max((((/* implicit */unsigned int) var_4)), (601107239U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_3)))) >= (((/* implicit */int) (unsigned char)160))))))));
                                var_18 = ((/* implicit */short) 8547729697704383820ULL);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (((-(-870364527855099591LL))) - (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-15945)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)16] [i_2]))) : (var_0))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [(short)16] [i_2]))) - (arr_3 [i_2] [i_1] [(signed char)7]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_6);
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) var_10));
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (536870400)));
}
