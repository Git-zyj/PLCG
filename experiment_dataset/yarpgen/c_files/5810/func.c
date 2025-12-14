/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5810
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
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_2 [(unsigned char)7] [i_1] [i_2])) : (((/* implicit */int) var_6))));
                    var_16 = ((/* implicit */unsigned short) ((short) arr_2 [i_0] [i_1] [i_2]));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    arr_9 [i_3] = ((/* implicit */unsigned long long int) var_7);
                    var_17 = ((/* implicit */int) (signed char)48);
                }
                arr_10 [i_0] [8] [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) arr_3 [(signed char)0] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    var_18 = ((/* implicit */short) max((((/* implicit */int) arr_8 [(unsigned short)4] [i_1] [i_1] [(unsigned short)10])), (max((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)37))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)26082))))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_1] [6] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                        arr_18 [i_5] [1U] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) <= (var_10))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)232)), ((unsigned short)26109))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_22 [i_6] [(signed char)12] [i_6] [i_6] [i_1] [(unsigned short)6] = ((/* implicit */int) (unsigned char)83);
                        arr_23 [i_1] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) arr_2 [(_Bool)1] [i_1] [i_4 + 1]);
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_5))))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2))))));
                    }
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39454)) && (((/* implicit */_Bool) (unsigned short)26084))));
                            var_20 = ((/* implicit */unsigned short) (-(((var_2) >> (((((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)39467)))) + (47)))))));
                        }
                        for (short i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (-547971162)))) ? (((((/* implicit */int) arr_24 [i_0] [i_4 + 2] [i_4] [i_9 + 3])) - (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_21 [(signed char)2] [i_4 - 1] [i_0] [i_9]))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26077))))) - (((/* implicit */int) arr_11 [i_4 + 1] [i_9 + 1] [(unsigned short)3] [i_9 - 2])))))));
                            arr_34 [(unsigned short)0] [i_1] [i_7] [3U] = ((/* implicit */int) (+(max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_3))), (((/* implicit */unsigned int) ((arr_20 [i_7] [i_7] [14] [(_Bool)0] [i_7]) / (((/* implicit */int) arr_15 [i_4] [i_4] [i_4 - 1])))))))));
                        }
                        arr_35 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_21 [i_0] [i_1] [i_7] [i_7])), ((~(var_12)))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((((/* implicit */int) ((unsigned short) (unsigned short)39463))) >> (((((((((/* implicit */int) arr_13 [i_1] [(unsigned char)10] [i_7])) + (2147483647))) >> (((/* implicit */int) arr_8 [i_0] [8ULL] [i_4] [i_1])))) - (16371)))))));
                        var_23 = ((/* implicit */short) var_5);
                        var_24 = ((/* implicit */signed char) ((short) (unsigned short)39459));
                    }
                }
            }
        } 
    } 
    var_25 -= (+(((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
    {
        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 3; i_13 < 21; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                arr_48 [i_10 + 1] [(short)3] [(signed char)17] [i_11] [i_14] [(unsigned short)12] = ((/* implicit */signed char) ((short) max((var_10), (arr_40 [i_12]))));
                                var_26 -= min(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) var_1)));
                                var_27 = ((/* implicit */unsigned long long int) arr_44 [i_11]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 3; i_15 < 21; i_15 += 2) 
                    {
                        var_28 = var_12;
                        /* LoopSeq 3 */
                        for (long long int i_16 = 3; i_16 < 18; i_16 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) - (var_14)))));
                            var_30 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_13)))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_51 [i_11 - 1] [i_11] [i_11 + 1] [i_11] [(short)5])) : (-547971140)))));
                            arr_53 [i_16 + 4] [i_11] [(unsigned short)6] [17U] [5ULL] [i_11] [i_10 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)-82)) | (((/* implicit */int) (unsigned short)50116)))))))));
                        }
                        for (unsigned int i_17 = 1; i_17 < 19; i_17 += 3) 
                        {
                            arr_57 [i_10 + 2] [i_11] [i_15] [i_15] = ((/* implicit */unsigned int) (unsigned char)219);
                            arr_58 [(unsigned char)11] [(signed char)4] [i_11] [i_11] [(signed char)11] [i_10 - 1] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_8)) - (26922)))))), (((unsigned long long int) var_3)))), (((unsigned long long int) arr_50 [i_15 - 3] [i_11 - 1] [i_11] [i_11] [i_10] [i_10 - 1]))));
                            arr_59 [i_11] [i_11 - 1] [(signed char)9] [7U] [i_17 - 1] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1525728756639572835LL)));
                            arr_60 [i_11 - 1] [(short)12] [i_11] [i_11] [i_11] = ((/* implicit */int) ((unsigned int) (unsigned short)26109));
                            var_31 = ((/* implicit */signed char) (unsigned char)37);
                        }
                        for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_10] [(unsigned short)12] [i_12] [i_12] [i_15 + 1] [i_18 - 1]))) : (var_3))))) + (((/* implicit */int) (unsigned char)7)))))));
                            arr_64 [i_11] [i_11 - 1] [i_12] [i_12] [i_15] [i_18] [(signed char)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_46 [i_10 - 1] [i_11] [(_Bool)1] [i_15 - 2] [i_12]) ? (((/* implicit */int) arr_44 [i_11])) : (((/* implicit */int) var_7)))))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((unsigned long long int) var_12)) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                            var_34 = ((/* implicit */short) var_10);
                        }
                        arr_65 [(unsigned char)2] [i_11] [i_11] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_50 [i_10] [i_10 - 2] [i_11] [i_10] [i_10 - 2] [i_10 + 2])) : (var_12)))) : (var_2)));
                        arr_66 [i_10] [i_11] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (var_9)))))) ? (((((/* implicit */_Bool) ((int) var_12))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_7))))))) : ((+(arr_47 [15ULL] [(unsigned short)16] [i_11] [(_Bool)1])))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        arr_70 [i_10 - 2] [i_11] [i_11] [i_19] [i_19] = (unsigned char)182;
                        var_35 = arr_42 [i_11 + 1] [i_11 + 1] [i_12];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 3) 
                    {
                        arr_73 [i_10] [i_10 + 2] [(unsigned short)2] [i_10 + 2] [i_11] [i_10 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) / (((/* implicit */int) var_1))));
                        arr_74 [(unsigned short)19] [i_10] [19] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [12U] [i_11] [i_11] [i_11 - 1] [(unsigned short)15] [i_11 - 1])) ? (((/* implicit */int) arr_50 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) (short)(-32767 - 1)))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) == (((/* implicit */int) ((unsigned char) var_8)))));
                        arr_75 [(unsigned char)8] [i_11 + 1] [(short)14] [i_12] [i_11 - 1] [(unsigned short)6] &= ((/* implicit */unsigned char) var_3);
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
}
