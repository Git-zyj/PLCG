/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80762
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
    var_17 = ((/* implicit */int) (~(min((((/* implicit */long long int) var_10)), (var_3)))));
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_8 [i_0]))));
                            var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) ((1363088434) >> (((var_12) - (7303409857493371011LL)))))), (arr_2 [i_3])));
                            var_22 = ((/* implicit */unsigned int) var_11);
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_8);
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) >= (((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))))), (((unsigned long long int) var_5)))))))));
                /* LoopSeq 4 */
                for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_11 [i_0] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 922184601U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((min((((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1])), (1870141558))) < (((/* implicit */int) ((unsigned char) var_3))))))));
                }
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_20 [i_0] = ((/* implicit */_Bool) (-(arr_15 [i_0] [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_27 = ((((/* implicit */long long int) 339405978)) ^ (min((((/* implicit */long long int) arr_5 [i_7])), (((9223372036854775807LL) | (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [i_1])))))));
                                arr_26 [i_0] [i_0] [i_0] = ((((arr_15 [i_6] [i_1] [i_0]) & (arr_15 [i_7] [i_1] [i_1]))) & (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (1870141577)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (((_Bool)1) || ((_Bool)1))))));
                    var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) (signed char)32))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_11)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]))))))) : (max((((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((unsigned char) var_14)))))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)144))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (var_3)))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((min((arr_19 [i_8 + 1] [i_8 + 1] [i_8] [i_8]), (((int) var_4)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) arr_2 [i_1]))))))));
                }
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9 + 1] [i_1] [i_0] [i_9 + 1]))) : (var_3))), (min((arr_11 [i_9 + 1] [i_1] [i_9] [i_9] [i_9]), (arr_11 [i_9 + 1] [i_1] [i_9] [i_1] [i_0])))));
                    var_32 -= ((/* implicit */unsigned char) ((long long int) var_3));
                    arr_34 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_13)) + (((/* implicit */int) (short)-32758)))))))));
                    arr_35 [i_9] [i_1] = arr_1 [i_0] [i_0];
                    var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= ((-(arr_5 [i_9 + 1])))));
                }
            }
        } 
    } 
    var_34 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((var_16) + (((/* implicit */int) var_9))))) : (((((_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_14)))) : (var_12))));
}
