/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88573
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
    var_18 = ((/* implicit */unsigned long long int) (short)-32760);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 -= ((/* implicit */unsigned short) ((_Bool) (+(arr_6 [i_1 - 1] [i_2 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) arr_1 [i_1 - 3] [i_1 + 1]);
                            var_21 &= ((/* implicit */int) ((min(((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((int) var_0)))) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2])), (arr_10 [i_2 + 2] [i_2 - 1] [i_2 + 1]))))));
                            var_22 = min((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_3)))));
                            var_23 = ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_0] [i_2] [i_1 - 1] [i_1 + 1]) + (arr_15 [i_0] [i_1 + 2] [i_1] [i_2] [i_1 + 1] [i_4])))) ? ((((_Bool)1) ? (arr_15 [i_0] [i_1 + 2] [i_1] [i_2] [i_1 + 1] [i_4]) : (arr_15 [i_1] [i_1] [i_1] [i_2] [i_1 + 2] [i_1]))) : (min((arr_15 [i_0] [i_0] [i_1 + 1] [i_2] [i_1 - 4] [i_2]), (arr_15 [i_1 - 3] [i_1 - 4] [i_1 - 3] [i_2] [i_1 + 1] [i_4]))));
                        }
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 14; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((/* implicit */int) var_5)))))));
                            var_25 = ((/* implicit */unsigned long long int) arr_12 [i_5 + 1] [i_2 + 1] [i_1 + 1] [i_1 - 1]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_26 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)127)), (max((274877906943LL), (((/* implicit */long long int) var_5))))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_5 + 1] [i_5])) : (((/* implicit */int) min((((/* implicit */short) var_13)), (var_16)))))) : (min(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))));
                            var_27 = ((/* implicit */unsigned int) 1798227781647296170ULL);
                            var_28 = ((max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1 - 1]))) / (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (34359738367LL))), ((_Bool)1))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((int) min((6024992094233405770LL), (((/* implicit */long long int) arr_19 [i_5 - 2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2] [i_1 - 3])))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1798227781647296178ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0] [i_0])));
                            var_31 = ((/* implicit */int) ((short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]));
                        }
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((469762048U), (max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_5] [i_9]))))))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1 - 3] [i_2] [i_5] [i_9] [i_9]))))), (arr_22 [i_0] [i_0] [i_2 + 2] [i_5 + 3] [i_0])))) : (((/* implicit */int) var_8))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(arr_12 [i_0] [i_1 - 2] [i_2 + 1] [i_5 - 2]))))));
                        }
                        var_34 = ((/* implicit */short) arr_3 [i_0] [i_1] [i_0]);
                    }
                    var_35 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_1] [i_0]))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2 - 1] [i_10] [i_10 + 1] [i_10 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16648516292062255439ULL)))) ? (1798227781647296166ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)45822)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0] [i_2 + 2] [i_10])), (arr_13 [i_0] [i_1] [i_2 + 2] [i_10])))) ? (max((4039213658U), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [9U]))));
                        var_37 = ((/* implicit */int) (short)-18591);
                    }
                    for (long long int i_11 = 2; i_11 < 14; i_11 += 4) 
                    {
                        var_38 = ((/* implicit */short) (+(arr_21 [i_0] [i_0] [i_1] [i_0] [i_2] [i_11 - 2] [i_2])));
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 + 2] [i_11 + 1] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1 + 1] [i_2 + 2] [i_11 - 1] [i_11]))))) : (max((var_2), (((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_2 + 1] [i_11 + 3] [i_12]))))));
                            var_40 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(-3911598913235726621LL)))), ((~(16648516292062255435ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned char) ((16648516292062255436ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [10] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))));
                            var_43 -= ((/* implicit */unsigned short) arr_33 [i_0] [i_0]);
                        }
                        var_44 = ((/* implicit */_Bool) var_9);
                    }
                    var_45 |= ((/* implicit */unsigned char) min((((/* implicit */int) arr_28 [i_2] [i_1] [i_1] [i_2] [i_0])), ((+(((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 2]))))));
                    var_46 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [2] [i_1] [i_1 - 1] [i_2 + 2])) ? (((((/* implicit */_Bool) 16648516292062255460ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 3] [i_2])) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) (unsigned char)53)) & (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) & (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_0]))));
                }
            } 
        } 
    } 
}
