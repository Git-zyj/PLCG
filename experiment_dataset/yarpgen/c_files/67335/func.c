/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67335
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
    var_15 = ((/* implicit */short) (unsigned short)42127);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)7694)) >= (((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_1] [i_1])) == (var_7)))))))) * (((unsigned long long int) max((arr_8 [i_1]), (((/* implicit */unsigned int) (unsigned short)1023))))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)1036)) - (((/* implicit */int) (short)-17746))));
                    }
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((((arr_2 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))))), (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_6 [(short)14] [i_1] [i_2])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0])) < (arr_2 [i_0])))), (min((arr_6 [i_2] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)64540)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(4062699336U)))) < (max((arr_1 [i_0] [i_5 - 1]), (((/* implicit */long long int) 2179180265U)))))))) == ((+(min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (396438394617480604ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = (~(min(((-(3258785690U))), (((unsigned int) var_4)))));
}
