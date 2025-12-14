/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70646
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
    var_11 &= ((/* implicit */unsigned char) (-((-(var_9)))));
    var_12 &= ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) - (max((17557826306048LL), (((/* implicit */long long int) 3882127797U)))))), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (7735348899863524353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_1) : (((/* implicit */long long int) 3382320426U))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) ((short) max((((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62317)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (912646870U)))))));
                    var_15 -= ((/* implicit */unsigned char) min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (arr_5 [i_1] [i_2]))))));
                }
                for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_16 [i_3] = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (arr_14 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0])));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)255))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_2))))))))));
    var_18 -= ((/* implicit */long long int) (-(var_9)));
}
