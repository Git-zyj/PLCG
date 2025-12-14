/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6239
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0 + 1] &= ((/* implicit */long long int) ((((/* implicit */int) ((-7208406228268246314LL) != (-7208406228268246314LL)))) % (((/* implicit */int) (unsigned short)47946))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1])))));
                                arr_14 [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_0 + 1])), (var_7)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3 + 1])))))));
                                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)125))));
                            }
                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 24; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */short) ((arr_1 [i_3 - 1]) / (((/* implicit */long long int) var_1))));
                                arr_17 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                                var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5] [i_5 - 4]))));
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7208406228268246325LL))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_5 - 1] [i_1 - 1] [i_3 + 1] [i_0 + 1])) <= (((/* implicit */int) arr_12 [i_0] [i_5 - 4] [i_1 + 2] [i_3 - 3] [i_0 + 1]))));
                            }
                            for (long long int i_6 = 4; i_6 < 22; i_6 += 3) 
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */int) ((7208406228268246313LL) > (-7208406228268246333LL)))) > (((/* implicit */int) arr_3 [i_3]))));
                                arr_20 [i_6] [i_1] [i_3] [i_3] [i_6] [i_6] [i_1] = ((/* implicit */unsigned long long int) arr_15 [i_1] [i_1 - 1] [i_1] [i_3] [i_3] [i_2] [i_0 - 1]);
                                var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6 + 2])) ? (8528574260012931984LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-67)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1])))))));
                                var_21 = ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) 7208406228268246325LL))))))) << (((((/* implicit */int) arr_2 [i_1] [i_2] [i_6])) + (89)))));
                            }
                            for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_3 - 1] [i_7] = ((/* implicit */int) var_0);
                                var_22 = ((/* implicit */signed char) arr_18 [i_0] [i_1] [i_3] [i_7]);
                                var_23 = ((/* implicit */signed char) ((min(((-(arr_11 [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 4] [i_2] [i_1 - 4])))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (-7208406228268246314LL) : (-7412638428842411060LL))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [(short)1] [i_1] [i_1 - 3] [i_1 - 3] [i_3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (300573357U))))), ((~(((/* implicit */int) ((arr_21 [i_0] [i_0] [(unsigned char)11] [i_0 + 1] [i_0 + 1] [i_0] [(unsigned short)9]) <= (((/* implicit */unsigned long long int) arr_1 [i_1]))))))))))));
                                arr_25 [14ULL] [8LL] [i_2] [i_3] [i_7] |= ((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_0 - 1]);
                            }
                            /* LoopSeq 1 */
                            for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (arr_23 [i_8] [i_3] [i_2] [i_1 - 3] [i_0 + 1]))) >> (((var_11) - (2128637445)))))) | (arr_18 [i_0] [(_Bool)1] [i_3 - 1] [i_8]))))));
                                var_26 += (((-(arr_8 [i_0] [i_0 + 1]))) * (((int) (!(((/* implicit */_Bool) var_4))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 10; i_9 += 2) 
    {
        for (short i_10 = 3; i_10 < 10; i_10 += 2) 
        {
            {
                arr_36 [i_9] = max((((/* implicit */long long int) arr_28 [i_10] [i_10] [i_9] [i_9] [i_9] [i_10])), ((+(((((/* implicit */_Bool) arr_1 [i_9])) ? (arr_0 [i_9 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9] [i_9] [i_9 - 3] [4ULL] [i_9] [i_10 - 1] [i_10]))))))));
                arr_37 [i_9] [i_9 - 3] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_27 -= ((/* implicit */int) var_12);
}
