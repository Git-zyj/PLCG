/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66629
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
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) % ((+(((/* implicit */int) (short)9398))))))));
    var_18 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (unsigned char)147))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_16)) : (var_6))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned short) (short)14438);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) ((_Bool) (short)-14440)))))), ((short)14447)));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) var_12)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((arr_6 [i_3] [i_4]) / (((/* implicit */long long int) ((-272085509) / (((/* implicit */int) arr_7 [i_1] [i_3] [i_1])))))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) var_15);
                            arr_17 [7] [7] [i_1] [i_1] [i_1] [14] [i_1] = ((((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1])) / (((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1])));
                            arr_18 [i_4] = (-((+(((/* implicit */int) arr_14 [i_3] [(short)9] [i_1] [i_4] [i_4])))));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (-740287067)))) : (((((/* implicit */_Bool) (unsigned char)147)) ? (11535410043843999765ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32605)))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(unsigned short)5] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5))))));
                            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                            var_27 = ((/* implicit */short) -740287055);
                        }
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                            arr_27 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7 + 1] [i_7 - 1] [i_3]))));
                            var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 1] [i_7]))));
                            var_29 *= ((/* implicit */unsigned short) (-(((((/* implicit */int) (short)-14436)) + (-740287047)))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) ((_Bool) arr_21 [i_8 - 2] [i_8 - 2] [i_8] [17U] [i_8 - 1] [i_8]));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned short) var_13)))));
                            arr_30 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] [i_4] = ((/* implicit */short) ((unsigned char) (_Bool)1));
                        }
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (4298826964761312964LL)));
                        var_33 ^= ((/* implicit */short) ((((/* implicit */int) var_9)) >= (arr_20 [i_4] [i_4] [i_1] [i_3] [i_1] [i_1])));
                        var_34 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                    }
                    for (short i_9 = 4; i_9 < 15; i_9 += 4) 
                    {
                        arr_33 [i_9 - 2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (-(-272085509)));
                        arr_34 [(unsigned char)17] [i_1] [i_1] [13ULL] [11] [i_9] = ((/* implicit */short) ((unsigned char) arr_19 [9] [9] [i_9]));
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 16; i_10 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) arr_35 [i_1] [(unsigned short)11] [i_10] [(unsigned short)11] [(short)5]);
                            var_36 = ((/* implicit */int) min((var_36), (max((740287067), (((/* implicit */int) (unsigned short)21343))))));
                        }
                        var_37 -= ((/* implicit */unsigned char) var_6);
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 17; i_11 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) var_3);
                        var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44185)) ? (((/* implicit */int) (short)-9386)) : (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            arr_42 [i_1] = ((long long int) (unsigned char)35);
                            arr_43 [i_12] [i_11] [i_11] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65520))))) ? ((~(((/* implicit */int) arr_19 [i_11 - 2] [i_11 + 1] [i_11 - 1])))) : (((/* implicit */int) max((((/* implicit */short) arr_22 [(short)16] [i_2])), (max((((/* implicit */short) var_7)), (var_8))))))));
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) min((((arr_20 [i_1] [i_11 + 1] [i_11 - 1] [i_12] [(unsigned char)3] [i_11 + 1]) & (((/* implicit */int) (short)-20830)))), ((+(arr_20 [i_3] [i_11 + 1] [i_11 - 1] [i_12] [i_12] [i_12]))))))));
                            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) max((max((((/* implicit */long long int) max((var_12), (var_14)))), (((var_15) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))))), (((/* implicit */long long int) max((arr_37 [i_12] [i_11 - 1] [i_11 + 1] [i_2] [i_2] [i_1]), (((/* implicit */short) (_Bool)1))))))))));
                            var_42 = var_5;
                        }
                    }
                }
            } 
        } 
        arr_44 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)227))))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        var_43 = ((/* implicit */int) 2808077574560448189LL);
        var_44 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_45 [i_13]) & (arr_46 [i_13])))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((unsigned short) var_6))))))));
        var_45 ^= ((/* implicit */int) ((short) max((arr_45 [i_13]), (arr_45 [i_13]))));
        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (+(((/* implicit */int) var_16)))))));
    }
}
