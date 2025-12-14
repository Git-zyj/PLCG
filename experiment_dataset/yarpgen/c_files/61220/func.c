/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61220
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) >> (((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1] [i_2 - 1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (1405899292U)))))) ? (((int) max((var_7), (var_6)))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_8)))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) >> (((((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1] [i_2 - 1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (1405899292U))) - (1487732383U)))))) ? (((int) max((var_7), (var_6)))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_8))))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_9))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_1] [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_2 - 3] [i_0])) ? (var_1) : (((/* implicit */unsigned int) 235544188)))) * (((var_14) ? (arr_6 [i_0] [i_2 - 1] [i_2 + 1] [i_0]) : (arr_6 [i_0] [i_2 - 2] [i_2 - 3] [i_0])))));
                                arr_14 [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1])) || (((/* implicit */_Bool) ((long long int) var_15)))))), (var_5)));
                                arr_15 [i_1] [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] = var_2;
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0]);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (((unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (2420035409U))))))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
                            {
                                arr_20 [i_0] [i_1] [i_0] = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((arr_6 [i_1] [i_1] [i_2] [i_3]) >> (((arr_5 [i_1]) - (15395561515059042818ULL))))) >> (((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5 - 1] [i_5])) - (48835)))))) : (((/* implicit */_Bool) ((((arr_6 [i_1] [i_1] [i_2] [i_3]) >> (((((arr_5 [i_1]) - (15395561515059042818ULL))) - (10724659428678135666ULL))))) >> (((((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5 - 1] [i_5])) - (48835))) + (37784))))));
                                var_19 = ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_19 [i_2 - 2] [i_2 - 1] [i_0] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 1])) : (((/* implicit */int) arr_19 [i_2 - 3] [i_2 - 3] [i_5] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2])));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_1] [i_5 + 1] = ((/* implicit */short) ((unsigned short) var_6));
                            }
                            for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */signed char) var_5);
                                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_1]))));
                                var_21 = ((/* implicit */int) arr_5 [i_0]);
                                var_22 = 1874931876U;
                            }
                            var_23 = ((short) var_11);
                            arr_25 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (2420035425U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2 - 2] [i_3]))))) << (((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_15))) - (83LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (1874931876U)))))) : (var_10)));
                        }
                    } 
                } 
                arr_26 [i_1] = ((/* implicit */unsigned char) var_10);
                arr_27 [i_1] = ((/* implicit */unsigned long long int) 1874931871U);
                var_24 = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_25 = var_14;
    var_26 = ((/* implicit */unsigned long long int) var_11);
}
