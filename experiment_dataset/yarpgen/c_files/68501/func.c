/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68501
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
    var_15 = ((/* implicit */_Bool) var_7);
    var_16 = ((/* implicit */long long int) var_3);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_14);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) ((_Bool) var_4))), (max((((/* implicit */short) arr_10 [i_2 + 2] [i_1] [i_2] [i_3])), (var_2)))));
                        arr_12 [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (short)2016)), (11768313719627327709ULL))), (6678430354082223915ULL)))) ? (6641419832000915636ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 11768313719627327717ULL))))));
                        arr_13 [3] [i_1] [i_1] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_3])))), ((+(11768313719627327709ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 - 1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (11768313719627327709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-22775))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_12))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        arr_18 [i_4] [(unsigned char)9] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)6] [(signed char)6])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_7 [i_4] [5] [(_Bool)1]))))) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)22775))))))));
        arr_19 [i_4] = ((/* implicit */int) max((((signed char) ((arr_15 [i_4] [i_4]) % (((/* implicit */long long int) -786057395))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) : (var_6)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */signed char) ((((((/* implicit */long long int) -786057395)) < (arr_5 [i_5] [i_5]))) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_6 [i_5] [i_5] [4ULL]) : (((/* implicit */int) var_5))))));
        arr_23 [(short)0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [(signed char)0] [i_5] [i_5] [i_5]))) : (arr_20 [i_5]));
        arr_24 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_5] [(unsigned short)3])))));
        arr_25 [i_5] = max((((/* implicit */unsigned int) (short)-22759)), (21U));
        arr_26 [12] |= ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_5]));
    }
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_31 [4U] = (+(((((/* implicit */_Bool) (unsigned short)14161)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6] [(unsigned char)15] [i_6]))))) : (((/* implicit */int) ((_Bool) var_0))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_38 [(short)14] [(short)14] = ((/* implicit */unsigned char) (~(137438953471ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_45 [i_9] [i_9] [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [2LL] [i_7 + 1] [i_10 + 1] [(short)6] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_43 [i_9] [i_10] [i_9] [i_10 + 3] [i_10] [i_10])) : (((/* implicit */int) arr_43 [i_9] [i_10] [i_10] [i_10 + 1] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10] [7] [i_10 + 2] [i_9] [i_7 - 1] [i_7 + 1]))) : ((~(-6675745239220831188LL)))));
                                arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) 0);
                            }
                        } 
                    } 
                    arr_47 [i_6] [2] [i_6] [i_8] = ((/* implicit */unsigned char) max(((((~(((/* implicit */int) (_Bool)1)))) + (786057394))), (max((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) (short)22741)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((var_9) > (((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        arr_51 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) max((((long long int) max((var_9), (-786057383)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (6675745239220831187LL)))))))));
                        arr_52 [4ULL] [4ULL] = ((/* implicit */long long int) (+((~((-(((/* implicit */int) arr_3 [i_6] [(unsigned short)8]))))))));
                        arr_53 [i_11] [i_6] [3ULL] [i_6] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_57 [4LL] [i_6] [(short)6] [i_12] [i_12] = ((/* implicit */unsigned short) arr_43 [i_6] [i_6] [i_7] [(unsigned short)11] [i_8] [i_12]);
                        arr_58 [i_12] [i_7 + 1] [i_6] [i_12] [i_6] = ((/* implicit */_Bool) (~(((unsigned long long int) (unsigned char)255))));
                    }
                    arr_59 [i_6] [i_7] [i_7 - 1] [i_6] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) arr_54 [i_6] [i_7] [i_8] [i_7 + 1] [i_7 - 1])));
                }
            } 
        } 
        arr_60 [i_6] [(short)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)4))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (short)22754))))));
    }
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) var_14)))))));
}
